/*http://ascode.org/problem.php?id=1311*/
#include <iostream>
#include <stack>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
stack <int > st;
int num;
string input;

while(1){
    cin >> input;

   
        if(input == "PUSH"){
        cin >> num;
        st.push(num);
        }

        if(input == "POP"){

        if(st.size() == 0){
        cout << "ERROR\n";
        }
        else{
        cout << st.top() << '\n';
        st.pop();
        }
        }

        if(input == "SIZE"){
        cout << st.size() << '\n';
        }

        if(input == "CLEAR"){
        while(!st.empty()){
            st.pop();
        }
        }

        if(input == "END"){
        return 0;
        }

}

}