/*https://www.acmicpc.net/problem/1085  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
short x, y, w, h;
cin >> x >> y >> w >> h;

short xx = min(x-0, w-x);
short yy = min(y-0, h-y);
cout << min(xx,yy);
}