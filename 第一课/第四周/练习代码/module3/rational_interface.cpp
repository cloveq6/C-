//#include <iostream>
//using namespace std;
//
////求解最大公约数,包含a,b为负数情况
//int GreatestCommonDivisor(int a, int b){
//	a = abs(a);
//	b = abs(b);
//	while (a > 0 && b > 0){
//		if (a > b){
//			a = a % b;
//		}
//		else {
//			b = b % a;
//		}
//	}
//	return a + b;
//}
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
//		// Реализуйте этот метод
//		return data_numerator;
//	}
//
//	int Denominator() const {
//		// Реализуйте этот метод
//		return data_denominator;
//	}
//
//private:
//	// Добавьте поля
//	int data_numerator;
//	int data_denominator;
//};
//
//int main() {
//	{
//		const Rational r(3, 10);
//		if (r.Numerator() != 3 || r.Denominator() != 10) {
//			cout << "Rational(3, 10) != 3/10" << endl;
//			return 1;
//		}
//	}
//
//	{
//		const Rational r(8, 12);
//		if (r.Numerator() != 2 || r.Denominator() != 3) {
//			cout << "Rational(8, 12) != 2/3" << endl;
//			return 2;
//		}
//	}
//
//	{
//		const Rational r(-4, 6);
//		if (r.Numerator() != -2 || r.Denominator() != 3) {
//			cout << "Rational(-4, 6) != -2/3" << endl;
//			return 3;
//		}
//	}
//
//	{
//		const Rational r(4, -6);
//		if (r.Numerator() != -2 || r.Denominator() != 3) {
//			cout << "Rational(4, -6) != -2/3" << endl;
//			return 3;
//		}
//	}
//
//	{
//		const Rational r(0, 15);
//		if (r.Numerator() != 0 || r.Denominator() != 1) {
//			cout << "Rational(0, 15) != 0/1" << endl;
//			return 4;
//		}
//	}
//
//	{
//		const Rational defaultConstructed;
//		if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
//			cout << "Rational() != 0/1" << endl;
//			return 5;
//		}
//	}
//
//	cout << "OK" << endl;
//	return 0;
//}
