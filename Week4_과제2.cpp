#include <iostream>
using namespace std;

class PhoneBook
{
private:
	char name[7]; // 세 글자 이름 기준
	char pnum[14];

public:
	void addPhone();
	void editPhone();
	void getPnum();
	void getName();
	void putName(); // 변수 name을 private으로 지정했기 때문에 main 함수에서 접근할 수 없기 때문에
	                // 이름을 입력받는 함수 하나를 더 만들었습니다.
};

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
		if (strcmp(name,name1)!=0)
			cout << "연락처가 존재하지 않습니다. 다시 입력해 주세요 >> ";
	} while (strcmp(name,name1)!=0); // 입력한 이름과 연락처에 존재하는 이름이 일치할 때까지 반복

	cout << "변경할 전화번호를 입력해 주세요 >> ";
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