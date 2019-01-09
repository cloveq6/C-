#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;


struct Person{
	string name;
	string surname;
	int age;
};

void ChangeInt(int x){
	x = 42;
}

int Factor(int i){ // Myassignment1(){}
	if (i <= 1){
		return 1;
	}
	else {
		return i * Factor(i - 1);
	}
			
}

bool IsPalindrom(string s){
	int len = s.size();
	for (int i = 0; i < len/2; ++i){
		if (s[i] != s[len - 1 - i]){
			return false;
		}
	}
	return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){ // Myassignment2(){}
	vector<string> s;
	for (auto i : words){
		if (i.size() >= minLength && IsPalindrom(i)){
			s.push_back(i);
		}
	}
	return s;
}

void Swap(int& x, int& y){
	int tmp = x;
	x = y;
	y = tmp;
}

void Sort(vector<int>& v){
	sort(begin(v), end(v));
}

vector<Person> GetPekingPopulation();

void PrintPopulationSize(const vector<Person>& p){
	cout << p.size() << endl;
}

void Time(){
	auto start = steady_clock::now();
	vector<Person> people = GetPekingPopulation();
	auto finish = steady_clock::now();
	cout << "GetPekingPopulation " << duration_cast<milliseconds>(finish - start).count()
		<< "ms" << endl;
	start = steady_clock::now();
	PrintPopulationSize(people);
	finish = steady_clock::now();
	cout << "PrintPopulationSize " << duration_cast<milliseconds>(finish - start).count()
		<< "ms" << endl;
}


void UpdateIfGreater(int a, int & b){
	if (b >= a){
		b = a;
	}
}

void MoveStrings(vector<string>& s1, vector<string>& s2){ // Myassignment3(){}
	for (auto x : s1){
		s2.push_back(x);
	}
	s1.clear();
}

void Reverse(vector <int> & v){ // Myassignment3(){}
	int n = v.size();
	for (int i = 0; i < n/2; ++i){
		int temp = v[i];
		v[i] = v[v.size() - i - 1];
		v[v.size() - i - 1] = temp;
	}
}




int main(){

	return 0;

}



vector<Person> GetPekingPopulation(){
	vector<Person> s = { { "ha", "he", 35 } };
	return s;
}