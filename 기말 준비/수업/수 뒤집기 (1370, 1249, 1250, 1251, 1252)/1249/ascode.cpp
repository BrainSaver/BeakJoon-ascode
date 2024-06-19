/*http://ascode.org/problem.php?id=1249*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
int testcase;
char N1[5];
char N2[5];
scanf("%d", &testcase);

while(testcase--){
scanf("%s", N1);
strcpy(N2, N1);
char temp1 = N2[0];
char temp2 = N2[1];
N2[0] = N2[3];
N2[3] = temp1;

N2[1] = N2[2];
N2[2] = temp2;

int NN1 = atoi(N1);
int NN2 = atoi(N2);

if(NN1 > NN2){
printf("%d\n", NN1);
}
else if(NN1 < NN2){
printf("%d\n", NN2);
}

}
}