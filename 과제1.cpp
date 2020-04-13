#include <iostream>
#include <string>

using namespace std;

int main()
{
	char name[10];
	cout << "이름을 입력하세요: ";
	cin >> name;

	char birth[100];
	cout << "생일을 입력하세요: ";
	getchar();
	cin.getline(birth, 100);

	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;

	string major;
	cout << "학과를 입력하세요: ";
	getchar();
	getline(cin, major);

	cout << endl << "=================================" << endl;
	cout << "<회원 정보>" << endl;
	cout << "이름: " << name << endl;
	cout << "생일: " << birth << endl;
	cout << "나이: " << age << endl;
	cout << "소속 학과:" << major;

}