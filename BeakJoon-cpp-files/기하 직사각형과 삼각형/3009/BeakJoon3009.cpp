/*https://www.acmicpc.net/problem/3009  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
short x[1001] = {0, };
short y[1001] = {0, };
short point_x, point_y;
for(int i=0; i<3; i++){
    cin >> point_x >> point_y;
    x[point_x]++;
    y[point_y]++;
}

for(int i=0; i<1001; i++){
    if(x[i]==1){
        cout << i << " ";
    }
}
for(int i=0; i<1001; i++){
    if(y[i]==1){
        cout << i << " ";
    }
}
}