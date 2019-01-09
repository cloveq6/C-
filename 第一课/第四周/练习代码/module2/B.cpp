#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>




using namespace std;

//MyAssignmen1.1

void Read(const string& path){
	ifstream input(path);
	if (input){
		string line;
		while (getline(input, line, '\n')){
			cout << line;
			input.ignore(1);
			cout << endl;
		}
	}
}

//int main(){
//	string path = "input.txt";
//	Read(path);
//	return 0;
//}


//MyAssignmen1.2


/*int main(){
	string path1 = "input.txt";
	const string path2 = "output.txt"; 
	ifstream input(path1);
	ofstream output(path2, ios::app);  

	if (input){
		string line;
		while (getline(input, line, '\n')){
			ofstream output(path2, ios::app);  // app±íÊ¾×·¼Ó
			output << line << endl;
			input.ignore(1);
		}
	}
	return 0;
}
*/