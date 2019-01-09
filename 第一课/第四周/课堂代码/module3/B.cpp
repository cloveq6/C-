#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

//case2


struct Duration{
	int hour;
	int min;
	Duration(int init_hour = 0, int init_min = 0){
		int total = init_hour * 60 + init_min;
		hour = total / 60;
		min = total % 60;
	}
};


ostream& operator<<(ostream& stream, const Duration& duration){
	stream << setfill('0');
	stream << setw(2) << duration.hour << ':'  //setw(n)给后面的值赋予n个位置
		<< setw(2) << duration.min;
	return stream;
}

istream& operator>>(istream& stream, Duration& duration){
	stream >> duration.hour;
	stream.ignore(1);
	stream >> duration.min;
	return stream;
}

Duration operator+(const Duration& lhs, const Duration& rhs){
	return Duration(lhs.hour + rhs.hour, lhs.min + rhs.min);
}

void PrintVector(const vector<Duration>& durs){
	for (const auto& d : durs){
		cout << d << ' ';
	}
	cout << endl;
}


bool operator<(const Duration& lhs, const Duration& rhs){
	if (lhs.hour == rhs.hour){
		return lhs.min < rhs.min;
	}
	return lhs.hour < rhs.hour;
}

int main(){
	stringstream dur_ss("02:50");
	Duration dur1; 
	dur_ss >> dur1;
	Duration dur2 = { 0, 35 };
	//cout << dur1 + dur2 << endl; 无法直接加使用运算符重载
	//cout << dur1 + dur2 << endl;
	Duration dur3 = dur1 + dur2;
	vector<Duration> v{ dur3, dur1, dur2 };
	PrintVector(v);
	sort(begin(v), end(v)); //重载<之后利用排序算法对dur排序
	PrintVector(v);
	return 0;
}