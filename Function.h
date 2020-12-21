#pragma once
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::count;

//БЛОК УПРАВЛЕНИЯ
const int R = 5; //Количество строчек
const int C = 8; //Количество колонок
const int round_size = 3; //Количество знаков после запятой для массивов float и double

//Прототипы функций
void FillRand(int arr[C], int minRand = 0, int maxRand = 100); //нижняя и верхняя граница чисел
void FillRand(float arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(double arr[C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(char arr[C], int minRand = 33, int maxRand = 254); //От A до Z
void FillRand(int arr[R][C], int minRand = 0, int maxRand = 100); //нижняя и верхняя граница чисел
void FillRand(float arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(double arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRand(char arr[R][C], int minRand = 33, int maxRand = 254); //От A до Z

void FillRandUniq(int arr[R][C], int minRand = 0, int maxRand = 100); //нижняя и верхняя граница чисел
void FillRandUniq(float arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRandUniq(double arr[R][C], int round = round_size, int minRand = 0, int maxRand = 100); //round - количество знаков после запятой
void FillRandUniq(char arr[R][C], int minRand = 33, int maxRand = 254); //нижняя и верхняя граница символов

template<typename T>
void Print(T arr[C]);
template<typename T>
void Print(T arr[R][C]);

void FindTwins(int arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретиться значение в массиве
void FindTwins(float arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретиться значение в массиве
void FindTwins(double arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретиться значение в массиве
void FindTwins(char arr[R][C], int counter_show = 1); //counter_show - какое количество раз должно встретиться значение в массиве

template<typename T>
T SummArr(T arr[C]);
int SummArr(char arr[C]);
template<typename T>
T SummArr(T arr[R][C]);
int SummArr(char arr[R][C]);

template<typename T>
double AvgArr(T arr[C]);
template<typename T>
double AvgArr(T arr[R][C]);

template<typename T>
T minValueIn(T arr[C]);
template<typename T>
T minValueIn(T arr[R][C]);

template<typename T>
T maxValueIn(T arr[C]);
template<typename T>
T maxValueIn(T arr[R][C]);

template<typename T>
void SortingArr(T arr[C], bool Up = true);
template<typename T>
void SortingArr(T arr[R][C], bool Up = true);

template<typename T>
void Shift(T arr[C], int size_shift, bool right = true);
template<typename T>
void Shift(T arr[R][C], int size_shift, bool right = true);