#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
    const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		//проверить,встречалось ли выбранное число раньше:
		bool met_before = false;   //предполагаем,что выбранное число раньше НЕ встречалось
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if(arr[i]==arr[j])
				{
				met_before = true; //запоминаем,что число встречалось ранее
				break;  //ключевое слово'break'прерывает текущую итерацию и все последующие
				}
		}
		if (met_before)continue;  //'continue'прерывает текущую итерацию и переходит к следующей
		// поиск повторений:
		int count = 0;
		for (int j = 1 + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)cout << " Значение " << arr[i] << " повторяется " << count << " раз " << endl;
		if (count)printf("  значение  %d повторяется  %d раз\n arr[i]  count");
	}
}