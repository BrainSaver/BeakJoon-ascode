/*https://www.acmicpc.net/problem/10101  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int a, b, c;

cin >> a >> b >> c;

if(a==60 && b==60 && c==60){
    cout << "Equilateral\n";
}
else if(a+b+c==180){
    if(a==b || b==c || c==a){
        cout << "Isosceles\n";
    }
    if(a!=b && b!=c && c!=a){
        cout << "Scalene\n";
    }
}
else{
    cout << "Error\n";
}
}