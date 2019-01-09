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

	// §ß§Ñ§Û§Õ§×§Þ §Õ§Ú§ã§Ü§â§Ú§Þ§Ú§ß§Ñ§ß§ä
	double D = B * B - 4 * A * C;

	// §Ö§ã§Ý§Ú A §â§Ñ§Ó§ß§à §ß§å§Ý§ð, §ä§à §å§â§Ñ§Ó§ß§Ö§ß§Ú§Ö §Ý§Ú§ß§Ö§Û§ß§à§Ö: Bx + C = 0
	if (A == 0) {

		// Bx = -C => x = -C / B
		if (B != 0) {
			cout << -C / B << endl;
		}
		// §Ö§ã§Ý§Ú B §â§Ñ§Ó§ß§à §ß§å§Ý§ð, §Ü§à§â§ß§Ö§Û §ß§Ö§ä

	}
	else if (D == 0) {  // §ã§Ý§å§é§Ñ§Û §ã §ß§å§Ý§Ö§Ó§í§Þ §Õ§Ú§ã§Ü§â§Ú§Þ§Ú§ß§Ñ§ß§ä§à§Þ

		// §Ü§à§â§Ö§ß§î §â§à§Ó§ß§à §à§Õ§Ú§ß
		cout << -B / (2 * A) << endl;

	}
	else if (D > 0) {  // §Ó §ã§Ý§å§é§Ñ§Ö §ã §á§à§Ý§à§Ø§Ú§ä§Ö§Ý§î§ß§í§Þ §Õ§Ú§ã§Ü§â§Ú§Þ§Ú§ß§Ñ§ß§ä§à§Þ §Ü§à§â§ß§ñ §Õ§Ó§Ñ

		double r1 = (-B + sqrt(D)) / (2 * A);
		double r2 = (-B - sqrt(D)) / (2 * A);

		cout << r1 << " " << r2 << endl;

	}
	// §Ö§ã§Ý§Ú §Õ§Ú§ã§Ü§â§Ú§Þ§Ú§ß§Ñ§ß§ä §à§ä§â§Ú§è§Ñ§ä§Ö§Ý§Ö§ß, §Õ§Ö§Û§ã§ä§Ó§Ú§ä§Ö§Ý§î§ß§í§ç §Ü§à§â§ß§Ö§Û §ß§Ö§ä
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