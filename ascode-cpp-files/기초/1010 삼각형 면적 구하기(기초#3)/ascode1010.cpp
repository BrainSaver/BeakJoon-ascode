/*http://ascode.org/problem.php?id=1010*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int X, Y;
cin >> X >> Y;
cout << X << ", " << Y << ", " << X*Y/2 << "\n";
}