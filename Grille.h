//Grille.h

#ifndef GRILLE_H
#define GRILLE_H

#include<vector>
#include "Tuile.h"


class Grille{
private:
	int taille_{4};
	std::vector<std::vector<Tuile>> tuiles_;

public:
	Grille();
	void ajouterTuileAleatoire();
	void afficher() const;
};











#endif