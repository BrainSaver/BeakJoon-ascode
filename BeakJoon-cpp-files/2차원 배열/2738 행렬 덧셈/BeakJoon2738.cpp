#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int arr11, arr22;
    cin >> arr11 >> arr22;
    int arr1[100][100];
    int arr2[100][100];

 
    for(int a=0; a<arr11; a++){
        for(int b=0; b<arr22; b++){
        cin >> arr1[a][b];
        }
    }

    for(int a=0; a<arr11; a++){
        for(int b=0; b<arr22; b++){
        cin >> arr2[a][b];
        }
    }

    for(int a=0; a<arr11; a++){
        for(int b=0; b<arr22; b++){
        cout << arr1[a][b] + arr2[a][b] << " ";
        }
        cout <<"\n";
    }

    


}