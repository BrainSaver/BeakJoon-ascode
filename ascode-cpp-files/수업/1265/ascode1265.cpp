/*http://ascode.org/problem.php?id=1265*/
#include <iostream>
#include <algorithm>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase;
int count=1;
cin >> testcase;
    
    while(testcase--){
        string num1;
        string num2;
        int num_plus[81] = {0, };
        //두 이진수 받음
        cin >> num1 >> num2;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int len1 = num1.size();
        int len2 = num2.size();


        for(int i=0; i<len1; i++){
            num_plus[i] += num1[i]-'0';
        }

        for(int i=0; i<len2; i++){
            num_plus[i] += num2[i]-'0';
        }


        string result;
        int carry=0;

        int len = max(len1, len2);
        for(int i=0; i<len; i++){
            if(num_plus[i]+carry==1){
                result+='1';
                carry=0;
            }
            else if(num_plus[i]+carry==2){
                result+='0';
                carry=1;
            }
            else if(num_plus[i]+carry==3){
                result+='1';
                carry=1;
            }
            else if(num_plus[i]+carry==0){
                result+='0';
                carry=0;
            }
        }

        if(carry==1){
            result += '1';
        }

        reverse(result.begin(), result.end());
        result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
        cout << count++ << ' ' << result;
        

        cout << '\n';
    }
    }