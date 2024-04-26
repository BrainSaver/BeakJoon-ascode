/*http://ascode.org/problem.php?id=1344*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string name[2];
		int score[2][30] = { 0, };//이름점수
		cin >> name[0] >> name[1];//1번째 2번째 사람 이름 받음
		int len[2];
		len[0] = name[0].size();//1번 사람의 이름 길이
		len[1] = name[1].size();//2번 사람의 이름 길이


		int longer;
		if (len[0] > len[1]) {
			longer = len[0];
		}
		else if (len[0] <= len[1]) {
			longer = len[1];
		}


		for (int j = 0; j < longer; j++) {//짧은 이름 길이만큼 반복
			for (int i = 0; i < 2; i++) {
				if (name[i][j] != 'A' && name[i][j] == 0) {//이름
					score[i][j] = 12;
				}
				else {
					score[i][j] += name[i][j] - 65;
				}
			}
		}

		int total = 0;

		for (int i = 0; i < longer; i++) {
			if (score[0][i] > score[1][i]) {
				total += score[0][i] - score[1][i];
			}
			else if (score[0][i] <= score[1][i])
				total += score[1][i] - score[0][i];
		}

		if (name[0] == name[1]) {
			cout << "Same person!\n";//완전히 일치하는 경우 Same person!
		}
		else {
			cout << total << '\n';
		}

	}

	return 0;
}