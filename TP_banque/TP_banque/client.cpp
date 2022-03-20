#include "Client.h"
int Client::cpt = 0;
Client::Client() :matricule(++Client::cpt)
{

}

Client::Client(string nom, string prenom) : matricule(++Client::cpt)
{
	this->nom = nom;
	this->prenom = prenom;

}

void Client::afficher() const
{
	std::cout << " matricule: " << this->matricule << endl;
	
}

Client::~Client()
{
}