#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
string multiply(const string& num1, const string& num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<int> result(len1 + len2, 0);
 
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
 
    string resultStr;
    for (int num : result) {
        if (!(resultStr.empty() && num == 0)) {
            resultStr.push_back(num + '0');
        }
    }
    return resultStr.empty() ? "0" : resultStr;
}
 
int main() {
    int T;
    cin>>T;
    while(T--) {
        string num1, num2;
        cin>>num1>>num2;
        string result = multiply(num1, num2);
        cout << result << endl;
    }
    return 0;
}