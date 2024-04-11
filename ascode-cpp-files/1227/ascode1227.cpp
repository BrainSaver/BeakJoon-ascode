/*http://ascode.org/problem.php?id=1227*/

#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int start=0, fin=0;

int max( int a, int b ) {
if( a > b ) {return a;}
else {return b;}
}

int getMax( int arr[], int N ) {
int best = 0;
int sum = 0;
for(int i=0;i<N;++i) {
sum += arr[i];
best = max( best, sum );
if( sum < 0 ) {sum = 0;}
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
    cout <<start << " " << fin << " " << getMax(e, N) << "\n";
    }
}