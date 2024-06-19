#include <iostream>
using namespace std;

int main() {
int bigBus = 0; //45명
int smallBus = 0;//25명
int n;//인원수 (1000명 이하)
int m;//교수님 수 (25명 이하)
cin >> n >> m;

//교수가 타는 경우
if(m >= 15){
    smallBus++;
}


//학생이 타는 경우
while(n>45){
    n-=45;
    bigBus++;
}

while(n>25){
    n-=45;
    bigBus++;
}

while(n>0){
if(n!=0){
    smallBus++;
    n-=25;
}
}

if(bigBus != 0){
cout << "Big bus : " << bigBus <<'\n';
}

if(smallBus !=0){
cout << "Small bus : " << smallBus <<'\n';
}
}