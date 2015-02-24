#ifndef NOTAIRE_H
#define NOTAIRE_H

#include "position.h"
#include "Exception/notaireexceptionaucunedecision.h"

class Notaire
{
private:
    Position* fuyardDecision;   //contient la décision du fuyard pour le tour courant
    Position* poursuivantDecision;   //contient la décision du poursuivant pour le tour courant
public:
    Notaire();
    Notaire(const Notaire& notaire);
    virtual ~Notaire();
    Position getFuyardDecision()const;
    Position getPoursuivantDecision()const;
    void setFuyardDecision(const Position& p);
    void setPoursuivantDecision(const Position& p);
    bool tourValide()const;     //retourne vrai si on a les 2 décisions, faux sinon
    void raz();     //efface les décisions enregistrées

    Notaire& operator=(const Notaire& notaire);
};

#endif // NOTAIRE_H
