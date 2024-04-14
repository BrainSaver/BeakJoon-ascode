/*http://ascode.org/problem.php?id=1017*/
#include <iostream>
#include <string>
#pragma warning(disable: 4996)
using namespace std;
int main() {

	string c;
    int t;
    cin >> t;
	for (int a = 0; a < t+1; a++) {
		getline(cin, c);
		if (c[0] != NULL)
			cout << c << "\n";
	}

	return 0;
}