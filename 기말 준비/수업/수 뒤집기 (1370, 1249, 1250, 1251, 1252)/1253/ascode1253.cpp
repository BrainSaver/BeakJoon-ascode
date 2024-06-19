/*http://ascode.org/problem.php?id=1253*/
#include <iostream>
#include <cmath>

using namespace std;
const int digit[8] = {128, 64, 32, 16, 8, 4, 2, 1};

int decimalToBinary(int decimal[]) {
    int binary[8]={0, };

    for(int j=0; j<4; j++){

    for(int i=0; i<8; i++){
        binary[i] = decimal[j]%2;
        decimal[j]/=2;
    }
    for(int i=0; i<8; i++){
        cout << binary[7-i];
    }

    }
    cout << '\n';
    return 0;
}

int main() {
    int T;
    int num[4];
    cin >> T;

    for (int i = 0; i < T; i++) {
        scanf("%d.%d.%d.%d", &num[0], &num[1], &num[2], &num[3]);
        decimalToBinary(num);
    }

    return 0;
}