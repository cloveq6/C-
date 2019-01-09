#include <iostream>
#include <string>

using namespace std;

int ComputeDistance(const string& source, const string& destination){
	return source.length() - destination.length();
}

class Route {
public :
	string GetSource() const{
		return source;
	}

	string GetDestination() const{
		return destination;
	}

	int GetLength() const{
		return length;
	}

	void SetSource(const string& new_source){
		source = new_source;
		UpdateLength();
	}
	void SetDestination(const string& new_destination){
		destination = new_destination;
		UpdateLength();
	}

private:
	void UpdateLength(){
		length = ComputeDistance(source, destination);
	}
	string source;
	string destination;
	int length; 
};


void PrintRoute(const Route& route){
	cout << route.GetSource() << "-" << route.GetDestination() << endl;
}

int main(){
	Route route;
	route.SetSource("BeiJing");
	route.SetDestination("ShangHai");
	PrintRoute(route);
	return 0;
}