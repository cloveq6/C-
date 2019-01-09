//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
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
//
//};
//
//bool operator==(const Rational& r1, const Rational& r2){
//	if (r1.Numerator() == r2.Numerator() && r1.Denominator() == r2.Denominator()){
//		return true;
//	}
//	return false;
//}
//
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
//bool operator<(const Rational& r1, const Rational& r2){
//	int n1 = r1.Numerator() * r2.Denominator();
//	int n2 = r2.Numerator() * r1.Denominator();
//	if (n1 < n2){
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//// в качестве ключа map'а и элемента set'а
//
//int main() {
//	{
//		const set<Rational> rs = { { 1, 2 }, { 1, 25 }, { 3, 4 }, { 3, 4 }, { 1, 2 } };
//		if (rs.size() != 3) {
//			cout << "Wrong amount of items in the set" << endl;
//			return 1;
//		}
//
//		vector<Rational> v;
//		for (auto x : rs) {
//			v.push_back(x);
//		}
//		if (v != vector<Rational>{{1, 25}, { 1, 2 }, { 3, 4 }}) {
//			cout << "Rationals comparison works incorrectly" << endl;
//			return 2;
//		}
//	}
//
//	{
//		map<Rational, int> count;
//		++count[{1, 2}];
//		++count[{1, 2}];
//
//		++count[{2, 3}];
//
//		if (count.size() != 2) {
//			cout << "Wrong amount of items in the map" << endl;
//			return 3;
//		}
//	}
//
//	cout << "OK" << endl;
//	return 0;
//}
