//#include <iostream>
//using namespace std;
//
////������Լ��,����a,bΪ�������
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
//			//���p,q�����Լ����
//			data_denominator = denominator / divisor;
//			data_numerator = numerator / divisor;
//			if (data_numerator * data_denominator > 0){
//				data_numerator = abs(numerator / divisor);
//				data_denominator = abs(denominator / divisor);
//			}
//			//����Ҫ��ͬ�ű�֤���ӷ�ĸ��������
//			if (data_numerator * data_denominator < 0){
//				data_numerator = abs(numerator / divisor) * -1;
//				data_denominator = abs(denominator / divisor);
//			}
//			//����Ҫ����ű�֤����Ϊ������ĸΪ����
//		}
//	}
//
//	int Numerator() const {
//		// ���֧ѧݧڧ٧�ۧ�� ����� �ާ֧���
//		return data_numerator;
//	}
//
//	int Denominator() const {
//		// ���֧ѧݧڧ٧�ۧ�� ����� �ާ֧���
//		return data_denominator;
//	}
//
//private:
//	// ����ҧѧӧ��� ���ݧ�
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
