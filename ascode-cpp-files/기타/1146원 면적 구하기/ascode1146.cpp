/*http://ascode.org/problem.php?id=1146*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
double phi = 3.14159265358979;
double l;
cin >> l;
l = (l/2)*(l/2);
cout << fixed;
cout.precision(5);
cout << (double)(phi*l) ;

}