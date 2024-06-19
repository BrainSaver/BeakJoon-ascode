#include <iostream>
#include <algorithm>
#include <stack>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int dot[100000][2];

int main() {
FASTOUT
int testcase, n1, n2;
for(int i=0; i<testcase; i++){
    cin >> n1 >> n2;
    dot[i][0] = n1;
    dot[i][1] = n2;
}
    sort(dot, dot+testcase);
}