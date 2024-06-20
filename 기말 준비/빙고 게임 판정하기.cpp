/*http://ascode.org/problem.php?id=1454*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int BingoPlate[5][5];
int numInput;
int bingo = 0;
int delNum;

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cin >> BingoPlate[i][j];
    }
}

    cin >> numInput;
while(numInput--){
    cin >> delNum;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(BingoPlate[i][j] == delNum){
            BingoPlate[i][j] = 0;
            }
        }
    }

}

    for(int i=0; i<5; i++){
        if(BingoPlate[0][i]+BingoPlate[1][i]+BingoPlate[2][i]+BingoPlate[3][i]+BingoPlate[4][i] == 0){
            //cout << BingoPlate[0][i]+BingoPlate[1][i]+BingoPlate[2][i]+BingoPlate[3][i]+BingoPlate[4][i] <<'\n';
            //cout << "가로\n";
            bingo++;
        }
    }

    for(int i=0; i<5; i++){
        if(BingoPlate[i][0]+BingoPlate[i][1]+BingoPlate[i][2]+BingoPlate[i][3]+BingoPlate[i][4] == 0){
            //cout << BingoPlate[i][0]+BingoPlate[i][0]+BingoPlate[i][0]+BingoPlate[i][0]+BingoPlate[i][0] << '\n';
            //cout << "세로\n";
            bingo++;
        }
    }

    if(BingoPlate[0][0]+BingoPlate[1][1]+BingoPlate[2][2]+BingoPlate[3][3]+BingoPlate[4][4] == 0){
            //cout << BingoPlate[0][0]+BingoPlate[1][1]+BingoPlate[2][2]+BingoPlate[3][3]+BingoPlate[4][4] << '\n';
            //cout << "대각선 1\n";
            bingo++;
    }
    
    if(BingoPlate[0][4]+BingoPlate[1][3]+BingoPlate[2][2]+BingoPlate[3][1]+BingoPlate[4][0] == 0){
            //cout << BingoPlate[0][4]+BingoPlate[1][3]+BingoPlate[2][2]+BingoPlate[3][1]+BingoPlate[4][0] <<'\n';
            //cout << "대각선 2\n";
            bingo++;
    }
    
    cout << bingo;
}