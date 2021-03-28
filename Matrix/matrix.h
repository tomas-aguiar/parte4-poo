#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>

using namespace std;

class Matrix
{
	private:
		double **m;
		int nRows;
		int nCols;

	public:
		Matrix();
		Matrix(int rows, int cols, const double &value = 0.0);
		Matrix(ifstream &myFile);
		Matrix(const Matrix& that);

		~Matrix();

		void createMatrix(int, int, double);
		void createCopyMatrix(const Matrix&);

		inline int getRows() const { return nRows; };
		inline int getCols() const { return nCols; };
		double get(int row, int col) const;

		void print() const;
		void unit();
		void zeros();
		void ones();
};

#endif
