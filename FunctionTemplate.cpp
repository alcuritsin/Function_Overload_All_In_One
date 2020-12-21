#include "Function.h"

template<typename T>
void Print(T arr[C])
{
	for (int i = 0; i < C; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[R][C])
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

template<typename T>
T minValueIn(T arr[C])
{
	T Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value > arr[i]) Value = arr[i];
	}
	return Value;
}
template<typename T>
T minValueIn(T arr[R][C])
{
	T Value = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value > arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}

template<typename T>
T maxValueIn(T arr[C])
{
	T Value = arr[0];
	for (int i = 1; i < C; i++)
	{
		if (Value < arr[i]) Value = arr[i];
	}
	return Value;
}
template<typename T>
T maxValueIn(T arr[R][C])
{
	T Value = arr[0][0];
	for (int i = 1; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (Value < arr[i][j]) Value = arr[i][j];
		}
	}
	return Value;
}

template<typename T>
T SummArr(T arr[C])
{
	T Summ = 0;
	for (int i = 0; i < C; i++)
	{
		Summ += arr[i];
	}
	return Summ;
}
template<typename T>
T SummArr(T arr[R][C])
{
	T Summ = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Summ += arr[i][j];
		}
	}
	return Summ;
}

template<typename T>
double AvgArr(T arr[C])
{
	return (double)SummArr(arr) / C;
}
template<typename T>
double AvgArr(T arr[R][C])
{
	return (double)SummArr(arr) / (R * C);
}

template<typename T>
void SortingArr(T arr[C], bool Up)
{
	if (Up)
	{
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < C - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					T bufer = arr[j];
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
					T bufer = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = bufer;
				}
			}
		}
	}
}
template<typename T>
void SortingArr(T arr[R][C], bool Up)
{
	/*
	if (Up)
	{
		int iteration = 1;
		for (int n = 0; n < R * C; n++)
		{
			for (int i = 0; i < R; i++)
			{
				for (int j = 0; j < C; j++)
				{
					iteration++;
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
		std::cout << "Количество итераций: " << iteration << std::endl;
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
	*/
	if (Up)
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				for (int k = i; k < R; k++)
				{
					for (int l = k == i ? j + 1 : 0; l < C; l++) // интересное
					{
						if (arr[i][j] > arr[k][l])
						{
							T  bufer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = bufer;
						}
					}
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				for (int k = i; k < R; k++)
				{
					for (int l = k == i ? j + 1 : 0; l < C; l++) // интересное
					{
						if (arr[i][j] < arr[k][l])
						{
							T  bufer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = bufer;
						}
					}
				}
			}
		}
	}

}

template<typename T>
void Shift(T arr[C], int size_shift, bool right)
{
	if (right)
	{
		for (int i = 0; i < size_shift; i++)
		{
			T bufer = arr[C - 1];
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
			T bufer = arr[0];
			for (int j = 0; j < C - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[C - 1] = bufer;
		}
	}
}
template<typename T>
void Shift(T arr[R][C], int size_shift, bool right)
{
	if (right)//Двигаем вправо
	{
		for (int i = 0; i < size_shift; i++)
		{
			T bufer_end_value = arr[R - 1][C - 1];
			T bufer_move_value, bufer_value = arr[0][0];

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
			T bufer_end_value = arr[0][0];

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
