#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

using namespace std;


//my assignment2
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

string Silly(const vector<string>& a){
	string result;
	int len = a.size();
	if (len == 1){
		return a[0];
	}
	else if (len > 1){
		for (int i =len-2 ; i > 0; --i){
			result = a[i] + ", ";
		}
		return a[len-1] + " (" + result + a[0] + ")";
	}
	return result;
}

string Print(const vector<string>& a){
	string result;
	for (auto i : a){
		result += i + " ";
	}
	return result;
}

string FindFullName(const map<int, string> & names, int year){
	vector<string> name;
	//string result;
	int len = name.size();

	for (const auto& item : names){
		if (item.first <= year){
			if (len < 1){
				name.push_back(item.second);
				len++;
			}
			else if (item.second != name[len - 1])
			{
				name.push_back(item.second);
				len++;
			}
		}
		else{
			break;
		}
	}
	cout << len << endl;
	//result = Silly(name);
	return Silly(name);
	//return Print(name);
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
	string GetFullNameWithHistory(int year){
		const string first_name = FindFullName(first_names, year);
		const string last_name = FindFullName(last_names, year);


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

	person.ChangeFirstName(1900, "Eugene");
	person.ChangeLastName(1900, "Sokolov");
	person.ChangeLastName(1910, "Sokolov");
	person.ChangeFirstName(1920, "Evgeny");
	person.ChangeLastName(1930, "Sokolov");
	cout << person.GetFullNameWithHistory(1940) << endl;

	return 0;
}