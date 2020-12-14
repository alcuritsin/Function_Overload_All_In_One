/*
* TODO:
* 1. ��������� ��������� ������ ����������� ����������
* 2. ���������� ���������� ��������� �������� � ��������� ������.
*  
DONE:
�������� ������������� ������� ��� ����������� � ���������� ������� ���� int, float, double, char :
	... FillRand(...);
	... Print(...);
	... Sum(...);
	... Avg(...);		//���������� ������� �������������� ��������� �������
	...	minValueIn(...);
	... maxValueIn(...);
	... Sort();	//��������� ������
	... Shift();	//���������� �������� ������� �� �������� ����� ��������� � ��������� �����������
*/

//���������� �� ������������� ���������...
//#define ONEDIM_INT //���������� ������ INT
//#define ONEDIM_FLOAT //���������� ������ FLOAT
//#define ONEDIM_DOUBLE //���������� ������ DOUBLE
//#define ONEDIM_CHAR //���������� ������ CHAR
//#define TWODIM_INT //��������� ������ INT
//#define TWODIM_FLOAT //��������� ������ FLOAT
#define TWODIM_DOUBLE //��������� ������ DOUBLE
//#define TWODIM_CHAR //��������� ������ CHAR

//��������� �������
#include "Function.h"

void main()
{
	setlocale(LC_ALL, "Russian");

	int shifting_size = 4; //������ ������
	bool shift_to_right = true; //����� ������?

#ifdef ONEDIM_INT
	cout << "���������� ������ - int:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(arr, shifting_size, shift_to_right);
	Print(arr);
	cout << endl;
#endif // ONEDIM_INT

#ifdef ONEDIM_FLOAT
	cout << "���������� ������ - float:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(farr, shifting_size, shift_to_right);
	Print(farr);
	cout << endl;
#endif // ONEDIM_FLOAT

#ifdef ONEDIM_DOUBLE
	cout << "���������� ������ - double:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(darr, shifting_size, shift_to_right);
	Print(darr);
	cout << endl;
#endif // ONEDIM_DOUBLE

#ifdef ONEDIM_CHAR
	cout << "���������� ������ - char:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(carr, shifting_size, shift_to_right);
	Print(carr);
	cout << endl;
#endif // ONEDIM_CHAR

#ifdef TWODIM_INT
	cout << "��������� ������ - int:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(arr, shifting_size, shift_to_right);
	Print(arr);
	cout << endl;
#endif // TWODIM_INT

#ifdef TWODIM_FLOAT
	cout << "��������� ������ - foat:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(farr, shifting_size, shift_to_right);
	Print(farr);
	cout << endl;
#endif // TWODIM_FLOAT

#ifdef TWODIM_DOUBLE
	cout << "��������� ������ - double:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(darr, shifting_size, shift_to_right);
	Print(darr);
	cout << endl;
#endif // TWODIM_DOUBLE

#ifdef TWODIM_CHAR
	cout << "��������� ������ - char:\n";
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

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(carr, shifting_size, shift_to_right);
	Print(carr);
	cout << endl;
#endif // TWODIM_CHAR

}


//�����������
/*
-----------------------------------------------------
|													|
|            "������������ �������� ���"            |
|      ����: ��011                                  |
|   �������: ������ ���������������� �� ����� C++   |
|                                                   |
|	  �����������: ������� �������					|
|	�������������: ������ ����						|
|                                                   |
|                ������������ - 2020                |
|                                                   |
-----------------------------------------------------
*/