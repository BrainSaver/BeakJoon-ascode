/*https://www.acmicpc.net/problem/1193*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;


int main() {
    FASTOUT
    int X;

    cin >> X;

    int fac=1;
    int fac_pow=1;
    while(fac_pow < X){
        pofac_w = fac_pow*fac;
        fac++;
    }
    cout << fac_pow;
    
}