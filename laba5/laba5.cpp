//Массив
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int len = 6;
	setlocale(0, "");
	srand(time(NULL));
	int a[len][len], summ = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			a[i][j] = rand() % 20 - 10;
			if (i == j) summ += a[i][j];
			printf("% 5d", a[i][j]);
		}
		cout << endl;
	}
	cout << endl << "Сумма элементов главной диагонали равна: " << summ << endl;
}
