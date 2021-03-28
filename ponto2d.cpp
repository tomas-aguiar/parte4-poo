#include "ponto2d.h"

#include <iostream>
#include <cmath>

using std namespace;

Ponto2D::Ponto2D()
{
    x = 0.0;
    y = 0.0;
}

Ponto2D::Ponto2D(double x, double y)
{
    this.x = x;
    this.y = y;
}

void Ponto2D::print()
{
    cout << "x: " << x << ", y: " << y << endl;
}

double Ponto2D::distToOrig()
{
    return distTo(origin(0, 0));
}

double Ponto2D::distTo(Ponto2D point)
{
    return sqrt(pow((x - point.x), 2.0) + pow((y - point.y), 2.0));
}

Ponto2D Ponto2D::sumOf(Ponto2D ref)
{
    x += ref.x;
    y += ref.y;

    return this;
}

Ponto2D Ponto2D::operator=(Ponto2D ref)
{
    Ponto2D newPoint(x, y);
    return newPoint(ref);
}
