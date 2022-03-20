#include "compte_epqrgne.h"
#include <assert.h>
#include "Devise.h"
compte_epqrgne::compte_epqrgne()
	: Compte()
{

}

compte_epqrgne::compte_epqrgne(Client* c, Devise* s, double taux)
	: Compte(c, s)
{
	assert(taux >= 0 && taux <= 100);
	this->TauxInteret = taux;

}
void compte_epqrgne::Calcul_TauxInteret()
{
	Devise res = this->CalculIteret(this->TauxInteret);
	this->deposerArgent(res);
}