/*
	practise assignment
*/


#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;



class SortedStrings{
public:
	void AddString(const string& s){
		my_string.push_back(s);
	}
	vector<string> GetSortedStrings(){
		sort(begin(my_string), end(my_string));
		return my_string;
	}

private:
	vector<string> my_string;

};

void PrintSortedStrings(SortedStrings& strings){
	for (const string& s : strings.GetSortedStrings()){
		cout << s << " ";
	}
	cout << endl;
}


/*
int main(){

	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);

	strings.AddString("second");
	PrintSortedStrings(strings);

	return 0;
}
*/