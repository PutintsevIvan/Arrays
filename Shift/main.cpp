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
	//arr[2] = 123;   //��������� ������� �� ������
	//cout << arr[2] << endl;  //��������� � �������� ������� �� ������ 
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
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������-�������������� ��������� �������: " << (double)sum/SIZE << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] >max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;

#endif // ARRAY


}