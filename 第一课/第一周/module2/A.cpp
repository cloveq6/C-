#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

void A(){
	string s = "abc";
	string ss = "abb";
	if (s < ss){
		cout << s;
	}
	else{
		cout << ss;
	}
}

void B(){
	string a, b, c;
	cin >> a >> b >> c;
	if (a <= b && a <= c) {
		cout << a;
	}
	else if (b <= a && b <= c) {
		cout << b;
	}
	else {
		cout << c;
	}
}

void MyAssigmnent2(){
	double A, B, C;
	cin >> A >> B >> C;
	double det = sqrt(B*B - 4 * A*C);
	if (A == 0 && B == 0){
	}
	if (A == 0){
		double x = -C / B;
		cout << x;
	}
	if (det >= 0){
		if (det > 0){
			double x1 = (-B + det) / (2 * A);
			double x2 = (-B - det) / (2 * A);
			cout << x1 << " " << x2;
		}
		else{
			double x = -B / (2 * A);
			cout << x;
		}
	}
}
void C(){
	vector<int> a = { 1, 2, 3, 4, 5 };
	int sum = 0;
	for (auto i : a){
		sum += i;
	}
	cout << sum;
}


void RightAssignmnet2(){
	double A, B, C;
	cin >> A >> B >> C;

	// �ߧѧۧէק� �էڧ�ܧ�ڧާڧߧѧߧ�
	double D = B * B - 4 * A * C;

	// �֧�ݧ� A ��ѧӧߧ� �ߧ�ݧ�, ��� ���ѧӧߧ֧ߧڧ� �ݧڧߧ֧ۧߧ��: Bx + C = 0
	if (A == 0) {

		// Bx = -C => x = -C / B
		if (B != 0) {
			cout << -C / B << endl;
		}
		// �֧�ݧ� B ��ѧӧߧ� �ߧ�ݧ�, �ܧ��ߧ֧� �ߧ֧�

	}
	else if (D == 0) {  // ��ݧ��ѧ� �� �ߧ�ݧ֧ӧ�� �էڧ�ܧ�ڧާڧߧѧߧ���

		// �ܧ��֧ߧ� ���ӧߧ� ��էڧ�
		cout << -B / (2 * A) << endl;

	}
	else if (D > 0) {  // �� ��ݧ��ѧ� �� ���ݧ�اڧ�֧ݧ�ߧ�� �էڧ�ܧ�ڧާڧߧѧߧ��� �ܧ��ߧ� �էӧ�

		double r1 = (-B + sqrt(D)) / (2 * A);
		double r2 = (-B - sqrt(D)) / (2 * A);

		cout << r1 << " " << r2 << endl;

	}
	// �֧�ݧ� �էڧ�ܧ�ڧާڧߧѧߧ� ����ڧ�ѧ�֧ݧ֧�, �է֧ۧ��ӧڧ�֧ݧ�ߧ�� �ܧ��ߧ֧� �ߧ֧�
}

void D(){
	map<string, int> b = { { "a", 1 }, { "b", 2 }, { "c", 3 } };
	string contact;
	int sum = 0;
	for (auto i : b){
		contact += i.first;
		sum += i.second;
	}
	cout << contact << endl;
	cout << sum;
}

void F(){
	string a = "asdfasdfasdf";
	
	for (int i = 0; i < a.size(); ++i){
		if (a[i] == 'a'){
			cout << i << endl;
		}
	}
}

void G(){
	double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;
	if (N > B){
		cout << N * (100 - Y) / 100;
	}
	else if (N > A){
		cout << N * (100 - X) / 100;
	}
	else {
		cout << N;
	}

}

void H(){
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i){
		if (i % 2 == 0)
			cout << i << " ";
	}
}


int main(){
	H();
	return 0;
} 