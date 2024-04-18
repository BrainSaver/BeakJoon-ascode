/*http://ascode.org/problem.php?id=1370*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)
char word[101];

int main(void) {
    scanf("%s", word);
    int len = strlen(word);
    int out = 1;

    if (len > 1) {  // 길이가 1인 경우는 따로 처리
        for (int a = 0; a < len / 2; a++) {
            if (word[a] != word[len - a - 1]) {
                out = 0;
                break;
            }
        }
    }
    if(out == 1){
    printf("Palindrome!");
    }
    else{
    printf("No palindrome!");
    }
    return 0;
}