#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
template <typename t>


class Cproceso{
	private:
		t num;
		t den;
	public:
		void setNum(t);
		void setDen(t);
		int getNum();
		int getDen();
		Cproceso(int, int);
		Cproceso racional(t, Cproceso);
		void imprimirObj(Cproceso);
};
