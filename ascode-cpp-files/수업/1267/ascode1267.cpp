/*http://ascode.org/problem.php?id=1267*/
#include <iostream>
#include <algorithm>
using namespace std;

//덧셈 함수
void num_plus();
//곱셈 함수
void num_multiply();

int len1, len2, len;
string num1;
string num2;
string multiplied;
int carry = 0;
string result;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
        result.clear();
		//두 십진수 받음
		cin >> num1 >> num2;

        //뒤집음
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());

		len1 = num1.size();
		len2 = num2.size();
		len = max(len1, len2);

		//길이 맞춰줌
		if (len > len1) {
			for (int i = len1; i < len; i++) {
				num1 += '0';
			}
		}
		else {
			for (int i = len2; i < len; i++) {
				num2 += '0';
			}
		}

        num_multiply();
        num_plus();

		reverse(result.begin(), result.end());
		result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));
		cout << result << '\n';
	}
}

//result + multiplied를 result에 저장
void num_plus() {
            for(int i=0; i<len; i++){
            if(num1[i]+num2[i]-'0'-'0'+carry<10){
                result += (char)(num1[i]+num2[i]-'0'+carry);
                carry=0;
            }
            else if(num1[i]+num2[i]-'0'-'0'+carry>10){
                result += (char)(num1[i]+num2[i]-'0'+carry-10);
                carry=1;
            }
            else if(num1[i]+num2[i]-'0'-'0'+carry==10){
                result += '0';
                carry=1;
            }
            }
            if(carry==1){
                result += '1';
            }
}

//두 수를 곱해서 multiplied에 저장
void num_multiply() {
            for(int i=0; i<len; i++){
                for(int j=0; j<len; j++){

                }
            }
            num_plus();
}