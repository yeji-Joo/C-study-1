#include <iostream>
#include <cstdlib> 
/* std::srand() 함수, std::rand() 함수를 포함하는 헤더
   std::srand() 함수는 매개변수로 초기 시드 값을 설정할 수 있으며,
   std::rand() 함수는 난수를 생성한다. 0~RAND_MAX 사이의 값을 생성하는데,
   일반적으로 RAND_MAX는 32767로 설정되어 있다. */
#include <ctime> 
/* 문자열 변환, 의사 난수 생성, 동적 메모리 관리 등의 함수를 포함한 헤더
   이 중 time()이라는 함수는 1970년 1월 1일 0시 0초부터 경과된 시간을 초(sec)로 반환한다. */

using namespace std;

class Random
{
	public:

	Random();
	int next();
	int nextInRange(int x, int y); // 랜덤으로 출력할 정수의 범위: x 이상 y 이하
};

Random::Random() // Random 클래스의 기본 생성자 Random
{
	srand((unsigned)time(0));
	/* 컴퓨터가 진행하는 난수 생성 또한 일종의 프로그램이기 때문에
	   시드 값이 같다면 항상 같은 결과가 출력된다.
	   따라서 시드 값을 계속 변화시켜주어야 하는데,
	   이를 위해 프로그램이 실행될 때마다 바뀌는 '시간 값'을 시드로 사용한다.
	   따라서 srand() 함수에 매개변수를 time()함수를 사용하여
	   프로그램을 실행할 때마다 초기 시드 값이 바뀌도록 한다. */
}

int Random::next()
{
	return rand(); // 난수 생성
}

int Random::nextInRange(int x, int y)
{
	return rand() % (y - x + 1) + x;
	/* x 이상 y 이하의 수 중에서 난수를 생성하는 수식이 위와 같은데,
	   여기서 (y - x + 1)은 x 이상 y 이하의 수의 개수이다.
	   rand()을 (y - x + 1)로 나눈 나머지는 0 ~ (y - x) 사이의 값이다.
	   즉, 원하는 랜덤 값을 얻기 위해서 모든 나머지에 x를 더하면
	   x~y 사이의 값을 랜덤으로 얻을 수 있다.

	   예를 들어 x=2, y=4으로 가정했을 때,
	   rand() % (4 - 2 + 1) + 2 = rand() % 3 + 2 이다.
	   rand()에서 생성된 값을 3으로 나눈 나머지는 0, 1, 2이며 2를 더하면
	   2, 3, 4가 되므로 원하는 범위 내에서 랜덤 값을 얻을 수 있다. */
}

int main()
{
	int i, n;
	Random r; // 이름이 r인 Random 클래스의 객체 생성
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (i = 0; i < 10; i++) // 랜덤 정수 1개 출력 10회 반복
	{
		n = r.next(); // n에 랜덤 정수 대입
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
	for (i = 0; i < 10; i++) // 랜덤 정수 1개 출력 10회 반복
	{
		n = r.nextInRange(2, 4); // 2~4 사이의 랜덤 정수 n에 대입
		cout << n << ' ';
	}
	cout << endl;
}