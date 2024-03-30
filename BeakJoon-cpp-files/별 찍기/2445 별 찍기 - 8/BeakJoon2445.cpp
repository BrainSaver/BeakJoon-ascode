#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);

int testcase;
cin >> testcase;

for(int a=0; a<testcase; a++){
    for(int b=0; b<a; b++){
    cout << "*";
    }
    for(int c=0; c<(testcase-a)*2; c++){
    cout << " ";
    }
    for(int b=0; b<a; b++){
    cout << "*";
    }
    cout<<"\n";
}

for(int a=0; a<testcase; a++){
    for(int b=0; b<testcase-a; b++){
    cout << "*";
    }
    for(int c=0; c<(a*2); c++){
    cout << " ";
    }
    for(int b=0; b<testcase-a; b++){
    cout << "*";
    }
    if(a!=testcase) cout<<"\n";
}

}