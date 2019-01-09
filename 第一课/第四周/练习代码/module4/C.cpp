#include <iostream>
#include <exception>
#include <string>
using namespace std;

string AskTimeServer() {
	/* ���ݧ� ��֧��ڧ��ӧѧߧڧ� ���ӧ��ѧӧݧ�ۧ�� ���է� �ܧ��, ��֧ѧݧڧ٧���ڧ� ��ѧ٧ݧڧ�ߧ�� ���ӧ֧է֧ߧڧ� ����� ���ߧܧڧ�:
	* �ߧ��ާѧݧ�ߧ�� �ӧ�٧ӧ�ѧ� �����ܧ�ӧ�ԧ� �٧ߧѧ�֧ߧڧ�
	* �ӧ�ҧ��� �ڧ�ܧݧ��֧ߧڧ� system_error
	* �ӧ�ҧ��� �է��ԧ�ԧ� �ڧ�ܧݧ��֧ߧڧ� �� ����ҧ�֧ߧڧ֧�.
	*/
}

class TimeServer {
public:
	string GetCurrentTime() {
		/* ���֧ѧݧڧ٧�ۧ�� ����� �ާ֧���:
		* �֧�ݧ� AskTimeServer() �ӧ֧�ߧ�ݧ� �٧ߧѧ�֧ߧڧ�, �٧ѧ�ڧ�ڧ�� �֧ԧ� �� LastFetchedTime �� �ӧ֧�ߧڧ��
		* �֧�ݧ� AskTimeServer() �ҧ���ڧݧ� �ڧ�ܧݧ��֧ߧڧ� system_error, �ӧ֧�ߧڧ�� ��֧ܧ��֧� �٧ߧѧ�֧ߧڧ�
		���ݧ� LastFetchedTime
		* �֧�ݧ� AskTimeServer() �ҧ���ڧݧ� �է��ԧ�� �ڧ�ܧݧ��֧ߧڧ�, ����ҧ������ �֧ԧ� �էѧݧ���.
		*/
	}

private:
	string LastFetchedTime = "00:00:00";
};

int main() {
	// ���֧ߧ�� ��֧ѧݧڧ٧ѧ�ڧ� ���ߧܧ�ڧ� AskTimeServer, ��ҧ֧էڧ�֧��, ���� ���� �ܧ�� ��ѧҧ��ѧ֧� �ܧ���֧ܧ�ߧ�
	TimeServer ts;
	try {
		cout << ts.GetCurrentTime() << endl;
	}
	catch (exception& e) {
		cout << "Exception got: " << e.what() << endl;
	}
	return 0;
}