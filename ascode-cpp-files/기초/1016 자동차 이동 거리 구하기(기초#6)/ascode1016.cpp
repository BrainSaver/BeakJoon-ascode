/*http://ascode.org/problem.php?id=1016*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
float speed, hour;

cin >> speed >> hour;
cout << fixed;
cout.precision(3);
cout << speed << " " << hour << " ";
cout.precision(2);
cout << speed*hour <<"\n";

}