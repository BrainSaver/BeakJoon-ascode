#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int star=0;

        cin >> star;
    for(int a=0; a<star; a++){
        for(int b=0; b<(star-a)*2-1; b++){
            cout << "*";
        }
        cout <<"\n";
        for(int b=0; b<a+1; b++){
            cout<<" ";
        }
    }
    
}