/*
* TODO:
 1. ��������� ��������� ������ ����������� ����������
 2. ���������� ���������� ��������� �������� � ��������� ������.
  
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

//#define TWODIM_INT //��������� ������ INT + function FindTwins
//#define TWODIM_FLOAT //��������� ������ FLOAT + function FindTwins
//#define TWODIM_DOUBLE //��������� ������ DOUBLE + function FindTwins
//#define TWODIM_CHAR //��������� ������ CHAR + function FindTwins

//#define TWODIM_INT_UNIQ //��������� ������ INT
//#define TWODIM_FLOAT_UNIQ //��������� ������ FLOAT
//#define TWODIM_DOUBLE_UNIQ //��������� ������ DOUBLE
#define TWODIM_CHAR_UNIQ //��������� ������ CHAR

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

	std::cout << "����� ���������\n";
	FindTwins(arr);

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

	std::cout << "����� ���������\n";
	FindTwins(farr);

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

	std::cout << "����� ���������\n";
	FindTwins(darr);

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

	std::cout << "����� ���������\n";
	FindTwins(carr);

	cout << "\nSorting Up\n";
	SortingArr(carr, true);
	Print(carr);

	cout << "Shift = " << shifting_size << "; Right = "; shift_to_right ? cout << "��\n" : cout << "���\n";
	Shift(carr, shifting_size, shift_to_right);
	Print(carr);
	cout << endl;
#endif // TWODIM_CHAR

#ifdef TWODIM_INT_UNIQ

	cout << "��������� ������ - int:\n";
	cout << "��������� ��������\n";
	int arr[R][C]{};
	FillRandUniq(arr);
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
#endif // TWODIM_INT_UNIQ

#ifdef TWODIM_FLOAT_UNIQ

	cout << "��������� ������ - float:\n";
	cout << "��������� ��������\n";
	float farr[R][C]{};
	FillRandUniq(farr);
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
#endif // TWODIM_FLOAT_UNIQ

#ifdef TWODIM_DOUBLE_UNIQ

	cout << "��������� ������ - double:\n";
	cout << "��������� ��������\n";
	double darr[R][C]{};
	FillRandUniq(darr);
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
#endif // TWODIM_DOUBLE_UNIQ

#ifdef TWODIM_CHAR_UNIQ

	cout << "��������� ������ - char:\n";
	cout << "��������� ��������\n";
	char carr[R][C]{};
	FillRandUniq(carr);
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
#endif // TWODIM_CHAR_UNIQ
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