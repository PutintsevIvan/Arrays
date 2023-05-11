#include<iostream>
using namespace std;
//#define ARRAY
#define tab "\t"  
#define ARRAYS_SHIFT
//#define ARRAYS_SHIFT_2

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

#ifdef ARRAYS_SHIFT

	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//циклический сдвиг массива
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)

	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	//вывод сдвинутого массива на экран
for (int i = 0; i < n; i++)
	{
	cout << arr[i] << tab;
	}
cout << endl;
#endif ARRAYS_SHIFT

#ifdef ARRAYS_SHIFT_2


#endif // ARRAYS_SHIFT_2

}