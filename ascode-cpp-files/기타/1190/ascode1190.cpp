/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
using namespace std;

int main() {
    double down, up, height;
    cin >> down >> up >> height;
    int result = (down + up) * height / 2;
    printf("%d\n", result);

    return 0;
}