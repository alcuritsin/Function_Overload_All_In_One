/*
TODO:
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
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::count;

//БЛОК УПРАВЛЕНИЯ
const int R = 5; //Количество строчек
const int C = 8; //Количество колонок
int shifting_size = 4; //Размер сдвига
bool shift_to_right = true; //Сдвиг вправо?
int round_size = 3; //Количество знаков после запятой для массивов float и double

//Выключение не используемого коентента...
//#define ONEDIM_INT //Одномерный массив INT
//#define ONEDIM_FLOAT //Одномерный массив FLOAT
//#define ONEDIM_DOUBLE //Одномерный массив DOUBLE
//#define ONEDIM_CHAR //Одномерный массив CHAR
//#define TWODIM_INT //Двумерный массив INT
//#define TWODIM_FLOAT //Двумерный массив FLOAT
//#define TWODIM_DOUBLE //Двумерный массив DOUBLE
#define TWODIM_CHAR //Двумерный массив CHAR

//Прототипы функций
void FillRand(int arr[C], int minRand = 0, int maxRand = 100); //нижняя и верхняя граница чисел
void FillRand(float arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(double arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(char arr[C], int minRand = 65, int maxRand = 90); //От A до Z
void FillRand(int arr[R][C], int minRand = 0, int maxRand = 100); //нижняя и верхняя граница чисел
void FillRand(float arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(double arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(char arr[R][C], int minRand = 65, int maxRand = 90); //От A до Z

void Print(int arr[C]);
void Print(float arr[C]);
void Print(double arr[C]);
void Print(char arr[C]);
void Print(int arr[R][C]);
void Print(float arr[R][C]);
void Print(double arr[R][C]);
void Print(char arr[R][C]);

int SummArr(int arr[C]);
float SummArr(float arr[C]);
double SummArr(double arr[C]);
int SummArr(char arr[C]);
int SummArr(int arr[R][C]);
float SummArr(float arr[R][C]);
double SummArr(double arr[R][C]);
int SummArr(char arr[R][C]);

double AvgArr(int arr[C]);
float AvgArr(float arr[C]);
double AvgArr(double arr[C]);
double AvgArr(char arr[C]);
double AvgArr(int arr[R][C]);
float AvgArr(float arr[R][C]);
double AvgArr(double arr[R][C]);
double AvgArr(char arr[R][C]);

int minValueIn(int arr[C]);
float minValueIn(float arr[C]);
double minValueIn(double arr[C]);
char minValueIn(char arr[C]);
int minValueIn(int arr[R][C]);
float minValueIn(float arr[R][C]);
double minValueIn(double arr[R][C]);
char minValueIn(char arr[R][C]);

int maxValueIn(int arr[C]);
float maxValueIn(float arr[C]);
double maxValueIn(double arr[C]);
char maxValueIn(char arr[C]);
int maxValueIn(int arr[R][C]);
float maxValueIn(float arr[R][C]);
double maxValueIn(double arr[R][C]);
char maxValueIn(char arr[R][C]);

void SortingArr(int arr[C], bool Up = true);
void SortingArr(float arr[C], bool Up = true);
void SortingArr(double arr[C], bool Up = true);
void SortingArr(char arr[C], bool Up = true);
void SortingArr(int arr[R][C], bool Up = true);
void SortingArr(float arr[R][C], bool Up = true);
void SortingArr(double arr[R][C], bool Up = true);
void SortingArr(char arr[R][C], bool Up = true);

void Shift(int arr[C], int size_shift, bool right = true);
void Shift(float arr[C], int size_shift, bool right = true);
void Shift(double arr[C], int size_shift, bool right = true);
void Shift(char arr[C], int size_shift, bool right = true);
void Shift(int arr[R][C], int size_shift, bool right = true);
void Shift(float arr[R][C], int size_shift, bool right = true);
void Shift(double arr[R][C], int size_shift, bool right = true);
void Shift(char arr[R][C], int size_shift, bool right = true);

void main()
{
	setlocale(LC_ALL, "Russian");

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

//Реализации функций
void FillRand(int arr[C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	for (int i = 0; i < C; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(float arr[C], int round, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	int rounding = 1;
	for (int i = 0; i < round; i++)
	{
		rounding *= 10;
	}
	for (int i = 0; i < C; i++)
	{
		arr[i] = (float)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
	}
}
void FillRand(double arr[C], int round, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	int rounding = 1;
	for (int i = 0; i < round; i++)
	{
		rounding *= 10;
	}
	for (int i = 0; i < C; i++)
	{
		arr[i] = (double)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
	}
}
void FillRand(char arr[C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	for (int i = 0; i < C; i++)
	{
		arr[i] = char(rand() % (maxRand - minRand) + minRand);
	}
}
void FillRand(int arr[R][C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(float arr[R][C], int round, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	int rounding = 1;
	for (int i = 0; i < round; i++)
	{
		rounding *= 10;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = (float)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
		}
	}
}
void FillRand(double arr[R][C], int round, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	int rounding = 1;
	for (int i = 0; i < round; i++)
	{
		rounding *= 10;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = (double)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
		}
	}
}
void FillRand(char arr[R][C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = char(rand() % (maxRand - minRand) + minRand);
		}
	}
}

void Print(int arr[C])
{
	for (int i = 0; i < C; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void Print(float arr[C])
{
	for (int i = 0; i < C; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void Print(double arr[C])
{
	for (int i = 0; i < C; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void Print(char arr[C])
{
	for (int i = 0; i < C; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void Print(int arr[R][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(float arr[R][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double arr[R][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(char arr[R][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}

int SummArr(int arr[C])
{
	int Summ = 0;
	for (int i = 0; i < C; i++)
	{
		Summ += arr[i];
	}
	return Summ;
}
float SummArr(float arr[C])
{
	float Summ = 0;
	for (int i = 0; i < C; i++)
	{
		Summ += arr[i];
	}
	return Summ;
}
double SummArr(double arr[C])
{
	double Summ = 0;
	for (int i = 0; i < C; i++)
	{
		Summ += arr[i];
	}
	return Summ;
}
int SummArr(char arr[C])
{
	int Summ = 0;
	for (int i = 0; i < C; i++)
	{
		Summ += (int)arr[i];
	}
	return Summ;
}
int SummArr(int arr[R][C])
{
	int Summ = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Summ += arr[i][j];
		}
	}
	return Summ;
}
float SummArr(float arr[R][C])
{
	float Summ = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Summ += arr[i][j];
		}
	}
	return Summ;
}
double SummArr(double arr[R][C])
{
	double Summ = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Summ += arr[i][j];
		}
	}
	return Summ;
}
int SummArr(char arr[R][C])
{
	int Summ = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Summ += (int)arr[i][j];
		}
	}
	return Summ;
}

double AvgArr(int arr[C])
{
	return (double)SummArr(arr) / C;
}
float AvgArr(float arr[C])
{
	return (float)SummArr(arr) / C;
}
double AvgArr(double arr[C])
{
	return (double)SummArr(arr) / C;
}
double AvgArr(char arr[C])
{
	return (double)SummArr(arr) / C;
}
double AvgArr(int arr[R][C])
{
	return (double)SummArr(arr) / (R * C);
}
float AvgArr(float arr[R][C])
{
	return (float)SummArr(arr) / (R * C);
}
double AvgArr(double arr[R][C])
{
	return (double)SummArr(arr) / (R * C);
}
double AvgArr(char arr[R][C])
{
	return (double)SummArr(arr) / (R * C);
}

int minValueIn(int arr[C])
{
	int Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value > arr[i]) Value = arr[i];
	}
	return Value;
}
float minValueIn(float arr[C])
{
	float Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value > arr[i]) Value = arr[i];
	}
	return Value;
}
double minValueIn(double arr[C])
{
	double Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value > arr[i]) Value = arr[i];
	}
	return Value;
}
char minValueIn(char arr[C])
{
	char Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value > arr[i]) Value = arr[i];
	}
	return Value;
}
int minValueIn(int arr[R][C])
{
	int Value = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value > arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
float minValueIn(float arr[R][C])
{
	float Value = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value > arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
double minValueIn(double arr[R][C])
{
	double Value = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value > arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
char minValueIn(char arr[R][C])
{
	char Value = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value > arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}

int maxValueIn(int arr[C])
{
	int Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value < arr[i]) Value = arr[i];
	}
	return Value;
}
float maxValueIn(float arr[C])
{
	float Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value < arr[i]) Value = arr[i];
	}
	return Value;
}
double maxValueIn(double arr[C])
{
	double Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value < arr[i]) Value = arr[i];
	}
	return Value;
}
char maxValueIn(char arr[C])
{
	char Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value < arr[i]) Value = arr[i];
	}
	return Value;
}
int maxValueIn(int arr[R][C])
{
	int Value = arr[0][0];
	for (int i = 1; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value < arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
float maxValueIn(float arr[R][C])
{
	float Value = arr[0][0];
	for (int i = 1; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value < arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
double maxValueIn(double arr[R][C])
{
	double Value = arr[0][0];
	for (int i = 1; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value < arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}
char maxValueIn(char arr[R][C])
{
	char Value = arr[0][0];
	for (int i = 1; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value < arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}

void SortingArr(int arr[C], bool Up)
{
	if (Up)
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
}
void SortingArr(float arr[C], bool Up)
{
	if (Up)
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					float bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					float bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
}
void SortingArr(double arr[C], bool Up)
{
	if (Up)
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					double bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					double bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
}
void SortingArr(char arr[C], bool Up)
{
	if (Up)
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					char bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					char bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
}
void SortingArr(int arr[R][C], bool Up)
{
	if (Up)
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] > arr[i][j + 1])
					{
						int bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] > arr[i + 1][0])
					{
						int bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
	else
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] < arr[i][j + 1])
					{
						int bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] < arr[i + 1][0])
					{
						int bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
}
void SortingArr(float arr[R][C], bool Up)
{
	if (Up)
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] > arr[i][j + 1])
					{
						float bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] > arr[i + 1][0])
					{
						float bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
	else
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] < arr[i][j + 1])
					{
						float bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] < arr[i + 1][0])
					{
						float bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
}
void SortingArr(double arr[R][C], bool Up)
{
	if (Up)
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] > arr[i][j + 1])
					{
						double bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] > arr[i + 1][0])
					{
						double bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
	else
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] < arr[i][j + 1])
					{
						double bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] < arr[i + 1][0])
					{
						double bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
}
void SortingArr(char arr[R][C], bool Up)
{
	if (Up)
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] > arr[i][j + 1])
					{
						char bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] > arr[i + 1][0])
					{
						char bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
	else
	{
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					if (j != C - 1 && arr[i][j] < arr[i][j + 1])
					{
						char bufer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = bufer;
					}
					else if (i != R - 1 && arr[i][j] < arr[i + 1][0])
					{
						char bufer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = bufer;
					}
				}
			}
		}
	}
}

void Shift(int arr[C], int size_shift, bool right)
{
	if (right)
	{
		for (int i = 0; i < size_shift; i++)
		{
			int bufer = arr[C - 1];
			for (int j = C - 1; j > 0; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = bufer;
		}
	}
	else
	{
		for (int i = 0; i < size_shift; i++)
		{
			int bufer = arr[0];
			for (int j = 0; j < C - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[C - 1] = bufer;
		}
	}
}
void Shift(float arr[C], int size_shift, bool right)
{
	if (right)
	{
		for (int i = 0; i < size_shift; i++)
		{
			float bufer = arr[C - 1];
			for (int j = C - 1; j > 0; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = bufer;
		}
	}
	else
	{
		for (int i = 0; i < size_shift; i++)
		{
			float bufer = arr[0];
			for (int j = 0; j < C - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[C - 1] = bufer;
		}
	}
}
void Shift(double arr[C], int size_shift, bool right)
{
	if (right)
	{
		for (int i = 0; i < size_shift; i++)
		{
			double bufer = arr[C - 1];
			for (int j = C - 1; j > 0; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = bufer;
		}
	}
	else
	{
		for (int i = 0; i < size_shift; i++)
		{
			double bufer = arr[0];
			for (int j = 0; j < C - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[C - 1] = bufer;
		}
	}
}
void Shift(char arr[C], int size_shift, bool right)
{
	if (right)
	{
		for (int i = 0; i < size_shift; i++)
		{
			char bufer = arr[C - 1];
			for (int j = C - 1; j > 0; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = bufer;
		}
	}
	else
	{
		for (int i = 0; i < size_shift; i++)
		{
			char bufer = arr[0];
			for (int j = 0; j < C - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[C - 1] = bufer;
		}
	}
}
void Shift(int arr[R][C], int size_shift, bool right)
{
	if (right)//Двигаем вправо
	{
		for (int i = 0; i < size_shift; i++)
		{
			int bufer_end_value = arr[R - 1][C - 1];
			int bufer_move_value, bufer_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						bufer_move_value = arr[r][c + 1];
						arr[r][c + 1] = bufer_value;
						bufer_value = bufer_move_value;
					}
					else if (r != R - 1)
					{
						bufer_move_value = arr[r + 1][0];
						arr[r + 1][0] = bufer_value;
						bufer_value = bufer_move_value;
					}
				}
			}
			arr[0][0] = bufer_end_value;
		}
	}
	else //Двигаем влево
	{
		for (int i = 0; i < size_shift; i++)
		{
			int bufer_end_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						arr[r][c] = arr[r][c + 1];
					}
					else if (r != 0)
					{
						arr[r - 1][C - 1] = arr[r][0];
					}
				}
			}
			arr[R - 1][C - 1] = bufer_end_value;
		}
	}
}
void Shift(float arr[R][C], int size_shift, bool right)
{
	if (right)//Двигаем вправо
	{
		for (int i = 0; i < size_shift; i++)
		{
			float bufer_end_value = arr[R - 1][C - 1];
			float bufer_move_value, bufer_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						bufer_move_value = arr[r][c + 1];
						arr[r][c + 1] = bufer_value;
						bufer_value = bufer_move_value;
					}
					else if (r != R - 1)
					{
						bufer_move_value = arr[r + 1][0];
						arr[r + 1][0] = bufer_value;
						bufer_value = bufer_move_value;
					}
				}
			}
			arr[0][0] = bufer_end_value;
		}
	}
	else //Двигаем влево
	{
		for (int i = 0; i < size_shift; i++)
		{
			float bufer_end_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						arr[r][c] = arr[r][c + 1];
					}
					else if (r != 0)
					{
						arr[r - 1][C - 1] = arr[r][0];
					}
				}
			}
			arr[R - 1][C - 1] = bufer_end_value;
		}
	}
}
void Shift(double arr[R][C], int size_shift, bool right)
{
	if (right)//Двигаем вправо
	{
		for (int i = 0; i < size_shift; i++)
		{
			double bufer_end_value = arr[R - 1][C - 1];
			double bufer_move_value, bufer_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						bufer_move_value = arr[r][c + 1];
						arr[r][c + 1] = bufer_value;
						bufer_value = bufer_move_value;
					}
					else if (r != R - 1)
					{
						bufer_move_value = arr[r + 1][0];
						arr[r + 1][0] = bufer_value;
						bufer_value = bufer_move_value;
					}
				}
			}
			arr[0][0] = bufer_end_value;
		}
	}
	else //Двигаем влево
	{
		for (int i = 0; i < size_shift; i++)
		{
			double bufer_end_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						arr[r][c] = arr[r][c + 1];
					}
					else if (r != 0)
					{
						arr[r - 1][C - 1] = arr[r][0];
					}
				}
			}
			arr[R - 1][C - 1] = bufer_end_value;
		}
	}
}
void Shift(char arr[R][C], int size_shift, bool right)
{
	if (right)//Двигаем вправо
	{
		for (int i = 0; i < size_shift; i++)
		{
			char bufer_end_value = arr[R - 1][C - 1];
			char bufer_move_value, bufer_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						bufer_move_value = arr[r][c + 1];
						arr[r][c + 1] = bufer_value;
						bufer_value = bufer_move_value;
					}
					else if (r != R - 1)
					{
						bufer_move_value = arr[r + 1][0];
						arr[r + 1][0] = bufer_value;
						bufer_value = bufer_move_value;
					}
				}
			}
			arr[0][0] = bufer_end_value;
		}
	}
	else //Двигаем влево
	{
		for (int i = 0; i < size_shift; i++)
		{
			char bufer_end_value = arr[0][0];

			for (int r = 0; r < R; r++)
			{
				for (int c = 0; c < C; c++)
				{
					if (c != C - 1)
					{
						arr[r][c] = arr[r][c + 1];
					}
					else if (r != 0)
					{
						arr[r - 1][C - 1] = arr[r][0];
					}
				}
			}
			arr[R - 1][C - 1] = bufer_end_value;
		}
	}
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