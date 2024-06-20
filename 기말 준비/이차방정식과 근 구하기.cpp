/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase;
double a, b, c;
double d;
cout << fixed;
cout.precision(3);
cin >> testcase;

while(testcase--){

cin >> a;
cin >> b;
cin >> c;

if(a == 0){
    cout << "No quadratic\n";
}
else{
    d = b*b-4*a*c;
    //근이 두 개일 때
    if(d > 0){
        double e = (-b+sqrt(d))/(2*a);
        double f = (-b-sqrt(d))/(2*a);
        if(f > e){
            swap(e, f);
        }
        cout << e << ' ' << f <<'\n';
    }
    //근이 한 개일 때
    else if(d == 0){
        cout << -b/(2*a) << '\n';
    }
    //허근
    else{
        cout << "Imaginary\n";
    }
}

}
}