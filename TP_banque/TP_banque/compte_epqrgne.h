#pragma once
#include "compte.h"
class compte_epqrgne : public Compte
{

public:
	compte_epqrgne();
	compte_epqrgne(Client*, Devise*, double taux);
	void Calcul_TauxInteret();
private:

	double TauxInteret;



};