/*http://ascode.org/problem.php?id=1038
*/
#include<iostream>

using namespace std;

int main() {
    double x = 0, h = 0;
    cin >> x >> h;
    cout << fixed; 
    cout.precision(10);
    cout << x * h / 2;

    return 0;
}