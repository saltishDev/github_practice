#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char dlim) {
	stringstream ss(str);
	string buffer;	// 구분자(dlim)을 기준으로 잘린 문자열

	vector<string> result;
	while (getline(ss, buffer, dlim)) {
		// getline(istream& is, string buffer[, char dlim])
		// 스트림에서 데이터를 읽을 수 있는 경우 0이 아닌 값을 반환한다.
		// -> while 루프 조건으로 지정할 수 있다!
		result.push_back(buffer);
	}
	return result;
}

int main() {
	int n;	// 테스트 케이스 개수
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