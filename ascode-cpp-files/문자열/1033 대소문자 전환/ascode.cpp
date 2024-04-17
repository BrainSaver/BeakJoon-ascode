/*http://ascode.org/problem.php?id=1033*/
#include <cstdio>
#include <cstring>

int main() {
    int testCase;
    scanf("%d\n", &testCase);

    const int bufferSize = 1 << 16;
    char inputBuffer[bufferSize];
    char outputBuffer[bufferSize];

    while (testCase--) {
        int length = fread(inputBuffer, 1, bufferSize, stdin);
        for (int i = 0; i < length; ++i) {
            char c = inputBuffer[i];
            if ('a' <= c && c <= 'z') {
                c -= 'a' - 'A';
            } else if ('A' <= c && c <= 'Z') {
                c += 'a' - 'A';
            }
            outputBuffer[i] = c;
        }
        fwrite(outputBuffer, 1, length, stdout)
    }

    return 0;
}
