#include <iostream>
#include <map>
#include <string>
#include <vector>


using namespace std;

void PrintMap(const map<string, int>& m){
	for (auto item : m){
		cout << item.first << ": " << item.second << endl;
	}
}

map<string, int> BuildReversedMap(const map<int, string>& m){
	map<string, int> result;
	for (auto item : m){
		result[item.second] = item.first;
	}
	return result;
}

map<string, bool> B(const map<bool, string>& m){
	map<string, bool> result;
	for (auto item : m){
		result[item.second] = item.first;
	}
	return result;
}


map<char, int> BuildCharCounters(string& s){ // fun of Practise1
	map<char, int> result;
	for (int i = 0; i < s.size(); ++i){
		++result[s[i]];
	}
	return result;
}

void Practise1(){
	int op;
	cin >> op;
	vector<string> conclusion;
	for (int i = 0; i < op; ++i){
		int tag = 0;
		string s1;
		string s2;
		cin >> s1 >> s2;
		map<char, int> a1 = BuildCharCounters(s1);
		map<char, int> a2 = BuildCharCounters(s2);
		for (char c = 'a'; c <= 'z'; ++c){
			if (a1[c] == a2[c]){
				tag++;
			}
		}
		if (tag == 26){
			conclusion.push_back("YES");
		}
		else
		{
			conclusion.push_back("NO");
		}
	}
	for (auto s : conclusion){
		cout << s << endl;
	}
}

void Practise2(){
	map<string, string> capitalsofcountries;
	vector<string> conclusion;
	int op;
	cin >> op;
	string query;
	for (int i = 0; i < op; ++i){
		cin >> query;
		if (query == "CHANGE_CAPITAL"){
			string country, capital;
			cin >> country >> capital;
			if (!capitalsofcountries.count(country)){
				capitalsofcountries[country] = capital;
				string s = "Introduce new country " + country + " with capital " + capital;
				conclusion.push_back(s);
			}
			else if (capitalsofcountries[country] == capital){
				string s = "Country " + country + " hasn't changed its capital";
				conclusion.push_back(s);
			}
			else
			{
				string oldcapital = capitalsofcountries[country];
				capitalsofcountries[country] = capital;
				string s = "Country " + country + " has changed its capital from " + oldcapital + " to " + capital;
				conclusion.push_back(s);
			}
		}
		else if (query == "RENAME"){  //修改key，保留value，我的处理方法是删除它再添加<key',value>。
			string newcountry, capital, oldcountry;
			cin >> oldcountry >> newcountry;
			if (capitalsofcountries.count(oldcountry) && !capitalsofcountries.count(newcountry)){
				capital = capitalsofcountries[oldcountry];
				capitalsofcountries.erase(oldcountry);
				capitalsofcountries[newcountry] = capital;
				string s = "Country " + oldcountry + " with capital " + capital + " has been renamed to " + newcountry;
				conclusion.push_back(s);
			}
			else {
				string s = "Incorrect rename, skip";
				conclusion.push_back(s);
			}
		}
		else if (query == "ABOUT"){
			string country;
			cin >> country;
			if (capitalsofcountries.count(country)){
				string s = "Country " + country + " has capital " + capitalsofcountries[country];
				conclusion.push_back(s);
			}
			else {
				string s = "Country " + country + " doesn't exist ";
				conclusion.push_back(s);
			}
		}
		else
		{
			string s;
			if (capitalsofcountries.size() == 0){
				conclusion.push_back("There are no countries in the world");
			}
			else{
				for (auto i : capitalsofcountries){
					s += i.first + "/" + i.second + " ";
				}
				conclusion.push_back(s);
			}
		}
	}

	for (auto i : conclusion){
		cout << i << endl;
	}
}

void Myassignment1(){    //第五个测试错误。 in which they were specified in the corresponding NEW_BUS command .
	map<string, vector<string>> busroute; //bus应该以输入的次序排序，而不以busroute里面的顺序排序。
	vector<string> conclusion;
	int op;
	cin >> op;
	string operations;
	for (int i = 0; i < op; ++i){
		cin >> operations;
		if (operations == "NEW_BUS"){
			string bus, s;
			int n;
			cin >> bus >> n;
			vector<string> v;
			for (int i = 0; i < n; ++i){
				cin >> s;
				v.push_back(s);
			}
			busroute[bus] = v;
		}
		else if (operations == "ALL_BUSES"){
			if (busroute.size()){
				for (auto item : busroute){
					string s;
					s = "Bus " + item.first + ": ";
					for (auto i : item.second){
						s += i + " ";
					}
					conclusion.push_back(s);
				}
			}
			else{
				conclusion.push_back("No buses");
			}
		}
		else if (operations == "BUSES_FOR_STOP"){
			string stop, bus;
			cin >> stop;
			if (!busroute.size()){
				conclusion.push_back("No stop");
			}
			else{
				for (auto item : busroute){
					for (auto i : item.second){
						if (i == stop){
							bus += item.first + " ";
							break;
						}
					}
				}
				conclusion.push_back(bus);
			}
			if (!bus.size() && busroute.size()){
				conclusion.push_back("No stop");
			}
		}
		else if (operations == "STOPS_FOR_BUS"){
			string bus;
			cin >> bus;
			if (busroute.count(bus)){
				for (auto i : busroute[bus]){

					string exbus;
					for (auto item : busroute){
						for (auto ii : item.second){
							if (ii == i){
								if (item.first != bus){
									exbus += item.first + " ";
									break;
								}
							}
						}
					}
					if (!exbus.size()){
						conclusion.push_back("Stop " + i + ": no interchange");
					}
					else{
						conclusion.push_back("Stop " + i + ": " + exbus);
					}

				}
			}
			else{
				conclusion.push_back("No bus");
			}
		}
	}
	for (auto i : conclusion){
		cout << i << endl;
	}
}

