#include <iostream>
using namespace std;
    string arr;
    int NC[1000000];
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int start, end;
    cin >> arr;
    int len=arr.size();
        int cnt = 0;
        NC[0] = cnt;
    for(int i=1; i<len; i++){
        if(arr[i]!=arr[i-1]){
            cnt++;
        }
        NC[i] = cnt;
    }
    cin >> N;
    while(N--){
        cin >> start >> end;
        if(start>end){
            swap(start, end);
        }
        int num = NC[start];
        if(num==NC[end]){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    }