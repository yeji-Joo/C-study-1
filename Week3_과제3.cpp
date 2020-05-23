#include <iostream>
using namespace std;

void print(int* arr) // 반환형은 void형, 함수 이름은 print, 매개변수는 int형 배열
{
	int i;

	for (i = 0; i < 5; i++) // 배열의 순서대로 출력
	{
		cout << i + 1 << ". " << arr[i] << endl;
	}
}

void sort(int* arr) // 반환형은 void형, 함수 이름은 sort, 매개변수는 int형 배열
{
	int i, k;
	int temp; // 임의로 교환할 수를 넣을 변수

	for (k = 0; k < 4; k++) // 가장 작은 수가 arr[4]에 저장되어있다고 가정했을 때, 이 수가 첫 번째 자리까지 오기 위해 반복해야 할 횟수: 4회
	{
		for (i = 0; i < 4; i++) // arr[0]~arr[4]까지 앞뒤의 두 수의 크기 비교를 위해 반복해야 할 횟수: 4회
		{
			if (arr[i] > arr[i + 1]) // arr[i]이 arr[i + 1]보다 클 경우 두 수의 배열의 위치 변환
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main()
{
	int arr[5]; // 크기가 5인 int형 배열 선언
	int* ptr = arr; // 포인터 변수 ptr 선언, 초기화
	int i;

	cout << "숫자 다섯개를 입력해주세요 (띄어쓰기로 구분) ";

	for (i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}

	cout << endl << endl << "< 정렬 전 >" << endl << endl;
	print(arr);

	sort(arr);

	cout << endl << endl << "< 정렬 후 >" << endl;
	print(arr);
}