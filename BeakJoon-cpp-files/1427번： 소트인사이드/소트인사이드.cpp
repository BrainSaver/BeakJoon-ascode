#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
string num;
int n[10]={0,};

cin >> num;
int len= num.size();
for(int i=0; i<len; i++){
    n[num[i]-'0']++;
    }

for(int i=9; i>=0; i--){
    for(int j=0; j<n[i]; j++){
    cout << i;
    }
    }

}