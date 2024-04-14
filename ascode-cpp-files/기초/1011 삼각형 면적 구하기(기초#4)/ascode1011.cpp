/*http://ascode.org/problem.php?id=1011*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
double X, Y;
cin >> X >> Y;
printf("%.6f, %.6f, %.6f", X, Y, (X*Y)/2);
}