#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

//课堂代码
//case1.1
//struct Duration{
//	int hour;
//	int min;
//};

//将流转为对象
//Duration ReadDuration(istream& stream){
//	int h = 0;
//	int m = 0;
//	stream >> h;
//	stream.ignore(1);
//	stream >> m;
//	return Duration{ h, m };
//}

//将对象转为流
//void PrintDuration(ostream& stream, const Duration& duration){
//	stream << setfill('0');
//	stream << setw(2) << duration.hour << ':'
//		   << setw(2) << duration.min;
//}



 
//int main(){
//
//	stringstream dur_ss("01:50");
//	Duration dur1 = ReadDuration(dur_ss);
//	PrintDuration(cout, dur1);
//	return 0;
//}

//case1.2
//写了void operator<<这个函数，可以不用PrintDuration函数了。

//void operator<<(ostream& stream, const Duration& duration){
//	stream << setfill('0');
//	stream << setw(2) << duration.hour << ':'
//		<< setw(2) << duration.min;
//}
//
//
//int main(){
//		stringstream dur_ss("01:50");
//		Duration dur1 = ReadDuration(dur_ss);
//		cout << dur1;
//		return 0;
//}


//case1.3
//ostream& operator<<(ostream& stream, const Duration& duration){
//	stream << setfill('0');
//	stream << setw(2) << duration.hour << ':'
//		<< setw(2) << duration.min;
//	return stream;
//}


//int main(){
//	stringstream dur_ss("01:50");
//	Duration dur1 = ReadDuration(dur_ss);
//	cout << dur1 << endl;  //如果return void那么函数重载操作不能继续，参数不匹配了。
//	operator<<(operator<<(cout, "hello"), "world");
//	return 0;
//}


//case1.4

//istream& operator>>(istream& stream, Duration& duration){
//	stream >> duration.hour;
//	stream.ignore(1);
//	stream >> duration.min;
//	return stream;
//}

//int main(){
//	stringstream dur_ss("01:50");
//	Duration dur1{ 0, 0 }; //此处可以使用构造函数来初始化
//	dur_ss >> dur1;
//	cout << dur1 << endl;
//	return 0;
//
//}


 



