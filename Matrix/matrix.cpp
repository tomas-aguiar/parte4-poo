#include <string>
#include <fstream>
#include "matrix.h"

using namespace std;

Matrix::Matrix()
{
	nRows = 0;
	nCols = 0;
	createMatrix(nRows, nCols, 0.0);
}

Matrix::Matrix(int rows, int cols, const double &value)
{
	nRows = rows;
	nCols = cols;
	createMatrix(nRows, nCols, value);
}

Matrix::Matrix(ifstream &myFile)
{
	if (myFile.is_open())
	{
		string line;
		getline(myFile, line);
		nRows = stoi(line);
		getline(myFile, line);
		nCols = stoi(line);
		createMatrix(nRows, nCols, 0.0);

		int rowCounter = 0;
		int colCounter = 0;
		while (rowCounter < nCols)
		{
			string numbers;
			getline(myFile, numbers);
			if (numbers.length() < 1) break;
			if (colCounter >= nCols)
			{
				rowCounter++;
				colCounter = 0;
			}
			m[rowCounter][colCounter++] = stod(numbers);
		}
	}
}

Matrix::Matrix(const Matrix& that)
{
	nRows = that.nRows;
	nCols = that.nCols;
	createCopyMatrix(that);
}

void Matrix::createMatrix(int rows, int cols, double value)
{
	m = new double*[rows];
	for (int i = 0; i < rows; i++)
	{
		m[i] = new double[cols];
		for (int j = 0; j < cols; j++)
			m[i][j] = value;
	}
}

void Matrix::createCopyMatrix(const Matrix& that)
{
	createMatrix(that.nRows, that.nCols, 0.0);
	for (int i = 0; i < that.nRows; i++)
		for (int j = 0; j < that.nCols; j++)
			m[i][j] = that.m[i][j];
}

Matrix::~Matrix()
{
	if (nRows > 0)
	{
		for (int i = 0; i < nRows; i++)
			delete [] m[i];
		delete [] m;
	}
}

double Matrix::get(int row, int col) const
{
	return ((nRows > row) && (nCols > col)) ? m[row - 1][col - 1] : 0.0;
}

void Matrix::print() const
{
	for (int i = 0; i < nRows; i++)
		for (int j = 0; j < nCols; j++)
			cout << m[i][j] << " ";
	cout << endl;
}

void Matrix::unit()
{
	if (nRows == nCols)
	{
		for (int i = 0; i < nRows; i++)
		{
			for (int j = 0; j < nCols; j++)
			{
				if (i == j)
					m[i][j] = 1.0;
				else
					m[i][j] = 0.0;
			}
		}
	}
}

void Matrix::zeros()
{
	for (int i = 0; i < nRows; i++)
		for (int j = 0; j < nCols; j++)
			m[i][j] = 0.0;
}

void Matrix::ones()
{
	for (int i = 0; i < nRows; i++)
		for (int j = 0; j < nCols; j++)
			m[i][j] = 1.0;
}