void PrintBusesForStop(const map<string, vector<string>>& buses_to_stops, //fun of Rightassignment1
	map<string, vector<string>>& stops_to_buses,
	const string& stop) {
	if (stops_to_buses.count(stop) == 0) {
		cout << "No stop" << endl;
	}
	else {
		for (const string& bus : stops_to_buses[stop]) {
			cout << bus << " ";
		}
		cout << endl;
	}
}

void PrintStopsForBus(map<string, vector<string>>& buses_to_stops, //fun of Rightassignment1
	map<string, vector<string>>& stops_to_buses,
	const string& bus) {
	if (buses_to_stops.count(bus) == 0) {
		cout << "No bus" << endl;
	}
	else {
		for (const string& stop : buses_to_stops[bus]) {
			cout << "Stop " << stop << ": ";

			// если через остановку проходит ровно один автобус,
			// то это наш автобус bus, следовательно, пересадки тут нет
			if (stops_to_buses[stop].size() == 1) {
				cout << "no interchange";
			}
			else {
				for (const string& other_bus : stops_to_buses[stop]) {
					if (bus != other_bus) {
						cout << other_bus << " ";
					}
				}
			}
			cout << endl;
		}
	}
}


void PrintAllBuses(const map<string, vector<string>>& buses_to_stops) { //fun of Rightassignment1
	if (buses_to_stops.empty()) {
		cout << "No buses" << endl;
	}
	else {
		for (const auto& bus_item : buses_to_stops) {
			cout << "Bus " << bus_item.first << ": ";
			for (const string& stop : bus_item.second) {
				cout << stop << " ";
			}
			cout << endl;
		}
	}
}

void Rightassignment1(){  
	int q;
	cin >> q;
	map<string, vector<string>> buses_to_stops, stops_to_buses;

	for (int i = 0; i < q; ++i){
		string operation_code;
		cin >> operation_code;

		if (operation_code == "NEW_BUS"){
			string bus;
			cin >> bus;
			int stop_count;
			cin >> stop_count;
			vector<string>& stops = buses_to_stops[bus];
			stops.resize(stop_count);

			for (string& stop : stops){
				cin >> stop;
				stops_to_buses[stop].push_back(bus);
			}
		}
		else if (operation_code == "BUSES_FOR_STOP"){
			string stop;
			cin >> stop;
			PrintBusesForStop(buses_to_stops, stops_to_buses, stop);
		}
		else if (operation_code == "STOPS_FOR_BUS"){
			string bus;
			cin >> bus;
			PrintStopsForBus(buses_to_stops, stops_to_buses, bus);
		}
		else if (operation_code == "ALL_BUSES"){
			PrintAllBuses(buses_to_stops);
		}
	}
}

void Rightassignment2(){  //没做出来。没想到stops做为键。map:count函数用于检测key是否存在。
	int q;
	cin >> q;
	map<vector<string>, int> buses;
	for (int i = 0; i < q; ++i){
		int n;
		cin >> n;
		vector<string> stops(n);
		for (string& stop : stops){
			cin >> stop;
		}
		if (buses.count(stops) == 0){
			const int new_number = buses.size() + 1;
			buses[stops] = new_number;
			cout << "New bus " << new_number << endl;
		}
		else{
			cout << "Already exists for " << buses[stops] << endl;
		}
	}
}

int main(){

	//vector<string> words = { "one", "two", "three" };
	//map<char, vector<string>> grouped_words;
	//for (const string& word : words){
	//	grouped_words[word[0]].push_back(word);
	//}
	//for (auto item : grouped_words){
	//	cout << item.first << endl;
	//	for (auto word : item.second){
	//		cout << word << " ";
	//	}
	//	cout << endl;
	//}
	//cout << grouped_words.count('o');
	
	/*
	map<bool, string> a = { { true, "a" }, { true, "b" }, { false, "c" } };
	//cout << B(a).size();
	map<string, bool> b = B(a);
	for (auto i : b){
		cout << i.first << ":" << i.second;
	}
	return 0;
	*/
	
	return 0;
}