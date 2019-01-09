#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

 
//���ô���

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
	cout << fixed << setprecision(2); //fixed�������ǰ�����ӣ�setprecision(2)����С�������λ�� 
	cout << setw(width); //���ÿ��
	for (const auto& v : values){
		cout << setw(width) << v << ' ';
	}
}

//int main(){
	/* case1 
	ifstream input("hello.txt");
	string line;
	while (getline(input, line)){  //���ж�ȡ
		cout << line << endl;
	}
	*/

	//case2 
	//ifstream input("helo.txt");
	//string line;
	//if (input){  // �ж��Ƿ�����ļ�
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
	//	getline(input, year, '-'); //����-Ϊֹ
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
	//	input >> year;   // ����������year��
	//	input.ignore(1); //�˹�һ���ַ�
	//	input >> month;
	//	input.ignore(1);
	//	input >> day;
	//	input.ignore(1);
	//}
	//cout << year << ' ' << month << ' ' << day << endl;

	//case4.2
	//const string path = "output.txt"; //�����ļ���д��
	//ofstream output(path);
	//output << "hello" << endl;

	//ifstream input(path);
	//if (input){
	//	string line;
	//	while (getline(input, line)){
	//		cout << line << endl;
	//	}
	//}

	//case4.3 ������
	//const string path = "output.txt"; //�����ļ���д��
	//ofstream output(path, ios::app);  // app��ʾ׷��
	//output << "world!" << endl;

	//ReadAll(path);

	//case 5  ���һ�»�

//	vector<string> names = { "a", "b", "c" };
//	vector<double> values = { 5, 0.01, 0.000005 };
//	cout << setfill('.');  //ռλ
//	cout << left;
//	Print(names, values, 10);
//
//	return 0;
//}