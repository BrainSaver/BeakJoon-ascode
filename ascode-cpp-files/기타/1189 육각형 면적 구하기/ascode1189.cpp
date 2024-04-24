/*http://ascode.org/problem.php?id=1189*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
    double three = 1.732050807568877;
    double S;
    cin >> S;
    cout << fixed;
cout.precision(8);
    cout << ((3*three)*S*S)/2 <<'\n';
    }