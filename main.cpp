/*
* TODO:
* 1. Заполнить двумерный массив уникальными значениями
* 2. Подсчитать количество вхождений значений в двумерный массив.
*  
DONE:
Написать перегруженные функции для одномерного и двумерного массива типа int, float, double, char :
	... FillRand(...);
	... Print(...);
	... Sum(...);
	... Avg(...);		//Возвращает среднее арифметическое элементов массива
	...	minValueIn(...);
	... maxValueIn(...);
	... Sort();	//Сортирует массив
	... Shift();	//Циклически сдвигает массива на заданное число элементов в указанном направлении
*/

//Выключение не используемого коентента...
//#define ONEDIM_INT //Одномерный массив INT
//#define ONEDIM_FLOAT //Одномерный массив FLOAT
//#define ONEDIM_DOUBLE //Одномерный массив DOUBLE
//#define ONEDIM_CHAR //Одномерный массив CHAR
//#define TWODIM_INT //Двумерный массив INT
//#define TWODIM_FLOAT //Двумерный массив FLOAT
#define TWODIM_DOUBLE //Двумерный массив DOUBLE
//#define TWODIM_CHAR //Двумерный массив CHAR

//Прототипы функций
#include "Function.h"

void main()
{
	setlocale(LC_ALL, "Russian");

	int shifting_size = 4; //Размер сдвига
	bool shift_to_right = true; //Сдвиг вправо?

#ifdef ONEDIM_INT
	cout << "Одномерный массив - int:\n";
	int arr[C]{};
	FillRand(arr);
	Print(arr);

	cout << "Sum = " << SummArr(arr) << "\t";
	cout << "Avg = " << AvgArr(arr) << "\t";
	cout << "Min = " << minValueIn(arr) << "\t";
	cout << "Max = " << maxValueIn(arr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(arr, true);
	Print(arr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(arr, shifting_size, shift_to_right);
	Print(arr);
	cout << endl;
#endif // ONEDIM_INT

#ifdef ONEDIM_FLOAT
	cout << "Одномерный массив - float:\n";
	float farr[C]{};
	FillRand(farr);
	Print(farr);

	cout << "Sum = " << SummArr(farr) << "\t";
	cout << "Avg = " << AvgArr(farr) << "\t";
	cout << "Min = " << minValueIn(farr) << "\t";
	cout << "Max = " << maxValueIn(farr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(farr, true);
	Print(farr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(farr, shifting_size, shift_to_right);
	Print(farr);
	cout << endl;
#endif // ONEDIM_FLOAT

#ifdef ONEDIM_DOUBLE
	cout << "Одномерный массив - double:\n";
	double darr[C]{};
	FillRand(darr);
	Print(darr);

	cout << "Sum = " << SummArr(darr) << "\t";
	cout << "Avg = " << AvgArr(darr) << "\t";
	cout << "Min = " << minValueIn(darr) << "\t";
	cout << "Max = " << maxValueIn(darr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(darr, true);
	Print(darr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(darr, shifting_size, shift_to_right);
	Print(darr);
	cout << endl;
#endif // ONEDIM_DOUBLE

#ifdef ONEDIM_CHAR
	cout << "Одномерный массив - char:\n";
	char carr[C]{};
	FillRand(carr);
	Print(carr);

	cout << "Sum = " << SummArr(carr) << "\t";
	cout << "Avg = " << AvgArr(carr) << "\t";
	cout << "Min = " << minValueIn(carr) << "\t";
	cout << "Max = " << maxValueIn(carr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(carr, true);
	Print(carr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(carr, shifting_size, shift_to_right);
	Print(carr);
	cout << endl;
#endif // ONEDIM_CHAR

#ifdef TWODIM_INT
	cout << "Двумерный массив - int:\n";
	int arr[R][C]{};
	FillRand(arr);
	Print(arr);

	cout << "Sum = " << SummArr(arr) << "\t";
	cout << "Avg = " << AvgArr(arr) << "\t";
	cout << "Min = " << minValueIn(arr) << "\t";
	cout << "Max = " << maxValueIn(arr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(arr, true);
	Print(arr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(arr, shifting_size, shift_to_right);
	Print(arr);
	cout << endl;
#endif // TWODIM_INT

#ifdef TWODIM_FLOAT
	cout << "Двумерный массив - foat:\n";
	float farr[R][C]{};
	FillRand(farr);
	Print(farr);
	cout << "Sum = " << SummArr(farr) << "\t";
	cout << "Avg = " << AvgArr(farr) << "\t";
	cout << "Min = " << minValueIn(farr) << "\t";
	cout << "Max = " << maxValueIn(farr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(farr, true);
	Print(farr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(farr, shifting_size, shift_to_right);
	Print(farr);
	cout << endl;
#endif // TWODIM_FLOAT

#ifdef TWODIM_DOUBLE
	cout << "Двумерный массив - double:\n";
	double darr[R][C]{};
	FillRand(darr);
	Print(darr);

	cout << "Sum = " << SummArr(darr) << "\t";
	cout << "Avg = " << AvgArr(darr) << "\t";
	cout << "Min = " << minValueIn(darr) << "\t";
	cout << "Max = " << maxValueIn(darr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(darr, true);
	Print(darr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(darr, shifting_size, shift_to_right);
	Print(darr);
	cout << endl;
#endif // TWODIM_DOUBLE

#ifdef TWODIM_CHAR
	cout << "Двумерный массив - char:\n";
	char carr[R][C]{};
	FillRand(carr);
	Print(carr);

	cout << "Sum = " << SummArr(carr) << "\t";
	cout << "Avg = " << AvgArr(carr) << "\t";
	cout << "Min = " << minValueIn(carr) << "\t";
	cout << "Max = " << maxValueIn(carr) << "\t\n";

	cout << "\nSorting Up\n";
	SortingArr(carr, true);
	Print(carr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "Да\n" : cout << "Нет\n";
	Shift(carr, shifting_size, shift_to_right);
	Print(carr);
	cout << endl;
#endif // TWODIM_CHAR

}


//Исполнитель
/*
-----------------------------------------------------
|													|
|            "Компьютерная академия ШАГ"            |
|      Курс: БД011                                  |
|   Предмет: Основы программирования на языке C++   |
|                                                   |
|	  Исполнитель: Курицын Алексей					|
|	Преподаватель: Ковтун Олег						|
|                                                   |
|                Екатеринбург - 2020                |
|                                                   |
-----------------------------------------------------
*/