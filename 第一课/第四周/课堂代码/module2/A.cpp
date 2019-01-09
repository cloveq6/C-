#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

 
//课堂代码

using namespace std;


void ReadAll(const string& path){
	ifstream input(path);
	if (input){
		string line;
		while (getline(input, line)){
			cout << line << endl;
		}
	}
}


void Print(const vector<string> names,
		   const vector<double> values,
		   int width){
	for (const auto& n : names){
		cout << setw(width) << n << ' ';
	}
	cout << endl;
	cout << fixed << setprecision(2); //fixed是输出以前的样子，setprecision(2)设置小数点后两位， 
	cout << setw(width); //设置宽度
	for (const auto& v : values){
		cout << setw(width) << v << ' ';
	}
}

//int main(){
	/* case1 
	ifstream input("hello.txt");
	string line;
	while (getline(input, line)){  //按行读取
		cout << line << endl;
	}
	*/

	//case2 
	//ifstream input("helo.txt");
	//string line;
	//if (input){  // 判断是否打开了文件
	//	while (getline(input, line)){
	//		cout << line << endl;
	//	}
	//}
	//else{
	//	cout << "error";
	//}

	//case3

	//ifstream input("data.txt");
	//string year;
	//string month;
	//string day;
	//if (input){
	//	getline(input, year, '-'); //读到-为止
	//	getline(input, month, '-');
	//	getline(input, day, '-');
	//}

	//cout << year << ' ' << month << ' ' << day << endl;

	//case4.1

	//ifstream input("data.txt");
	//int year = 0;
	//int month = 0;
	//int day = 0;
	//if (input){
	//	input >> year;   // 将整数读入year中
	//	input.ignore(1); //滤过一个字符
	//	input >> month;
	//	input.ignore(1);
	//	input >> day;
	//	input.ignore(1);
	//}
	//cout << year << ' ' << month << ' ' << day << endl;

	//case4.2
	//const string path = "output.txt"; //创建文件并写入
	//ofstream output(path);
	//output << "hello" << endl;

	//ifstream input(path);
	//if (input){
	//	string line;
	//	while (getline(input, line)){
	//		cout << line << endl;
	//	}
	//}

	//case4.3 函数化
	//const string path = "output.txt"; //创建文件并写入
	//ofstream output(path, ios::app);  // app表示追加
	//output << "world!" << endl;

	//ReadAll(path);

	//case 5  输出一致化

//	vector<string> names = { "a", "b", "c" };
//	vector<double> values = { 5, 0.01, 0.000005 };
//	cout << setfill('.');  //占位
//	cout << left;
//	Print(names, values, 10);
//
//	return 0;
//}