#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<exception>

using namespace std;


//���ô���
//case1.1
//
//struct Date{
//	int year;
//	int month;
//	int day;
//};
//
//void EnsureNextSymbolAndSkip(stringstream& stream){
//	if (stream.peek() != '/'){
//		throw exception();
//	}
//	stream.ignore(1);
//}
//
//Date ParseDate(const string& s){
//	stringstream stream(s);
//	Date date;
//	stream >> date.year;
//	EnsureNextSymbolAndSkip(stream); //ֻҪ�����ظ����룬��Ҫ�ú��������
//
//	
//	stream >> date.month;
//	EnsureNextSymbolAndSkip(stream);
//
//	stream >> date.day;
//	return date;
//}
//
//int main(){
//	string data_str = "2017a01b25";
//	try{
//		Date date = ParseDate(data_str);
//		cout << setw(2) << setfill('0') << date.day << '.'
//			<< setw(2) << setfill('0') << date.month << '.'
//			<< setw(2) << setfill('0') << date.year;
//		cout << endl;
//	}
//	catch (exception& ex){
//		cout << "exception happens";
//	}
//	return 0;
//}

//case 1.2
struct Date{
	int year;
	int month;
	int day;
};

void EnsureNextSymbolAndSkip(stringstream& stream){
	if (stream.peek() != '/'){
		stringstream ss;
		ss << "expected / ,bus has: " << char(stream.peek());
		throw runtime_error(ss.str());
	}
	stream.ignore(1);
}

Date ParseDate(const string& s){
	stringstream stream(s);
	Date date;
	stream >> date.year;
	EnsureNextSymbolAndSkip(stream); //ֻҪ�����ظ����룬��Ҫ�ú��������

	
	stream >> date.month;
	EnsureNextSymbolAndSkip(stream);

	stream >> date.day;
	return date;
}

//int main(){
//	string data_str = "2017a01b25";
//	try{
//		Date date = ParseDate(data_str);
//		cout << setw(2) << setfill('0') << date.day << '.'
//			<< setw(2) << setfill('0') << date.month << '.'
//			<< setw(2) << setfill('0') << date.year;
//		cout << endl;
//	}
//	catch (exception& ex){
//		cout << "exception happens" << ex.what();
//	}
//	return 0;
//}




