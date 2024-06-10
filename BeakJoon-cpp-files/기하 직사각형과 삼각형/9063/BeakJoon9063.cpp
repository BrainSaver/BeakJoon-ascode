/*https://www.acmicpc.net/problem/9063  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int x, y;
int minX=10000, maxX=-10000, minY=10000, maxY=-10000;
cin >> testcase;
while(testcase--){
cin >> x >> y;
if(x<minX) minX=x;
if(x>maxX) maxX=x;
if(y<minY) minY=y;
if(y>maxY) maxY=y;
}
cout << (maxX-minX)*(maxY-minY);
}