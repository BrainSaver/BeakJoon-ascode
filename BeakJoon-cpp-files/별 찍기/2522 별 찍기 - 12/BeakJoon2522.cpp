#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);

    int testcase;
    cin >> testcase;

    for(int a=1; a<testcase+1; a++){
        for(int fora=a; fora<testcase; fora++){
            cout <<" ";
        }
        for(int forb=0; forb<a; forb++){
            cout<<"*";
        }
        cout <<"\n";
    }

    for(int a=1; a<testcase; a++){
        for(int fora=0; fora<a; fora++){
            cout << " ";
        }
        for(int forb=testcase-a; forb>0; forb--){
            cout << "*";
        }
        cout<<"\n";
    }
}