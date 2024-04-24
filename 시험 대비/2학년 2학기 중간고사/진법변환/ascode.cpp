/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string N;
    int testcase, B;

    cin >> testcase;

    while(testcase--){


    cin >> N >> B;
    int sum(0);
    
    for(int i=0; i<N.size(); i++){
        int num = N[i];
        if(num>10){
            if(num>=65 && num<=90){
            num=N[i]-55;
            }
            else if(num>=48 && num<=57){
            num=N[i]-48;
            }
        //cout << num << "\n";
        }
        sum += num*pow(B, N.size()-1-i);
    }


        cout << sum << '\n';
    }
    }