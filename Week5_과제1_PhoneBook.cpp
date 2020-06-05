#include <iostream>
using namespace std;

#include "PhoneBook.h"

void PhoneBook::addPhone()
{
	cin >> pnum;
}

void PhoneBook::editPhone()
{
	char name1[7];
	cout << "이름을 입력해 주세요 >> ";
	do
	{
		cin >> name1;
		if (name != name1)
			cout << "연락처가 존재하지 않습니다. 다시 입력해 주세요 >> ";
	} while (name != name1); // 입력한 이름과 연락처에 존재하는 이름이 일치할 때까지 반복

	cout << "변경할 전화번호를 입력해 주세요 >> ";
	cin >> pnum;
}

string PhoneBook::getPnum()
{
	return pnum;
}

string PhoneBook::getName()
{
	return name;
}

void PhoneBook::putName()
{
	cin >> name;
}