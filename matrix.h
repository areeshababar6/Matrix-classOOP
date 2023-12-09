#pragma once
class matrix
{
private:
	int rows;
	int cols;
	int** arr;
public:
	void setRows(int);
	void setCols(int);
	int getRows();
	int getCols();
	void setArray();
	void setIndex(int, int, int);
	int** getArray();
	void Delete();
};

