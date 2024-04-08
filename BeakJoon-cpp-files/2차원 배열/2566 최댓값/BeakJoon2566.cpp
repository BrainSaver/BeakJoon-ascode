#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int arr[9][9];

    for(int a=0; a<9; a++){
        for(int b=0; b<9; b++){
            cin >> arr[a][b];
        }
    }

    int best=-1;
    int x, y;
    for(int a=0; a<9; a++){
        for(int b=0; b<9; b++){
            if(arr[a][b] > best){
            best=arr[a][b];
            x=a+1, y=b+1;
            }
        }
    }

    cout << best <<"\n" << x <<" " << y;

    
}