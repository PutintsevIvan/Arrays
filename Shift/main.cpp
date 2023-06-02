#include<iostream>
using namespace std;
//#define ARRAY
#define tab "\t"  
#define ARRAYS_SHIFT


void main()
{
#ifdef ARRAY
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8,13,21 };
	//arr[2] = 123;   //обращение массива на запись
	//cout << arr[2] << endl;  //обращение к элементу массива на чтение 
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Средне-арифметическое элементов массива: " << (double)sum/SIZE << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] >max)max = arr[i];
	}
	cout << "минимальное значение в массиве: " << min << endl;
	cout << "максимальное значение в массиве: " << max << endl;

#endif // ARRAY


}