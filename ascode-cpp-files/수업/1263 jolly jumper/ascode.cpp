/*http://ascode.org/problem.php?id=1263*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase, num;
while(1){
int arr[3000];
int check[3000];
int room=0;
int input;
if(!(cin >> testcase)) break;

    bool jolly = true;
    for(int i=0; i<testcase; i++){
    cin >> num;
    arr[room++]=num;//배열에 값 저장
    }

    for(int i=0; i<testcase; i++){

        if(arr[i]>arr[i+1]){
        check[arr[i]-arr[i+1]]++;
        if(check[arr[i]-arr[i+1]]!=1){
        jolly=false;
        }
        }

        else(arr[i+1]>arr[i]){
        check[arr[i+1]-arr[i]]++;
        if(check[arr[i]-arr[i+1]]!=1){
        jolly=false;
        }
        }

    }


    if(jolly){
        cout << "Jolly\n";
    }
    else{
        cout << "Not jolly\n";
    }

}


}