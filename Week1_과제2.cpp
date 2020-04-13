#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "First number>>";
	cin >> a;

	cout << "Second number>>";
	cin >> b;

	cout << "========계산 결과========" << endl;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / (float)b; // 정수/정수=정수로 출력되기 때문에 캐스트 연산자를 사용하여 실수 출력
}