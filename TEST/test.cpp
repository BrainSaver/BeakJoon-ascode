#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;

class Student {
char *name; // 이름
int number;
public:
Student(const char *p, int n) { // 생성자
cout << "메모리 할당" << endl;
name = new char[strlen(p)+1]; // 널문자 공간 필요
strcpy_s(name, (strlen(p)+1), p);
number = n;
}
~Student() { // 멤버가 포인터이면 소멸자 필요
cout << "메모리 소멸" << endl;
delete [] name;
}
};
int main()
{
Student s1("Park", 2);
Student s2(s1); // 복사 생성자 호출
return 0; // ERROR
}