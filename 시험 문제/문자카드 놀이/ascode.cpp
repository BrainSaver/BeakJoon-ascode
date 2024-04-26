/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
string word[20];

int main() {
	FASTOUT
		int testcase, line;
	cin >> testcase;

	while (testcase--) {
		cin >> line;
		for (int i = 0; i < line; i++) {
			cin >> word[i];
		}

		int len = 0;

		for (int i = 0; i < line; i++) {
			if (len < word[i].size()) {
				len = word[i].size();
			}
		}

		string change;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < line; j++) {
				if (word[j].size() > i) {
					cout << word[j][i];
				}
			}
		}
		cout << '\n';
	}
}