//Grille.cpp

#include "Grille.h"
#include<vector>
#include<random>
#include<iostream>
#include<utility>
#include<string>

Grille::Grille() : tuiles_(taille_, std::vector<Tuile>(taille_)) {
	ajouterTuileAleatoire();
	ajouterTuileAleatoire();
}

void Grille::ajouterTuileAleatoire(){
	//Trouve une tuile ale parmi les tuiles vides
	//Trouver les tuiles vides
	std::vector<std::pair<int, int>> casesVides;

	for(int i(0); i < taille_; i++){
		for(int j(0); j < taille_; j++){
			if(tuiles_[i][j].estVide()){
				casesVides.push_back({i, j});
			}
		}
	}

	if(casesVides.empty()){
		return;
	}

	//On un tab des des cases vides
	//On choisi un index au hasard
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<> distIndex(0, casesVides.size() - 1);
	std::uniform_int_distribution<> distProb(1, 10);

	int indexChoisi = distIndex(gen);
	int valeur = (distProb(gen) == 1) ? 4 : 2; // 1 chance sur 10 d'avoir 4

	int x = casesVides[indexChoisi].first;
	int y = casesVides[indexChoisi].second;

	tuiles_[x][y].setValeur(valeur);

}


void Grille::afficher() const {
    const int largeurCase = 5; // Espace total à l'intérieur des crochets [      ]

    for (int i = 0; i < taille_; i++) {
        for (int j = 0; j < taille_; j++) {
            std::string texte = std::to_string(tuiles_[i][j].valeur());
            
            // Calcul des espaces nécessaires à gauche et à droite
            int espacesTotaux = largeurCase - texte.length();
            int espacesGauche = espacesTotaux / 2;
            int espacesDroite = espacesTotaux - espacesGauche;

            std::cout << "[" 
                      << std::string(espacesGauche, ' ') 
                      << texte 
                      << std::string(espacesDroite, ' ') 
                      << "] ";
        }
        std::cout << std::endl;
    }
}