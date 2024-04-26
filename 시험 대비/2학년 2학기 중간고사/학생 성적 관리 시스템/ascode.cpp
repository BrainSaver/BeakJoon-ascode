/*http://ascode.org/problem.php?id=1424*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cout << fixed;
	cout.precision(2);//소수 2자리 까지만 출력,,,

	string name[50];//이름 저장
	int num[50][6];//학번과 점수 저장
	int best[50] = { 0, };//최고점수 -1점 설정
	double total[50] = { 0, };//총점 저장
	int testcase;
	int student;//학생 수

	cin >> testcase;

	while (testcase--) {
		cin >> student;

		for (int i = 0; i < student; i++) {//학생 수만큼 반복
			cin >> name[i];//학생의 이름을 입력받고
			total[i] = 0;//초기화를 까먹었네,,
            best[i] = 0;
			for (int j = 0; j < 6; j++) {//학번, 점수를 저장함
				cin >> num[i][j];
				if (j != 0) {
				total[i] += num[i][j];//총점 더하기
				if (num[i][j] > best[i]) {//최고점수 저장
					best[i] = num[i][j];
				}
				}
		}
		}
		for (int i = 0; i < student; i++) {
			cout << name[i] << ' ' << best[i] << ' ' << total[i] / 5 << '\n';//공백,,,
		}
		cout << '\n';//테스트 케이스 사이의 출력 결과에 빈 줄 추가했는디,,,
	}

	return 0;
}