//Tuile.h

#ifndef TUILE_H
#define TUILE_H


class Tuile{
private:
	int valeur_{0};
	bool aDejaFusionne_{false};

public:
	int valeur() const;
	bool aDejaFusionne() const;
	bool estVide() const;

	void setValeur(int nouvelle_valeur);
	void vider();
	void fusionner();
	void resetFusion();
};



#endif