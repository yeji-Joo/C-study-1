// QUIZ 3
#include <iostream>
using namespace std;

int max(int a, int b) // 입력된 두 수를 비교해서 큰 값 리턴
{
	if (a > b)
		return a;
	else
		return b;
}

int min(int a, int b) // 입력된 두 수를 비교해서 작은 값 리턴
{
	if (a > b)
		return b;
	else
		return a;
}

int main()
{
	int num1, num2;
	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분) >> ";
	cin >> num1 >> num2;
	cout << endl << endl;
	cout << "큰 수 >> " << max(num1, num2) << endl;
	cout << "작은 수 >> " << min(num1, num2) << endl;
}
