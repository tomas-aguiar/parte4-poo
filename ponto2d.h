#ifndef _PONTO2D_H_
#define _PONTO2D_H_

class Ponto2D
{
    private:
        double x;
        double y;
	unsigned int myId;
	static unsigned int id;

    public:
        Ponto2D();
        Ponto2D(double, double);

        void print();
        double distToOrig();
        double distTo(Ponto2D);
        Ponto2D& sumOf(Ponto2D);
        Ponto2D& operator=(Ponto2D);

	unsigned int getId();
};

#endif
