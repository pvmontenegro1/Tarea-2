#include "Cproceso.h"
#include <iostream>
template <typename t>
void Cproceso::Cproceso(t numerador,t denominador){
	this->num=numerador;
	this->den=denominador;
}
template <typename t>
void Cproceso<t>::setNum(t numerador){
	num=numerador;
}
template <typename t>
void Cproceso<t>::setDen(t denominador){
	den=denominador;
}
template <typename t>
int Cproceso<t>::getNum(){
	return num;
}
template <typename t>
int Cproceso<t>::getDen(){
	return den;
}
Cproceso Cproceso::racional(t obj1,t obj2){
	int a,b,c,d;
	a=obj1.getNum();
	b=obj1.getDen();
	c=obj2.getNum();
	d=obj2.getDen();
	this->setNum((a*d)+(b*c));
	this->setDen(b*d);
	return *this;
}
void Cproceso::imprimirObj(t obj){
	cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}






