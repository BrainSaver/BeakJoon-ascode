#include <iostream>
#include <stack>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
stack <int> st;
int num;
int input;
int testcase;

cin >> testcase;

while(testcase--){
    cin >> num;
    switch(num){
        case 1:
        cin >> input;
        st.push(input);
        break;

        case 2:
        if(st.size() == 0){
            cout << "-1\n";
            break;
        }
        cout << st.top() << "\n";
        st.pop();
        break;
        
        case 3:
        cout << st.size() << "\n";
        break;

        case 4:
        cout << st.empty() << "\n";
        break;

        case 5:
        if(st.size() == 0){
            cout << "-1\n";
            break;
        }
        cout << st.top() << "\n";
        break;
    }
}
    }

    /*
1: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
3: 스택에 들어있는 정수의 개수를 출력한다.
4: 스택이 비어있으면 1, 아니면 0을 출력한다.
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.*/