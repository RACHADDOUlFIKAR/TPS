#include "compte_cour.h"

compte_cour::compte_cour(Client* c, Devise* s, Devise dec)
	: Compte(c, s)
{
	this->decouvert = dec;
}

bool compte_cour::retirerArgent(Devise montant)
{
	if (this->checkSolde(&(this->decouvert), montant))
		return this->Compte::retirerArgent(montant);

	return false;
}