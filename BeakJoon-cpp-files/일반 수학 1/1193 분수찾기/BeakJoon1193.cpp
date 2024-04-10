/*https://www.acmicpc.net/problem/1193*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;


int main() {
    FASTOUT
        const int SIZE = 10000000;
    int line = 1;
    int X;

    cin >> X;//찾을 분수번호
   for
    else {//1이 아닌 경우

        int xpy = 2;
        int x=0, y=0;
        while (xpy!=X) {

            if (xpy % 2 == 1) {
                for (int i = 1; i < xpy; i++) {
                    //cout << i << '/' << xpy - i << "\n";
                    if (line == X) {
                        x = i , y = xpy - i;
                    }
                    line++;
                }
            }

            if (xpy % 2 == 0) {
                for (int i = 1; i < xpy; i++) {
                    //cout << xpy - i << '/' << i << "\n";
                    if (line == X) {
                        x = xpy-i, y = i;
                    }
                    line++;
                }
            }

            xpy++;
        }

        cout << x << '/' << y;

    }


}