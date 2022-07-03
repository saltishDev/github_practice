#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char dlim) {
	stringstream ss(str);
	string buffer;	// ������(dlim)�� �������� �߸� ���ڿ�

	vector<string> result;
	while (getline(ss, buffer, dlim)) {
		// getline(istream& is, string buffer[, char dlim])
		// ��Ʈ������ �����͸� ���� �� �ִ� ��� 0�� �ƴ� ���� ��ȯ�Ѵ�.
		// -> while ���� �������� ������ �� �ִ�!
		result.push_back(buffer);
	}
	return result;
}

int main() {
	int n;	// �׽�Ʈ ���̽� ����
	cin >> n;
	cin.ignore();

	while (n-- != 0) {
		string str;
		getline(cin, str);
		vector<string> result = split(str, ' ');
		vector<string>::iterator it;
		for (it = result.begin(); it < result.end(); it++) {
			int size = it->size();
			for (int j = 0; j < size; j++) {
				cout << it->at(size - 1 - j);
			}
			cout << " ";
		}
		cout << endl;
	}
}