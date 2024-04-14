/*http://ascode.org/problem.php?id=1026*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d = b * b - 4 * a * c;
    
    cout << (d < 0 ? 0 : (d == 0 ? 1 : 1)) << endl;

    return 0;
}
