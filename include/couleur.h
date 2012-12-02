/**
 * \file       couleur.h
 * \author     Andreux Simon
 * \version    1.0
 * \date       30 nov 2012
 * \brief      include de couleur.c 
 *
 * \details    Contient les prototypes des fonctions relatives au traitement des couleurs
 *
 */
#ifndef __couleur_h_
#define __couleur_h_

#include "base.h"

/**
 * \typedef type couleur qui contient trois champs rouge, vert et bleu
 */
typedef struct 
{
	Nat r; /** !<composante rouge */
	Nat v; /** !<composante verte */
	Nat b; /** !<composante bleu */
}	*Couleur,strCouleur; /** !<type couleur */

/**
 * \brief renvoie la couleur obtenue à partir des trois composantes
 * rouge, vert, et bleu
 * \param r Nat rouge
 * \param v Nat vert
 * \param b Nat bleu
 * \return Couleur
 * \pre r≤MaxCouleur et v≤MaxCouleur et b≤MaxCouleur
 */
Couleur ic(Nat r,Nat v,Nat b);

/**
 * \brief renvoie la couleur rouge
 * \param c Couleur
 * \return Nat rouge
 * \pre c≠NULL
 */
Nat r(Couleur c);

/**
 * \brief renvoie la couleur verte
 * \param Couleur c
 * \return Nat vert
 * \pre c≠NULL
 */
Nat v(Couleur c);

/**
 * \brief renvoie la couleur bleu
 * \param c Couleur
 * \return Nat bleu 
 * \pre c≠NULL
 */
Nat b(Couleur c);

/**
 * \brief renvoie la couleur blanche
 * \param rien
 * \return Couleur blanche 
 * \pre rien
 */
Couleur blanc();

/**
 * \brief renvoie la couleur noire
 * \param rien 
 * \return Couleur noire
 * \pre rien
 */
Couleur noir();

#endif
