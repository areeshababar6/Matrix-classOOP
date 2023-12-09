#include "matrix.h"
#include <iostream>

using namespace std;


void matrix::setRows(int r)
{
	rows = r;
}
void matrix::setCols(int c)
{
	cols = c;
}
void matrix::setArray()
{
	arr = new int* [rows];

	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = 0;
}
int matrix::getRows()
{
	return rows;
}
int matrix::getCols()
{
	return cols;
}
int** matrix::getArray()
{
	return arr;
}
void matrix::setIndex(int r, int c, int n)
{
	arr[r][c] = n;
}
void matrix::Delete()
{
	for (int i = 0; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}