/*http://ascode.org/problem.php?id=1403*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int n;
cin  >> n;

if(n%2==0 && n>=4){
    cout << "YES\n";
    return 0;
}
cout << "NO\n";
}