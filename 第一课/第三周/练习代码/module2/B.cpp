/*
	assignment1
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

/*
my assignment1

class Person{
public:
	void ChangeFirstName(int year, const string& first_name){
		data_year_first = year;
		data_first_name = first_name;
	}
	void ChangeLastName(int year, const string& last_name){
		data_year_last = year;
		data_last_name = last_name;
	}
	string GetFullName(int year){
		if (year < data_year_first && year < data_year_last){
			return "Incognito";
		}
		if (year >= data_year_first && year <= data_year_last){
			return data_first_name + " with unknown last name";
		}
		if (year >= data_year_first && year <= data_year_last){
			return "haha";
		}

		if (year >= data_year_first && year >= data_year_last){
			return data_first_name + " " + data_last_name;
		}
	}

private:
	int data_year_first=0, data_year_last=0;
	string data_first_name;
	string data_last_name;
};

*/

// right assinment1 answer
/*
string FindNameByYear(const map<int, string> & names, int year){
	string name;

	for (const auto& item : names){
		if (item.first <= year){
			name = item.second;
		}
		else{
			break;
		}
	}
	return name;
}

class Person{
public:
	void ChangeFirstName(int year, const string& first_name) {
		first_names[year] = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		last_names[year] = last_name;
	}
	string GetFullName(int year){

		const string first_name = FindNameByYear(first_names, year);
		const string last_name = FindNameByYear(last_names, year);


		if (first_name.empty() && last_name.empty()) {
			return "Incognito";

		}
		else if (first_name.empty()) {
			return last_name + " with unknown first name";

		}
		else if (last_name.empty()) {
			return first_name + " with unknown last name";

		}
		else {
			return first_name + " " + last_name;
		}
	}

private:
	map<int, string> first_names;
	map<int, string> last_names;
};

int main(){

	Person person;

	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year : {1900, 1965, 1990}) {
		cout << person.GetFullName(year) << endl;
	}

	person.ChangeFirstName(1970, "Appolinaria");
	for (int year : {1969, 1970}) {
		cout << person.GetFullName(year) << endl;
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year : {1969, 1970}) {
		cout << person.GetFullName(year) << endl;
	}
	return 0;
}
*/