#include <iostream>
#include <vector>
#include <string>


using namespace std;

void PrintVector(const vector<string>& v){
	for (string s : v){
		cout << s << endl;
	}
}

void A(){
	int n;
	cin >> n;
	vector<string> v(n);
	for (string& s : v){
		cin >> s;
	}
	PrintVector(v);
}

void B(){
	int n;
	cin >> n;
	vector<string> v;
	int i = 0;
	while (i < n)
	{
		string s;
		cin >> s;
		v.push_back(s);
		++i;
	}
	PrintVector(v);
}

void C(){
	vector<bool> is_holiday(28, false);
	is_holiday[22] = true;
	for (int i : is_holiday){
		cout << i << endl;
	}
	is_holiday.assign(31, false); //对所有的向量元素初始化。
	// 	is_holiday.resize(31);  对添加的部分初始化。
}

void Filter(){
	int n;
	int sum = 0;
	int i = 0;
	cin >> n;
	vector<int> v(n);
	vector<int> y;
	for (int& s : v){
		cin >> s;
	}
	for (auto num : v){
		sum += num;
	}
	for (auto num : v){
		if (num > (sum / n)){
			y.push_back(i);
		}
		i++;
	}
	cout << y.size() << endl;
	for (auto num : y){
		cout << num << " ";
	}
	cout << endl;
}

int WorryCount(vector<bool>& p){
	int count = 0;
	for (auto i : p){
		if (i == false){
			count++;
		}
	}
	return count;
}

void Myassignment1(){
	int n;
	int i = 0;
	int num;
	string operations;
	cin >> n;
	vector<bool> queue;
	vector<int> conclusion;
	while (i < n){
		cin >> operations;
		if (operations == "WORRY_COUNT"){
			conclusion.push_back(WorryCount(queue));
			//cout << WorryCount(queue) << endl;
		}
		if (operations == "COME"){
			cin >> num;
			if (num >= 0){
				queue.resize(queue.size() + num, true);
			}
			else{
				queue.resize(queue.size() + num);
			}
		}
		if (operations == "WORRY"){
			cin >> num;
			queue[num] = false;
		}
		if (operations == "QUIET"){
			cin >> num;
			queue[num] = true;
		}
		i++;
	}

	for (auto i : conclusion){
		cout << i << endl;
	}
}


void Myassignment2(){ // 没做出来。
	/*
	int n;
	int i = 0;
	int month = 1;
	string operations;
	cin >> n;
	vector<string> affair(31," ");
	while (i < n){
	cin >> operations;
	if (operations == "ADD"){
	int number;
	string s;
	cin >> number >> s;
	affair[number - 1] == s;
	}
	if (operations == "DUMP"){
	int number;
	cin >> number;
	cout << affair[number - 1];
	affair[number - 1] = " ";
	}
	if (operations == "NEXT"){
	month = (month + 1) % 12;
	switch(month) {
	case 2:
	{
	vector<string> append(28, " ");
	append.insert(end(append), begin(affair), end(affair));
	affair = append;
	break;
	}
	case 12:
	case 10:
	case 7:
	case 5 :
	case 3 :
	affair.resize(31, " ");
	break;
	case 11:
	case 9:
	case 6:
	case 4:
	{
	vector<string> append(30, " ");
	append.insert(end(append), begin(affair), end(affair));
	affair = append;
	break;
	}
	default:
	;
	}
	}
	i++;
	}
	*/
}

void RightAssignment(){
	const vector<int> MONTH_LENGTHS = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int MONTH_COUNT = MONTH_LENGTHS.size();
	int q;
	cin >> q;
	int month = 0;

	vector<vector<string>> days_concerns(MONTH_LENGTHS[month]);
	//cout << MONTH_LENGTHS[month];

	for (int i = 0; i < q; ++i){
		string operation_code;
		cin >> operation_code;


		if (operation_code == "ADD"){
			int day;
			string concern;
			cin >> day >> concern;
			--day;
			days_concerns[day].push_back(concern);
		}
		else if (operation_code == "NEXT"){
			const int old_month_length = MONTH_LENGTHS[month];
			month = (month + 1) % MONTH_COUNT;
			const int new_month_length = MONTH_LENGTHS[month];
			if (new_month_length < old_month_length){
				vector<string>& last_day_concerns = days_concerns[new_month_length - 1];
				for (int day = new_month_length; day < old_month_length; ++day){
					last_day_concerns.insert(
						end(last_day_concerns),
						begin(days_concerns[day]), end(days_concerns[day]));
				}
			}
			days_concerns.resize(new_month_length);
		}
		else if (operation_code == "DUMP"){
			int day;
			cin >> day;
			--day;

			cout << days_concerns[day].size() << " ";
			for (const string& concern : days_concerns[day]){
				cout << concern << " ";
			}
			cout << endl;
		}
	}
}



int main(){
	
	
	return 0;
}