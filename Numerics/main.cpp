#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
//#define HEXADECIMAL
//#define DECIMAL

void main()
{
#ifdef DECIMAL



	setlocale(LC_ALL, "");
	int decimal;
	cout << "введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32;//максимально-возможная разрядность двоичного числа
	bool bin[MAX_BIN_CAPACITY] = {}; //этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;//получаем двоичный разряд числа,и сохраняем его в массиве
		decimal /= 2; //убираем полученный двоичный разряд из исходного числа

	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
 //разделяем двоичное число на байты и тетрады:
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " "; //тетрада-это группа из 4-х двоичных разрядов
	}
#endif  DECIMAL
#ifdef HEXADECIMAL
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите число: "; cin >> decimal;
	const int MAX_HEX_DECIMAL = 32;
	int hex[MAX_HEX_DECIMAL] = {};
	int i = 0;
	while(decimal)
		{
		hex[i++] = decimal % 16;
		decimal /= 16;
		}
	for (i - 1; i >= 0; i--)
	{
		cout << hex[i];
	}
#endif  HEXADECIMAL
	for (int i = 0; i < 256; i++)cout << i << tab << (char)i << endl;
	
	setlocale(LC_ALL, "");
	int decimal;
	cout << "введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8; //максимально-возможная разрядность шестнадцатеричного числа
	int hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	//for(start;stop;step)
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	for (i--; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		/*if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);*/
		cout << hex[i];
		/*switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}*/
	}
	cout << endl;
}