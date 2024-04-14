/*http://ascode.org/problem.php?id=1024*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int X;
float total=0;
for(int i=0; i<7; i++){
    cin >> X;
    total +=X;
}
cout << fixed;
cout.precision(2);
cout << total/7 <<"\n";

}