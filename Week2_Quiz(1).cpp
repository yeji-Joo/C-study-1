#include <iostream>
using namespace std;

int main()
{
	int a[3][4];
	int i, k;

	int num = 1;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			a[i][k] = num;
			num++;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
}