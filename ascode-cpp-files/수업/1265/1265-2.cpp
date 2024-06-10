 /*http://ascode.org/problem.php?id=1266*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
int testcase;
int count=1;
cin >> testcase;
    
    while(testcase--){
        string num1;
        string num2;
        //두 이진수 받음
        cin >> num1 >> num2;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int len1 = num1.size();
        int len2 = num2.size();
        int len=max(len1,len2);
        if(len>len1){
            for(int i=len1; i<len; i++){
                num1+='0';
            }
        }
        else{
            for(int i=len2; i<len; i++){
                num2+='0';
            }
        }


        string result;
        int carry=0; 
        for(int i=0; i<len; i++){
            if(num1[i]+num2[i]-'0'-'0'+carry==0){
                result += '0';
                carry=0;
            }
            else if(num1[i]+num2[i]-'0'-'0'+carry==1){
                result += '1';
                carry=0;
            }
            else if(num1[i]+num2[i]-'0'-'0'+carry==2){
                result += '0';
                carry=1;
            }
            else if(num1[i]+num2[i]-'0'-'0'+carry==3){
                result += '1';
                carry=1;
            }
        }

        if(carry==1){
            result += '1';
        }

        reverse(result.begin(), result.end());
        result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
        cout << count++ << ' ' << result << '\n';
    }
    }
