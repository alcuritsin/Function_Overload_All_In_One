#include "Function.h"

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
		do
		{
			arr[i] = char(rand() % (maxRand - minRand) + minRand); //Почему-то может генерировать отрицательные значения...
		} while ((int)arr[i] < 33);
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
			do
			{
				arr[i][j] = char(rand() % (maxRand - minRand) + minRand); //Почему-то может генерировать отрицательные значения...
			} while ((int)arr[i][j] < 33);
		}
	}
}

//FillRandUniq --add
void FillRandUniq(int arr[R][C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	if (maxRand - minRand < R * C) //Чтобы хватило чисел для генерации
	{
		maxRand = minRand + (R * C);
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool uniqRand = true;
			do
			{
				arr[i][j] = rand() % (maxRand - minRand) + minRand;
				uniqRand = true;
				for (int r = 0; r <= i; r++)
				{
					if (r == i) //Строка проверки совпадает со строкой источником
					{
						for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
					else
					{
						for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
				}
			} while (!uniqRand);
		}
	}
}
void FillRandUniq(float arr[R][C], int round, int minRand, int maxRand)
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
			bool uniqRand = true;
			do
			{
				arr[i][j] = (float)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
				uniqRand = true;
				for (int r = 0; r <= i; r++)
				{
					if (r == i) //Строка проверки совпадает со строкой источником
					{
						for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
					else
					{
						for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
				}
			} while (!uniqRand);
		}
	}
}
void FillRandUniq(double arr[R][C], int round, int minRand, int maxRand)
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
			bool uniqRand = true;
			do
			{
				arr[i][j] = (double)(rand() % (maxRand * rounding - minRand * rounding) + minRand * rounding) / rounding;
				uniqRand = true;
				for (int r = 0; r <= i; r++)
				{
					if (r == i) //Строка проверки совпадает со строкой источником
					{
						for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
					else
					{
						for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
				}
			} while (!uniqRand);
		}
	}
}
void FillRandUniq(char arr[R][C], int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int bufer = maxRand;
		maxRand = minRand;
		minRand = bufer;
	}
	if (minRand < 33)
	{//Минимальное значение массива не может быть меньше 33. Там находятся служебные символы.
		minRand = 33;
	}
	if (maxRand - minRand < R * C) //Чтобы хватило чисел для генерации
	{
		maxRand = minRand + (R * C); //Увеличим количество значений.
		if (maxRand > 254)
		{
			std::cout << "Error: FillRandUniq\n";
			std::cout << "Размер массива превышает количество доступных символов.\n";
			return;
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool uniqRand = true;
			do
			{
				do
				{
					arr[i][j] = char(rand() % (maxRand - minRand) + minRand); //Почему-то может генерировать отрицательные значения...
				} while ((int)arr[i][j] < 33); 
				uniqRand = true;
				for (int r = 0; r <= i; r++)
				{
					if (r == i) //Строка проверки совпадает со строкой источником
					{
						for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
					else
					{
						for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
						{
							if (arr[r][c] == arr[i][j])
							{
								uniqRand = false;
							}
						}
					}
				}
			} while (!uniqRand);
		}
	}
}

//FindTwins --add
void FindTwins(int arr[R][C], int counter_show)
{
	//Поиск повторений
	bool uniq_array = true; //Вдруг уникальный

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool met_before = false; //Этот элемент встречался раньше? Допускаем что значение раньше не встречалось, но это нужно проверить.

			for (int r = 0; r <= i; r++)
			{
				if (r == i) //Строка проверки совпадает со строкой источником
				{
					for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
				else
				{
					for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
			}

			if (!met_before)
			{
				int counter = 1;
				for (int r = 0; r < R; r++)
				{
					for (int c = 0; c < C; c++)
					{
						if (r == i && c == j)
						{
							continue;
						}
						if (arr[r][c] == arr[i][j])
						{
							counter++;
						}
					}
				}

				if (counter > counter_show)
				{
					cout << arr[i][j] << " встречается " << counter << " раз(-а) \n";
					uniq_array = false;
				}
			}
		}
	}
	if (uniq_array) std::cout << "Масив заполнен уникальными значениями.\n";
}
void FindTwins(float arr[R][C], int counter_show)
{
	//Поиск повторений
	bool uniq_array = true; //Вдруг уникальный

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool met_before = false; //Этот элемент встречался раньше? Допускаем что значение раньше не встречалось, но это нужно проверить.

			for (int r = 0; r <= i; r++)
			{
				if (r == i) //Строка проверки совпадает со строкой источником
				{
					for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
				else
				{
					for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
			}

			if (!met_before)
			{
				int counter = 1;
				for (int r = 0; r < R; r++)
				{
					for (int c = 0; c < C; c++)
					{
						if (r == i && c == j)
						{
							continue;
						}
						if (arr[r][c] == arr[i][j])
						{
							counter++;
						}
					}
				}

				if (counter > counter_show)
				{
					cout << arr[i][j] << " встречается " << counter << " раз(-а) \n";
					uniq_array = false;
				}
			}
		}
	}
	if (uniq_array) std::cout << "Масив заполнен уникальными значениями.\n";
}
void FindTwins(double arr[R][C], int counter_show)
{
	//Поиск повторений
	bool uniq_array = true; //Вдруг уникальный

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool met_before = false; //Этот элемент встречался раньше? Допускаем что значение раньше не встречалось, но это нужно проверить.

			for (int r = 0; r <= i; r++)
			{
				if (r == i) //Строка проверки совпадает со строкой источником
				{
					for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
				else
				{
					for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
			}

			if (!met_before)
			{
				int counter = 1;
				for (int r = 0; r < R; r++)
				{
					for (int c = 0; c < C; c++)
					{
						if (r == i && c == j)
						{
							continue;
						}
						if (arr[r][c] == arr[i][j])
						{
							counter++;
						}
					}
				}

				if (counter > counter_show)
				{
					cout << arr[i][j] << " встречается " << counter << " раз(-а) \n";
					uniq_array = false;
				}
			}
		}
	}
	if (uniq_array) std::cout << "Масив заполнен уникальными значениями.\n";
}
void FindTwins(char arr[R][C], int counter_show)
{
	//Поиск повторений
	bool uniq_array = true; //Вдруг уникальный

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			bool met_before = false; //Этот элемент встречался раньше? Допускаем что значение раньше не встречалось, но это нужно проверить.

			for (int r = 0; r <= i; r++)
			{
				if (r == i) //Строка проверки совпадает со строкой источником
				{
					for (int c = 0; c < j; c++) //Количество сгенерированных значений упирается в j
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
				else
				{
					for (int c = 0; c < C; c++) //Количество сгенерированных значений упирается в С
					{
						if (arr[r][c] == arr[i][j])
						{
							met_before = true;
							break;
						}
					}
				}
			}

			if (!met_before)
			{
				int counter = 1;
				for (int r = 0; r < R; r++)
				{
					for (int c = 0; c < C; c++)
					{
						if (r == i && c == j)
						{
							continue;
						}
						if (arr[r][c] == arr[i][j])
						{
							counter++;
						}
					}
				}

				if (counter > counter_show)
				{
					cout << arr[i][j] << " встречается " << counter << " раз(-а) \n";
					uniq_array = false;
				}
			}
		}
	}
	if (uniq_array) std::cout << "Масив заполнен уникальными значениями.\n";
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