#include <iostream>
using namespace std;

#include "PhoneBook.h"
int main(void)
{
	int menu = 0;
	PhoneBook a; // 이름이 a인 PhoneBook 클래스의 객체 생성
	cout << "--- swing 전화번호부 ---" << endl;
	cout << "이름을 입력해 주세요 >> ";
	a.putName();
	cout << "전화번호를 입력해 주세요 >> ";
	a.addPhone();

	while (menu != 3) // 3을 입력할 때까지 반복
	{
		cout << endl << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << a.getName() << "::" << a.getPnum() << endl;
			break;
		case 2:
			a.editPhone();
		}
	}
	cout << endl;
	return 0;
}
