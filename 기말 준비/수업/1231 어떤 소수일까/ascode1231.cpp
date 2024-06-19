#include <iostream>

using namespace std;

// 최대공약수를 계산하는 함수
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 소수로 변환하여 유한소수인지 무한소수인지 판별하는 함수
string convertFraction(int A, int B) {
    // 분자와 분모의 최대공약수를 계산
    int common_divisor = gcd(A, B);
    
    // 분모를 최대공약수로 나누어 최대한 약분
    B /= common_divisor;
    
    // 최대 공약수로 배열의 크기를 제한하여 나머지를 저장
    int remainders[B] = {0};
    
    int remainder = A % B;
    while (remainder != 0 && remainders[remainder] == 0) {
        // 나머지가 반복되지 않으면 계속 진행
        remainders[remainder] = 1;
        remainder = (remainder * 10) % B;
    }
    
    // 반복되는 나머지가 있으면 무한소수, 아니면 유한소수
    if (remainder == 0)
        return "Limited";
    else
        return "Unlimited";
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int A, B;
        cin >> A >> B;
        
        cout << convertFraction(A, B) << endl;
    }

    return 0;
}