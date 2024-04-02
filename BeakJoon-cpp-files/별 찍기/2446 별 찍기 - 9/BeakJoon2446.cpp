/*https://www.acmicpc.net/problem/2446*/
#include<iostream>

using namespace std;

int main() {
    int a;
    cin>>a;

    for(int i=a; i>0; i--) {
        for(int j=i; j<a; j++) cout<<' ';
        for(int j=0; j<=i+i-2; j++) cout<<'*';
        cout<<endl; 
    }
    for(int i=1; i<a; i++) {
        for(int j=i; j<a-1; j++) cout<<' ';
        for(int j=0; j<=i+i; j++) cout<<'*';
        cout<<endl;  
    }
}