#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

void Myassignment1(){
	int tag = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i){
		if (s[i] == 'f'){
			tag++;
			if (2 == tag){
				cout << i;
				break;
			}
		}

	}
	if (tag == 1){
		cout << -1;
	}
	if (tag == 0){
		cout << -2;
	}
	cout << endl;
}



void Myassignment2(){
	int a, b;
	cin >> a >> b;
	while (a > 0 && b > 0){
		if (a > b){
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	cout << a + b;
}

void Myassignment3(){
	int n;
	cin >> n;
	vector<int> a;
	while (n != 1){
		if (n % 2 == 0){
			a.push_back(0);
		}
		else {
			a.push_back(1);
		}
		n = n / 2;
	}
	a.push_back(1);
	for (int i = a.size() - 1; i >= 0; --i){
		cout << a[i];
	}
}

void RightAssignment3(){
	int n;
	cin >> n;
	vector<int> a;
	while (n > 0){
		a.push_back(n % 2);
		n = n / 2;
	}
	for (int i = a.size() - 1; i >= 0; --i){
		cout << a[i];
	}
}

int main(){
	
	Myassignment1();
	return 0;

}