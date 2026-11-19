#include<iostream>
#include "Tuile.h"


int main(int argc, char const *argv[])
{
	Tuile t1, t2;

	t1.setValeur(4);
	t2.setValeur(4);

	std::cout << "Avant fusion" << std::endl;

	std::cout << "t1 : " << t1.valeur() << std::endl;
	std::cout << "t1 : " << t1.aDejaFusionne() << std::endl;

	std::cout << "t2 : " << t1.valeur() << std::endl;
	std::cout << "t2 : " << t1.aDejaFusionne() << std::endl;

	t1.fusionner();
	t2.vider();
	t1.resetFusion();

	std::cout << "Après fusion" << std::endl;
	
	std::cout << "t1 : " << t1.valeur() << std::endl;
	std::cout << "t1 : " << t1.aDejaFusionne() << std::endl;

	std::cout << "t2 : " << t1.valeur() << std::endl;
	std::cout << "t2 : " << t1.aDejaFusionne() << std::endl;
	
	return 0;
}