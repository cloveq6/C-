#include <iostream>
using namespace std;

class Rational {
public:
		Rational() {
			data_numerator = 0;
			data_denominator = 1;
		}
	
		Rational(int numerator, int denominator) {
			if (numerator == 0){
				data_numerator = 0;
				data_denominator = 1;
			}
			else{
				int divisor = GreatestCommonDivisor(numerator, denominator);
				//求出p,q的最大公约数。
				data_denominator = denominator / divisor;
				data_numerator = numerator / divisor;
				if (data_numerator * data_denominator > 0){
					data_numerator = abs(numerator / divisor);
					data_denominator = abs(denominator / divisor);
				}
				//依据要求，同号保证分子分母都是正。
				if (data_numerator * data_denominator < 0){
					data_numerator = abs(numerator / divisor) * -1;
					data_denominator = abs(denominator / divisor);
				}
				//依据要求，异号保证分子为负，分母为正。
			}
		}
	
		int Numerator() const {
			return data_numerator;
		}
	
		int Denominator() const {
			return data_denominator;
		}
	
	private:
		int GreatestCommonDivisor(int a, int b){
			a = abs(a);
			b = abs(b);
			while (a > 0 && b > 0){
				if (a > b){
					a = a % b;
				}
				else {
					b = b % a;
				}
			}
			return a + b;
		}
		int data_numerator;
		int data_denominator;

};

// Реализуйте для класса Rational операторы ==, + и -

bool operator==(const Rational& r1, const Rational& r2){
	if (r1.Numerator() == r2.Numerator() && r1.Denominator() == r2.Denominator()){
		return true;
	}
	return false;
}

Rational operator+(const Rational& r1, const Rational& r2){
	int new_denominator = 0;
	int new_numerator = 0;
	new_denominator = r1.Denominator() * r2.Denominator();
	new_numerator = r1.Numerator() * r2.Denominator() + r2.Numerator() * r1.Denominator();
	Rational r3(new_numerator, new_denominator);
	return r3;
}

Rational operator-(const Rational& r1, const Rational& r2){
	int new_denominator = 0;
	int new_numerator = 0;
	new_denominator = r1.Denominator() * r2.Denominator();
	new_numerator = r1.Numerator() * r2.Denominator() - r2.Numerator() * r1.Denominator();
	Rational r3(new_numerator, new_denominator);
	return r3; 
}

int main() {
	{
		Rational r1(4, 6);
		Rational r2(2, 3);
		bool equal = r1 == r2;
		if (!equal) {
			cout << "4/6 != 2/3" << endl;
			return 1;
		}
	}

	{
		Rational a(2, 3);
		Rational b(4, 3);
		Rational c = a + b;
		bool equal = c == Rational(2, 1);
		if (!equal) {
			cout << "2/3 + 4/3 != 2" << endl;
			return 2;
		}
	}

	{
		Rational a(5, 7);
		Rational b(2, 9);
		Rational c = a - b;
		bool equal = c == Rational(31, 63);
		if (!equal) {
			cout << "5/7 - 2/9 != 31/63" << endl;
			return 3;
		}
	}

	cout << "OK" << endl;
	return 0;
}
