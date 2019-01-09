#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

struct Person {
	string name;
	string surname;
	int age;
};

void A(){
	string x = "abc";
	string y = "def";
	if (x < y){
		cout << "less";
	}
	else{
		cout << "not less";
	}
}
void B(){
	int x, y;
	cin >> x >> y;
	cout << x + y <<endl;
}

void C(){
	string name, surname;
	cin >> name >> surname;
	cout << "Hello, " << name << " " << surname << endl;
}

/* 向量迭代的操作
 * 三种操作
 * 会了吗？*/
void D(){
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	vector<int> nums = { 1, 2, 5, 4, 5};
	for (auto x : nums){
		sum1++;
	}
	for (int i = 0; i < nums.size(); ++i){
		sum2++;
	}
	for (int x : nums){
		sum3++;
	}
	cout << sum1 << sum2 << sum3 << endl;
}


int main() {
	vector<Person> staff;
	staff.push_back({ "wang", "li", 25 });
	staff.push_back({"hah", "liu", 32});
	//cout << staff[0].age;
	//vector<int> d = { 1, 2, 3 };
	D();
	return 0;
}