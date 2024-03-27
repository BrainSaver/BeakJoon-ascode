#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;
/*
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
*/

int solution(string my_string, string target) {
    
    if (my_string.find(target) != string::npos && my_string != "dz=") return 1;
    else if(my_string == "dz=") return 2;
    else return 0;
}

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    char alpha[8][8]={{"c="}, {"c-"}, {"dz="}, {"d-"}, {"lj"}, {"nj"}, {"s="}, {"z="}};
    string word;

    /*
    ljes=njak
    포함된 알파벳: lj, nj, s=
    단어 길이: 9, 9-3 = 6

    ddz=z=
    dz=: 2, z= : 1
    단어 길이: 6 - 3 = 3
    
    nljj
    lj : 1
    단어 길이 : 4 - 1 = 3
    */
   cin >> word;
   int num=word.size();
   for(int a=0; a<word.size(); a++){
    if (word.find(alpha[a]) != string::npos && word != "dz=") num+=1;
    else if(word == "dz=") num+=2;

   }

}