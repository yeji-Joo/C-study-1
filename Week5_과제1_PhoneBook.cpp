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
	cout << "�̸��� �Է��� �ּ��� >> ";
	do
	{
		cin >> name1;
		if (name != name1)
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ��� >> ";
	} while (name != name1); // �Է��� �̸��� ����ó�� �����ϴ� �̸��� ��ġ�� ������ �ݺ�

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
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