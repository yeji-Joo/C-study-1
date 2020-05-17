#include <iostream>
using namespace std;

int main()
{
	int num[5]; // 숫자 입력 받을 배열 선언
	int odd_cnt = 0, even_cnt = 0; // 홀수, 짝수 개수 카운트할 변수
	int i;

	for (i = 0; i < 5; i++) // 숫자 5개 입력받기
	{
		cout << "숫자를 입력해주세요: ";
		cin >> num[i];
	}

	cout << endl << "---------결과---------" << endl;

	cout << "홀수: ";
	for (i = 0; i < 5; i++)
		if (num[i] % 2 != 0) // num[i]가 홀수이면 홀수 카운트 증가시키고 출력하기
		{
			odd_cnt++;
			cout << num[i] << " ";
		}
	cout << endl << "홀수는 총 " << odd_cnt << "개 입니다." << endl << endl;

	cout << "짝수: ";
	for (i = 0; i < 5; i++)
		if (num[i] % 2 == 0) // num[i]가 짝수이면 짝수 카운트 증가시키고 출력하기
		{
			even_cnt++;
			cout << num[i] << " ";
		}
	cout << endl << "짝수는 총 " << even_cnt << "개 입니다." << endl;
}