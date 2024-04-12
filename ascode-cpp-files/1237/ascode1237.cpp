/*http://ascode.org/problem.php?id=1237
        1. 		 input n 
		2. 		 print n 
		3. 		        if n = 1 then STOP 
		4. 		 		 if n is odd then   n <-- 3n+1 
		5. 		 		 else   n <-- n/2 
		6. 		 GOTO 2 
*/

#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int N_1, N_2;

    while(1){
        int day=0;
        cin >> N_1 >> N_2;
        while(N!=1){
        if(N%2==1){//홀수라면
            N = N*3+1;
        }
        else if(N%2==0){//짝수라면
            N = N/2;
        }
        day++;
        }
        cout << day << "\n";
    }

}