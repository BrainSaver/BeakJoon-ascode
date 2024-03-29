#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	short T = 0;
	cin >> T;
	for (short a = 0; a < T; a++) {
		for (short b = 0; b < a+1; b++) {
			cout << "*";
		}
		cout << "\n";
	}
}