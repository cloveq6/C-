//RightAssignment

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	ifstream input("input.txt");

	int n, m;
	input >> n >> m;

	// ��֧�֧ҧڧ�ѧ֧� �����ܧ�
	for (int i = 0; i < n; ++i) {
		// ��֧�֧ҧڧ�ѧ֧� ����ݧҧ��
		for (int j = 0; j < m; ++j) {
			// ���ڧ��ӧѧ֧� ���֧�֧էߧ�� ��ڧ�ݧ�
			int x;
			input >> x;
			// �������ܧѧ֧� ��ݧ֧է���ڧ� ��ڧާӧ��
			input.ignore(1);
			// �ӧ�ӧ�էڧ� ��ڧ�ݧ� �� ���ݧ� ��ڧ�ڧߧ� 10
			cout << setw(10) << x;
			// �ӧ�ӧ�էڧ� ����ҧ֧�, �֧�ݧ� ���ݧ�ܧ� ����� ����ݧҧ֧� �ߧ� ����ݧ֧էߧڧ�
			if (j != m - 1) {
				cout << " ";
			}
		}
		// �ӧ�ӧ�էڧ� ��֧�֧ӧ�� �����ܧ�, �֧�ݧ� ���ݧ�ܧ� ���� �����ܧ� �ߧ� ����ݧ֧էߧ��
		if (i != n - 1) {
			cout << endl;
		}
	}

	return 0;
}