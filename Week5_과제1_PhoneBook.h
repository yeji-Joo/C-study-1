#ifndef PHONEBOOK_H
#define PHONEBOOK_H

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

#endif
