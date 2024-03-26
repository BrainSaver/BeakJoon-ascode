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
        for(int c=0; c<a; c++){
            cout<<" ";
        }
        for(int b=0; b<star-((a-1)*2); b++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}