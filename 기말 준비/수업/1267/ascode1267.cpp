#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string multiply(const string& num1, const string& num2) {
    if (num1 == "0" || num2 == "0")
        return "0";

    string result(num1.size() + num2.size(), '0');

    for (int i = num1.size() - 1; i >= 0; --i) {
        for (int j = num2.size() - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = sum % 10 + '0';
            result[i + j] += sum / 10;
        }
    }

    // 앞에 불필요한 '0' 제거
    size_t startpos = result.find_first_not_of('0');
    if (string::npos != startpos) {
        return result.substr(startpos);
    }
    return "0";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string num1, num2;
        cin >> num1 >> num2;
        string result = multiply(num1, num2);
        cout << result << endl;
    }
    return 0;
}
