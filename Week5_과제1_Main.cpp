#include <iostream>
using namespace std;

#include "PhoneBook.h"
int main(void)
{
	int menu = 0;
	PhoneBook a; // �̸��� a�� PhoneBook Ŭ������ ��ü ����
	cout << "--- swing ��ȭ��ȣ�� ---" << endl;
	cout << "�̸��� �Է��� �ּ��� >> ";
	a.putName();
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >> ";
	a.addPhone();

	while (menu != 3) // 3�� �Է��� ������ �ݺ�
	{
		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
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