/*https://www.acmicpc.net/problem/2903*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;


void Dot(int dot){
    int dotted=2;
    for(int i=0; i<dot; i++){//점을 찍는 수만큼 반복
        dotted = dotted+(dotted-1);
    }
    cout << dotted*dotted << "\n";
}

int main() {
FASTOUT

    int N;
    cin >> N;

    if(N==0){
        cout << "4\n";
    }
    else{
        Dot(N);
    }
}