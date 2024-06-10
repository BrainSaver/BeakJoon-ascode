#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
    FASTOUT
    int w, h;
    int count=0;
    string arr;
    string blackarr[8] = {"01010101", "10101010", "01010101", "10101010", "01010101", "10101010", "01010101", "10101010"};
    string whitearr[8] = {"10101010", "01010101", "10101010", "01010101", "10101010", "01010101", "10101010", "01010101"};
    bool boolarr[50][50];

    //가로 세로 받음
    cin >> w >> h;

    //bool 형식으로 저장
    for(int i=0; i<w; i++){
        //BW 받음
        cin >> arr;
        for(int j=0; j<h; j++){
            if(arr[j] == 'B'){
            boolarr[i][j] = 0;
            }
            else if(arr[j] == 'W'){
            boolarr[i][j] = 1;
            }
            cout << boolarr[i][j];
        }
        cout << '\n';
    }

for(int i=0; i<w-7; i++){
    for(int j=0; j<h-7; j++){

        for(int a=i; i<i+8; a++){
            for(int b=j; b<j+8; j++){
                
            }
        }

    }
}

    }