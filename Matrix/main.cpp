#include <iostream>
#include <fstream>
#include "matrix.h"

using namespace std;

int main(int argc, char **argv)
{

	Matrix Y;
	cout << "Y: ";
	Y.print();

	Matrix X(3,1);
	cout << "X: ";
	X.print();
	X.ones();
	cout << "new X: ";
	X.print();

	Matrix Z(3, 2, 7.0);
	cout << "Z: ";
	Z.print();
	cout << "Z[1][1] = " << Z.get(1, 1) << endl;
	Z.zeros();
	cout << "new Z: ";
	Z.print();

	ifstream in("myMatrix.txt");
	Matrix W(in);
	cout << "W: " << "rows: " << W.getRows() << ", cols: " << W.getCols() << endl;
	W.print();
	W.unit();
	cout << "new W: ";
	W.print();

	return 0;
}
