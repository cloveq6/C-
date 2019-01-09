#include <iostream>
#include <exception>
using namespace std;


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
	
class Rational {
public:
	Rational() {
		data_numerator = 0;
		data_denominator = 1;
	}
	
	Rational(int numerator, int denominator) {
		if (denominator == 0){
			//throw exception();
			throw invalid_argument("Error");
		}
		if (numerator == 0){
			data_numerator = 0;
			data_denominator = 1;
		}
		else{
			int divisor = GreatestCommonDivisor(numerator, denominator);
			//���p,q�����Լ����
			data_denominator = denominator / divisor;
			data_numerator = numerator / divisor;
			if (data_numerator * data_denominator > 0){
				data_numerator = abs(numerator / divisor);
				data_denominator = abs(denominator / divisor);
			}
			//����Ҫ��ͬ�ű�֤���ӷ�ĸ��������
			if (data_numerator * data_denominator < 0){
				data_numerator = abs(numerator / divisor) * -1;
				data_denominator = abs(denominator / divisor);
			}
			//����Ҫ����ű�֤����Ϊ������ĸΪ����
		}
	}
	
	int Numerator() const {
		// ���֧ѧݧڧ٧�ۧ�� ����� �ާ֧���
		return data_numerator;
	}
	
	int Denominator() const {
		// ���֧ѧݧڧ٧�ۧ�� ����� �ާ֧���
		return data_denominator;
	}
	
private:
	// ����ҧѧӧ��� ���ݧ�
	int data_numerator;
	int data_denominator;
};

Rational operator * (const Rational& lhs, const Rational& rhs) {
	return{
		lhs.Numerator() * rhs.Numerator(),
		lhs.Denominator() * rhs.Denominator()
	};
}

Rational operator / (const Rational& lhs, const Rational& rhs) {
	if (rhs.Numerator() == 0){
		throw domain_error("Error");
	}
	return lhs * Rational(rhs.Denominator(), rhs.Numerator());
}

// �����ѧӧ��� ���է� ��֧ѧݧڧ٧ѧ�ڧ� operator / �էݧ� �ܧݧѧ��� Rational

int main() {
	try {
		Rational r(1, 0);
		cout << "Doesn't throw in case of zero denominator" << endl;
		return 1;
	}
	catch (invalid_argument&) {
	}

	try {
		auto x = Rational(1, 2) / Rational(0, 1);
		cout << "Doesn't throw in case of division by zero" << endl;
		return 2;
	}
	catch (domain_error&) {
	}

	cout << "OK" << endl;
	return 0;
}