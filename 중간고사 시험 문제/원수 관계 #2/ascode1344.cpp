/*http://ascode.org/problem.php?id=1344*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int testcase;
	int score[2][30];//점수
	cin >> testcase;

	while (testcase--) {
		int total=0;//계산된 점수
		string name[2];
		cin >> name[0] >> name[1];


		//모든 점수를 12로 초기화
		for(int i=0; i<30; i++){
			score[0][i]=12;
			score[1][i]=12;
		}

		int len = name[0].size();//1번째 이름의 길이
		for(int i = 0; i < len; i++){
			score[0][i] = name[0][i] - 'A';
		}

		len = name[1].size();//2번째 이름의 길이
		for(int i = 0; i < len; i++){
			score[1][i] = name[1][i] - 'A';
		}

		//두 이름의 점수 계산
		for(int i=0; i<30; i++){
			if(score[0][i]-score[1][i]>0){
				total+=score[0][i]-score[1][i];
			}
			else{
				total+=score[1][i]-score[0][i];
			}
		}

		if(name[0]==name[1]){
			//이름이 같을 경우
			cout << "Same person!\n";
		}
		else{
			cout << total << '\n';
		}

	}

	return 0;
}