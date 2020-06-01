#include <iostream>
using namespace std;

class PhoneBook
{
private:
	string name;
	string pnum;

public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
	void putName(); // ���� name�� private���� �����ؼ� main �Լ����� ������ �� ���� ������
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
		if (name!=name1)
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ��� >> ";
	} while (name!=name1); // �Է��� �̸��� ����ó�� �����ϴ� �̸��� ��ġ�� ������ �ݺ�

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