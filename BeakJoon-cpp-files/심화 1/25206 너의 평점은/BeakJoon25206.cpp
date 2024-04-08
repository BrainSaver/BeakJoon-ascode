#include <iostream>

using namespace std;

int main() {

  string name, grade;
  double credit;

  double sumCredit = 0.0;
  double score;
  double res = 0.0;
  for(int i = 0; i < 20; i++) {
    cin >> name >> credit >> grade;
    if(grade == "P") continue;
    
    sumCredit += credit;
    if(grade == "F") continue;

    if(grade[0] == 'A') score = 4;
    else if (grade[0] == 'B') score = 3;
		else if (grade[0] == 'C') score = 2;
    else score = 1;

    if (grade[1] == '+') score += 0.5;

    res += credit * score;
  }

  cout << res / sumCredit;

  return 0;
}