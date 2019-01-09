//#include <iostream>
//#include <sstream>
//using namespace std;
//
//class Rational {
//public:
//	Rational() {
//		data_numerator = 0;
//		data_denominator = 1;
//	}
//			
//	Rational(int numerator, int denominator) {
//		if (numerator == 0){
//			data_numerator = 0;
//			data_denominator = 1;
//		}
//		else{
//			int divisor = GreatestCommonDivisor(numerator, denominator);
//			//求出p,q的最大公约数。
//			data_denominator = denominator / divisor;
//			data_numerator = numerator / divisor;
//			if (data_numerator * data_denominator > 0){
//				data_numerator = abs(numerator / divisor);
//				data_denominator = abs(denominator / divisor);
//			}
//			//依据要求，同号保证分子分母都是正。
//			if (data_numerator * data_denominator < 0){
//				data_numerator = abs(numerator / divisor) * -1;
//				data_denominator = abs(denominator / divisor);
//			}
//			//依据要求，异号保证分子为负，分母为正。
//		}
//	}
//			
//	int Numerator() const {
//		return data_numerator;
//	}
//			
//	int Denominator() const {
//		return data_denominator;
//	}
//
//			
//private:
//	int GreatestCommonDivisor(int a, int b){
//		a = abs(a);
//		b = abs(b);
//		while (a > 0 && b > 0){
//			if (a > b){
//				a = a % b;
//			}
//			else {
//				b = b % a;
//			}
//		}
//		return a + b;
//	}
//	int data_numerator;
//	int data_denominator;
//		
//};
//
//
//bool operator==(const Rational& r1, const Rational& r2){
//	if (r1.Numerator() == r2.Numerator() && r1.Denominator() == r2.Denominator()){
//		return true;
//	}
//	return false;
//}
//
//ostream& operator<<(ostream& stream, const Rational& r){
//	stream << r.Numerator() << '/' << r.Denominator();
//	return stream;
//}
//
//istream& operator>>(istream& stream, Rational& r){
//	int n, d;
//	char c;
//	stream >> n >> c >> d;
//	if (stream && c == '/'){
//		r = Rational(n, d);
//	}
//	return stream;
//}
//
//
//// Реализуйте для класса Rational операторы << и >>
//
//int main() {
//	
//	{
//		ostringstream output;
//		output << Rational(-6, 8);
//		if (output.str() != "-3/4") {
//			cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//			return 1;
//		}
//	}
//	
//	{
//		istringstream input("5/7");
//		Rational r;
//		input >> r;
//		bool equal = r == Rational(5, 7);
//		if (!equal) {
//			cout << "5/7 is incorrectly read as " << r << endl;
//			return 2;
//		}
//	}
//	
//	{
//		istringstream input("5/7 10/8");
//		Rational r1, r2;
//		input >> r1 >> r2;
//		bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//		if (!correct) {
//			cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
//			return 3;
//		}
//
//		//cout << r1 << endl;
//		input >> r1;
//		//cout << r1 << endl;
//		input >> r2;
//		correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//
//		if (!correct) {
//			cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
//			return 4;
//		}
//	}
//
//	cout << "OK" << endl;
//	
//	return 0;
//}
