#include <iostream>
#include <cmath>

using namespace std;
const int digit[8] = {128, 64, 32, 16, 8, 4, 2, 1};

int binaryToDecimal(string binary, int r) {
    string binaryR;
    int total=0;
    for(int i=0; i<8; i++){
        binaryR += binary[r*8+i];
    }
    
    
    int decimal = 0;
    int power = 0;

    for (int i = binaryR.length() - 1; i >= 0; i--) {
        if (binaryR[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }


    return decimal;
}

int main() {
    int T;
    string binary;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> binary;
        for(int i=0; i<4; i++){
        cout << binaryToDecimal(binary, i);
        if(i!=3) cout <<'.';
        }
        cout << '\n';
    }

    return 0;
}