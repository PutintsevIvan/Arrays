#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		do {
			bool unique;    //флаг уникальности
			arr[i] = rand() % 10;
			unique = true;  //предположим,что сгенерировалось уникальное число
			//но это нужно проверить;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;  //запоминаем то,что чтсло в arr[i] НЕ уникальное
					break;
				}
			}

		} while(!unique);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}