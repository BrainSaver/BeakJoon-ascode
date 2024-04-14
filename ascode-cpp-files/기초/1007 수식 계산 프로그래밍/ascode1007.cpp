/*http://ascode.org/problem.php?id=1007*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int x, y, z;

cin >> x >> y >> z;
cout << (x+y)%z << "\n";
}