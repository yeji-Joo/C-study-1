#include <iostream>
using namespace std;

void swap(int *a, int *b) // 반환형은 void형, 함수 이름은 swap, 매개변수는 두 개의 정수
{
	int temp; // 숫자 교환을 위해 int형 변수 하나 더 선언
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1, num2; // 입력받을 두 개의 변수 선언
	cout << "first number >> ";
	cin >> num1;
	cout << "second number >> ";
	cin >> num2;

	cout << endl;
	cout << "swap 전 >> " << num1 << " " << num2 << endl;
	swap(&num1, &num2); // swap 함수 
	cout << "swap 후 >> " << num1 << " " << num2 << endl;
}
