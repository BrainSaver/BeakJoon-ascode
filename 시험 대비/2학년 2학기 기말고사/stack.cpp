#include <iostream>
#include <stack>
#define MAX 100

using namespace std;

struct str{
    char s[MAX];
};

int main(){
    stack <int> st;
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(5);
    cout << st.size() << "\n\n";
    st.pop();
    cout << st.size();
}