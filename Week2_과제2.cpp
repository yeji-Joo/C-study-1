#include <iostream>
using namespace std;

int main()
{
	int menu, num; // 번호 선택 변수, 행 개수 변수
	int i, j, k, m; // for문에서 사용할 변수

	do // 메뉴 창을 먼저 출력해야하기 때문에 do~while 문 사용
	{
		cout << "---------별 찍기 시스템---------" << endl;
		cout << "만들고 싶은 모양을 선택해주세요." << endl;
		cout << "1. 직각삼각형" << endl;
		cout << "2. 정삼각형" << endl;
		cout << "3. 나비" << endl;
		cout << "4. 나가기" << endl;
		cin >> menu;

		switch (menu) // 메뉴가 정수값이므로 switch~case 문 사용이 훨씬 간편
		{
		case 1:
			cout << endl << "직각삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> num;
			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 0; k <= num - i; k++)
					cout << " ";
				for (j = 1; j <= i; j++)
					cout << "*";

				cout << endl;
			}
			/* 24행~ 32행 for문 설명
			num=4라고 가정했을 때,
			i=1일 때, k=0,1,2,3일 때 공백 한 칸 출력, 그 후 j=1일 때까지 * 출력 반복
			개행 한 뒤 i 증가시키면서 계속 반복
			밑의 삼각형 두 개는 위 코드를 조금씩 변형해가며 코드를 짰습니다. */

			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 0; k <= num - i; k++)
					cout << "*";
				for (j = 1; j <= i; j++)
					cout << " ";

				cout << endl;
			}
			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 1; k < i; k++)
					cout << " ";
				for (j = 1; j <= num - i + 1; j++)
					cout << "*";

				cout << endl;
			}
			cout << endl;
			break;

		case 2:
			cout << endl << "정삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> num;
			cout << endl;
			for (i = 1; i <= num; i++) // 입력한 행 수만큼 반복
			{
				for (k = 0; k < num - i; k++) 
					cout << " ";
				for (j = 1; j <= i * 2 - 1; j++)
					cout << "*";
				
				cout<<endl;
			}
			cout << endl;
			break;

		case 3:
			cout << endl << "나비를 선택하셨습니다." << endl;
			num = 0; // 아래 if문이 실행 가능하도록 num을 0으로 먼저 초기화
			while (num % 2 == 0) // num에 홀수가 입력될 때까지 반복
			{
				cout << "홀수를 입력해주세요:";
				cin >> num;
			}
			cout << endl;
			for (i = 1; i <= num / 2; i++) // 나비를 가로로 잘랐을 때의 윗부분
			{
				for (k = 1; k <= i; k++)
					cout << "*";
				for (j = num - i * 2; j >= 1; j--)
					cout << " ";
				for (m = 1; m <= i; m++)
					cout << "*";
				cout << endl;
			}
			for (i = 1; i <= num; i++) // 나비의 가운데 줄
				cout << "*";

			cout << endl;
			for (i = num / 2; i >= 1; i--) // 나비를 가로로 잘랐을 때의 아랫부분
			{                              // 윗부분 출력할 때 잔 코드 거꾸로 활용해서 작성
				for (k = 1; k <= i; k++)
					cout << "*";
				for (j = num - i * 2; j >= 1; j--)
					cout << " ";
				for (m = 1; m <= i; m++)
					cout << "*";
				cout << endl;
			}
			cout << endl;
			break;

		case 4:
			cout << endl << "나가기를 선택하셨습니다." << endl;
			cout << "감사합니다." << endl;
			break;

		default:
			cout << endl << "잘못 입력하셨습니다. 다시 입력해주세요." << endl << endl;
			// 위 명령은 제가 그냥 한 번 추가해봤습니다
		}
	} while (menu != 4); // 4 입력할 때까지 반복
}