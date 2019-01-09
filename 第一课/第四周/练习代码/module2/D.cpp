#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

//MyAssignmet2

int main(){
	ifstream input("input.txt");
	int a;
	int b;
	int c;
	if (input){
		string line;
		getline(input, line);
		input >> a;
		input.ignore(1);
		input >> b;
		input.ignore(1);
		input >> c;
		input.ignore(1);
		cout << setw(10);
		cout << a << " " << b << " " << c << endl;
		input >> a;
		input.ignore(1);
		input >> b;
		input.ignore(1);
		input >> c;
		input.ignore(1);
		cout << setw(10);
		cout << a << " " << b << " " << c;
	}
	else
	{
		cout << "error";
	}
	return 0;
}