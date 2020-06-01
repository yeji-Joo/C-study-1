#include <iostream>
using namespace std;

class PhoneBook
{
private:
	char name[7]; // �� ���� �̸� ����
	char pnum[14];

public:
	void addPhone();
	void editPhone();
	void getPnum();
	void getName();
	void putName(); // ���� name�� private���� �����߱� ������ main �Լ����� ������ �� ���� ������
	                // �̸��� �Է¹޴� �Լ� �ϳ��� �� ��������ϴ�.
};

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
		if (strcmp(name,name1)!=0)
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ��� >> ";
	} while (strcmp(name,name1)!=0); // �Է��� �̸��� ����ó�� �����ϴ� �̸��� ��ġ�� ������ �ݺ�

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
	cin >> pnum;
}

void PhoneBook::getPnum()
{
	cout << pnum;
}

void PhoneBook::getName()
{
	cout << name;
}

void PhoneBook::putName()
{
	cin >> name;
}

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
			a.getName();
			cout << "::";
			a.getPnum();
			cout << endl;
			break;
		case 2:
			a.editPhone();
		}
	}
	cout << endl;
	return 0;
}