#include<iostream>
#include<string>
using namespace std;
int main()
{
    while (1) {
        
        int pal = 1;
        string s;
        cin >> s;
        if (s == "0") {
            break;
        }

        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - i - 1]) {
                pal = 0;
                break;
            }
        }

        if (pal == 1) {
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        pal = 1;
    }
    return 0;
}