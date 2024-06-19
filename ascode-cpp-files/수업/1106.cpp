#include <iostream>
#include <stack>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT
    string line;
    int num;

    cin >> num;

    while (num--) {
        stack<int> s;
        cin >> line;
        int len = line.size();
        bool YesOrNo = true;

        for (int i = 0; i < len; i++) {
            if (line[i] == '(') {
                s.push(1);
            }
            else if (line[i] == '{') {
                s.push(2);
            }
            else if (line[i] == '[') {
                s.push(3);
            }
            else if (line[i] == ')') {
                if (!s.empty() && s.top() == 1) {
                    s.pop();
                } else {
                    YesOrNo = false;
                    break;
                }
            }
            else if (line[i] == '}') {
                if (!s.empty() && s.top() == 2) {
                    s.pop();
                } else {
                    YesOrNo = false;
                    break;
                }
            }
            else if (line[i] == ']') {
                if (!s.empty() && s.top() == 3) {
                    s.pop();
                } else {
                    YesOrNo = false;
                    break;
                }
            }
        }

        if (YesOrNo && s.empty()) {
            cout << "Good!\n";
        } else {
            cout << "Retry...\n";
        }
    }
}
