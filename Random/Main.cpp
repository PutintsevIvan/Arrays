#include <iostream>
using namespace std;

#define tab "\t"
//#define RANDOM
#define SELECTED_ELEMENT
//#define RANGE_ARRAY


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef RANDOM




	const int n = 5;
	int arr[n];
	int MinRand;
	int MaxRand;
	/*do
	{
		cout << "MinRand: "; cin >> MinRand;
		cout << "MaxRand: "; cin >> MaxRand;
		if (MaxRand <= MinRand)
		{
			cout << "Error:Введите нулевой диапозон" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (MaxRand <= MinRand);*/
	cout << "MIN,MAX число: "; cin >> MinRand >> MaxRand;
	if (MaxRand < MinRand)
	{
		int buffer = MinRand;
		MinRand = MaxRand;
		MaxRand = buffer;
	}
	if (MaxRand - MinRand<10)
	{
		MaxRand = MinRand + 10;
	}
	

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(MaxRand-MinRand)+MaxRand;
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;  //Вывод результата в консоль
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i]-выбранный элемент
			//arr[j]-перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif RANDOM

#ifdef SELECTED_ELEMENT
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		cout << arr[i]<<tab;
		
	}
	cout << endl;
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j <SIZE - 1; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				int buffer = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buffer;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
		
	{
		cout << arr[i] << tab;
	}
	#endif  SELECTED_ELEMENT

#ifdef RANGE_ARRAY
	const int n = 10;
	int arr[n];
	int arr_buff[10];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		cout << arr[i] << tab;
	}
	for (int i = 0; i < n; i++)
	{
		arr_buff[i] = arr[i];
	}
	cout << endl;


#endif // RANGE_ARRAY




}