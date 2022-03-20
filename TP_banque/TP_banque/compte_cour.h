#pragma once
#include "compte.h"
#include "devise.h"
class compte_cour :
	public Compte
{
	compte_cour(Client* c, Devise* s, Devise dec);

	bool retirerArgent(Devise montant)override;

private:
	Devise decouvert;

};