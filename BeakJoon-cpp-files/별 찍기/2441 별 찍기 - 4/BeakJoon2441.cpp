#include <iostream>
#include <string>

#pragma warning(disable : 4996)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a = 0;
	cin >> a;
	for (int fora = a; fora > 0; fora--) {
		for (int forb = 0; forb < a-fora; forb++) {
			cout << " ";
		}
		for (int forb = 0; forb < fora; forb++) {
		cout << "*";
		}
		cout << "\n";
	}
}