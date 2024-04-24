/*http://ascode.org/problem.php?id=1388
*/
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
    int A[50] = { 0, };

    int i, j;
    int N = 0, M = 0; //N: 바구니 수, M: 공을 넣으려는 수
    scanf("%d %d", &N, &M); //N, M 받기

    for (int a = 0; a < N; a++) { //바구니 번호에 맞는 숫자공 넣기
        A[a] = a;
    }

    for (int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j); //바꾸는 바구니
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }

    for (int a = 0; a < N; a++) {
        printf("%d ", A[a]);
    }
}