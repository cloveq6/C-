#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

//���ô���
//case1.1
//struct Duration{
//	int hour;
//	int min;
//};

//����תΪ����
//Duration ReadDuration(istream& stream){
//	int h = 0;
//	int m = 0;
//	stream >> h;
//	stream.ignore(1);
//	stream >> m;
//	return Duration{ h, m };
//}

//������תΪ��
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
//д��void operator<<������������Բ���PrintDuration�����ˡ�

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
//	cout << dur1 << endl;  //���return void��ô�������ز������ܼ�����������ƥ���ˡ�
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
//	Duration dur1{ 0, 0 }; //�˴�����ʹ�ù��캯������ʼ��
//	dur_ss >> dur1;
//	cout << dur1 << endl;
//	return 0;
//
//}


 



