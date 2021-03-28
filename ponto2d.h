#ifndef _PONTO2D_H_
#define _PONTO2D_H_

class Ponto2DId
{
    private:
        int id;

    public:
        int getId();
};

class Ponto2D: Ponto2DId
{
    private:
        double x;
        double y;

    public:
        Ponto2D();
        Ponto2D(double, double);

        void print();
        double distToOrig();
        double distTo(Ponto2D);
        Ponto2D sumOf(Ponto2D);
        Ponto2D operator=(Ponto2D);
};

#endif