#include <iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n--------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 3;
	double arr[SIZE] = { 5,8,9 };
	double matrix_three[SIZE][SIZE] = {};
	double matrix_two[SIZE][SIZE] = {};
	double matrix_result[SIZE][SIZE] = {};

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix_three[i][j] = rand() % 10;
			cout << matrix_three[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix_two[i][j] = rand() % 10;
			cout << matrix_two[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			double result = 0;
			for (int k = 0; k < SIZE; k++)
			{
				result += matrix_three[i][k] * matrix_two[k][j];
			}
			//cout << result << tab;
			matrix_result[i][j] += result;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << matrix_result[i][j] << tab;
		}
		cout << endl;
	}
}











