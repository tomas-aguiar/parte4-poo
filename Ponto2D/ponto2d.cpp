#include "ponto2d.h"

#include <iostream>
#include <cmath>

using namespace std;

unsigned int Ponto2D::id = 0;

Ponto2D::Ponto2D()
{
    myId = ++id;
    x = 0.0;
    y = 0.0;
}

Ponto2D::Ponto2D(double x, double y)
{
    myId = ++id;
    this->x = x;
    this->y = y;
}

Ponto2D::Ponto2D(const Ponto2D &ref)
{
    myId = ++id;
    x = ref.x;
    y = ref.y;
}

void Ponto2D::print()
{
    cout << "x: " << x << ", y: " << y << endl;
}

double Ponto2D::distToOrig()
{
    Ponto2D origin(0.0, 0.0);
    return distTo(origin);
}

double Ponto2D::distTo(Ponto2D point)
{
    return sqrt(pow((x - point.x), 2.0) + pow((y - point.y), 2.0));
}

Ponto2D& Ponto2D::sumOf(Ponto2D ref)
{
    x += ref.x;
    y += ref.y;

    return *this;
}

Ponto2D& Ponto2D::operator=(Ponto2D &ref)
{
    return ref;
}

unsigned int Ponto2D::getId()
{
    return myId;
}
