#include "matrix.h"
#include <iostream>

using namespace std;
int main()
{
	matrix m;
	int r, c;
	cout << " Enter rows, columns: ";
	cin >> r >> c;

	m.setRows(r);
	m.setCols(c);
	m.setArray();

	int n;

	for (int i = 0; i < m.getRows(); i++)
	{
		cout << " Enter values for row " << i + 1 << ": ";
		for (int j = 0; j < m.getCols(); j++)
		{
			cin >> n;
			m.setIndex(i, j, n);
		}
	}
	int** a = m.getArray();

	for (int i = 0; i < m.getRows(); i++)
	{
		cout << " Values for row " << i + 1 << ": ";
		for (int j = 0; j < m.getCols(); j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	m.Delete();

	return 0;
}