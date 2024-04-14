/*http://ascode.org/problem.php?id=1008*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int a, b, c, d, e, f;
cin >> a >> b >> c >> d >> e >> f;
float avg = a + b + c + d + e + f;
printf("%.4f\n", avg/6);
}