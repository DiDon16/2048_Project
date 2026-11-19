//Tuile.cpp

#include "Tuile.h"


int Tuile::valeur() const{
	return valeur_;
}

bool Tuile::aDejaFusionne() const{
	return aDejaFusionne_;
}

bool Tuile::estVide() const{
	return valeur_ == 0;
}

void Tuile::setValeur(int nouvelle_valeur){
	if(nouvelle_valeur >= 0)
		valeur_ = nouvelle_valeur;
}

void Tuile::vider(){
	valeur_ = 0;
	aDejaFusionne_ = false;
}

void Tuile::fusionner(){
	valeur_ *= 2;
	aDejaFusionne_ = true;
}

void Tuile::resetFusion(){
	aDejaFusionne_ = false;
}