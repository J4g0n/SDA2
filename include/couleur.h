#ifndef __couleur_h_
#define __couleur_h_

#include "base.h"

/**
 * \typedef type couleur qui contient trois champs rouge, vert et bleu
 */
typedef struct 
{
	Nat r;
	Nat v;
	Nat b;
}	*Couleur,strCouleur;

/**
 * \fn ic
 * \brief renvoie la couleur obtenue à partir des trois composantes
 * rouge, vert, et bleu
 * \param Nat rouge
 * \param Nat vert
 * \param Nat bleu
 * \return Couleur
 * \pre r≤MaxCouleur et v≤MaxCouleur et b≤MaxCouleur
 */
Couleur ic(Nat,Nat,Nat);

/**
 * \fn r
 * \brief renvoie la couleur rouge
 * \param Couleur c
 * \return Nat rouge
 * \pre c≠NULL
 */
Nat r(Couleur);

/**
 * \fn v
 * \brief renvoie la couleur verte
 * \param Couleur c
 * \return Nat vert
 * \pre c≠NULL
 */
Nat v(Couleur);

/**
 * \fn b
 * \brief renvoie la couleur bleu
 * \param Couleur c
 * \return Nat bleu 
 * \pre c≠NULL
 */
Nat b(Couleur);

/**
 * \fn blanc
 * \brief renvoie la couleur blanche
 * \param rien
 * \return Couleur blanche 
 * \pre rien
 */
Couleur blanc();

/**
 * \fn noir
 * \brief renvoie la couleur noire
 * \param rien 
 * \return Couleur noire
 * \pre rien
 */
Couleur noir();

#endif
