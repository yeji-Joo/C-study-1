#include <iostream>
using namespace std;

int main()
{
	int i, k;

	for (i = 1; i < 6; i++)
	{
		for (k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
