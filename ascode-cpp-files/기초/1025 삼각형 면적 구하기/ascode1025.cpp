/*http://ascode.org/problem.php?id=1025*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
float a, b;
cin >> a >> b;
cout << fixed;
cout.precision(1);
cout << a*b/2<<"\n";
}