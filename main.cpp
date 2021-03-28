#include <iostream>
#include "ponto2d.h"

using namespace std;

int main(int argc, char **argv)
{
    // First point
    Ponto2D p1;
    cout << "Id: " << p1.getId() << endl;

    // Second point
    Ponto2D p2(3.0, 4.0);
    cout << "Id: " << p2.getId() << endl;
    p2.print();
    cout << "DistToOrigin: " << p2.distToOrig() << endl;


    // Third point
    Ponto2D p3(2.0, 5.0);
    cout << "Id: " << p3.getId() << endl;
    p3.print();
    cout << "DistToSecondPoint: " << p3.distTo(p2) << endl;
    p3.sumOf(p2);
    p3.print();

    // Fourth point
    Ponto2D p4 = p2.sumOf(p3);
    cout << "Id: " << p4.getId() << endl;
    p4.print();

    return 0;
}
