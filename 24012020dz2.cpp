/*
2. Составить программу, которая по заданным году и номеру месяца т определяет количество дней в этом месяце.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int month = 0, days = 31, year = 0;
	cout << "Введите год: ";
	cin >> year;
	cout << "Введите месяц: ";
	cin >> month;
	if ((month <= 0 || month > 12) || (year <= 0))
	{
		cout << "Ошибка";
	}
	else {
		switch (month)
		{
		case 4:
		case 6:
		case 9:
		case 11:days = 30;
			break;
		case 2:
		{
			(year % 100 == 0) ? (year % 400 == 0 && year % 4 == 0) ? days = 29 : days = 28 : (year % 4 == 0) ? days = 29 : days = 28;
		}
		break;
		}
		cout << "В " << month << " месяце, в " << year << " - " << days << " день(-ей).";
	}
	return 0;
}
