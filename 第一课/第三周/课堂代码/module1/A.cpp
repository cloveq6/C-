#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


void Print(const vector<int>& v){
	for (const auto& i : v){
		cout << i << " ";
	}
}

bool Gt2(int x){
	if (x > 2){
		return true;
	}
	return false;
}

int main(){
	/*
	cout << min(2, 3) << endl;
	cout << max(2, 3) << endl;
	*/
	/*
	vector<int> v{ 1, 3, 2, 5, 4 };
	Print(v);
	cout << endl;
	sort(begin(v), end(v));
	Print(v);
	cout << endl;*/
	vector<int> v{ 1, 3, 2, 5, 4 ,2};
	//cout << count(begin(v), end(v), 2) << endl;
	/*
	cout << count_if(begin(v), end(v), Gt2);
	cout << endl;
	int thx;
	cin >> thx;
	cout << count_if(begin(v), end(v), [](int x){ //lamda���ʽ ������������ʹ�õı���Ҫ��������������ⲿthx�޷���ȡ��
		if (x > 2){
			return true;
		}
		return false;
	});
	cout << count_if(begin(v), end(v), [thx](int x){ 
		if (x > thx){
			return true;
		}
		return false;
	});
	*/

	for (auto i : v){ //�޷���1  auto ����&���Լ�1�ˡ�
		++i;
	}
	Print(v);
	return 0;
}