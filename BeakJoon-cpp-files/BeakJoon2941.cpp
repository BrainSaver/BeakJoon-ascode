#include <iostream>
#include <string>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;

string find_and_replace(string my_string, string target) {
    size_t found = my_string.find(target);
    while (found != string::npos) {
        my_string.replace(found, target.size(), "a");
        found = my_string.find(target, found+1);
    }
    return my_string;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    string word;

    cin >> word;
    for (int a = 0; a < 8; a++) {
        word = find_and_replace(word, alpha[a]);
    }
    cout << word.size();

    return 0;
}
