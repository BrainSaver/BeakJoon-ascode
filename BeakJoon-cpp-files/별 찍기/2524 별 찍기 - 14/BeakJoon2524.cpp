#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int testcase=0; 
    cin >> testcase;

    for(int a=0; a<testcase; a++){
        for(int b=0; b<testcase; b++){
            cout<<"*";
        }
        cout<<"\n";
    }
}