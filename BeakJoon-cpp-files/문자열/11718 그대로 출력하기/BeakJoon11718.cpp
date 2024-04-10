#include <iostream>
#include <string>
#pragma warning(disable: 4996)
using namespace std;
int main() {

	string c;
	for (int a = 0; a < 100; a++) {
		getline(cin, c);
		if (c[0] != NULL)
			cout << c << "\n";
	}

	return 0;
}