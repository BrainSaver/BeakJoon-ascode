#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int start=0, end=0;

int max( int a, int b ) {
if( a > b ) return a;
else return b;
}
int getMax( int arr[], int N ) {
int best = 0;//최대값 저장
for(int i=0;i<N;++i) {
for(int j=i;j<N;++j) {
int sum = 0;
for(int k=i;k<=j;++k) sum += arr[k];
best = max(best, sum);
}
}
return best;
} 

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int testcase;
    cin >> testcase;

    while(testcase--){
    int N;
    int e[500];
    cin >> N;
    for(int a=0; a<N; a++){//원소 입력받기
        cin >> e[a];
    }
    cout << getMax(e, N);
    }
}