#pragma once
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::count;

//ЅЋќ  ”ѕ–ј¬Ћ≈Ќ»я
const int R = 5; // оличество строчек
const int C = 8; // оличество колонок
const int round_size = 3; // оличество знаков после зап€той дл€ массивов float и double

//ѕрототипы функций
void FillRand(int arr[C], int minRand = 0, int maxRand = 100); //нижн€€ и верхн€€ граница чисел
void FillRand(float arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRand(double arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRand(char arr[C], int minRand = 33, int maxRand = 254); //ќт A до Z
void FillRand(int arr[R][C], int minRand = 0, int maxRand = 100); //нижн€€ и верхн€€ граница чисел
void FillRand(float arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRand(double arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRand(char arr[R][C], int minRand = 33, int maxRand = 254); //ќт A до Z

void FillRandUniq(int arr[R][C], int minRand = 0, int maxRand = 100); //нижн€€ и верхн€€ граница чисел
void FillRandUniq(float arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRandUniq(double arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после зап€той
void FillRandUniq(char arr[R][C], int minRand = 33, int maxRand = 254); //нижн€€ и верхн€€ граница символов

void Print(int arr[C]);
void Print(float arr[C]);
void Print(double arr[C]);
void Print(char arr[C]);
void Print(int arr[R][C]);
void Print(float arr[R][C]);
void Print(double arr[R][C]);
void Print(char arr[R][C]);

void FindTwins(int arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретитьс€ значение в массиве
void FindTwins(float arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретитьс€ значение в массиве
void FindTwins(double arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретитьс€ значение в массиве
void FindTwins(char arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретитьс€ значение в массиве

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