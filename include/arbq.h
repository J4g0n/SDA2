/**
 * \file       arbq.h
 * \author     Andreux Simon
 * \version    1.0
 * \date       30 nov 2012
 * \brief      include de arbq.c 
 *
 * \details    Contient les prototypes des fonctions relatives aux arbre quaternaires
 *
 */
#ifndef __arbq_h_
#define __arbq_h_

#include "couleur.h"

/**
 * \enum type enum
 * \brief permet de déterminer si un noeud d'un arbre quaternaire est une feuille ou pas
 */
enum type 
{
COULEUR, /** !<COULEUR */
NOEUD /** !<NOEUD */
};

/**
 * \struct type Arbq qui couleur qui contient des pointeurs vers les
 * sous-arbres et un pointeur vers une couleur ainsi qu'un type enum
 * permettant de sélectionner l'un ou l'autre
 */
typedef struct arbq
{
	enum type t; /** !<type déterminant si l'arbre est un noeud ou une feuille */
	Couleur c; /** !<couleur */
	struct arbq *no; /** !<sous-arbre nord-ouest */
	struct arbq *ne; /** !<sous-arbre nord-est */
	struct arbq *so; /** !<sous-arbre sud-ouest */
	struct arbq *se; /** !<sous-arbre sud-est */
} *Arbq, strArbq; /** !<structure arbre quaternaire */

/**
 * \brief renvoie la taille du côté de l'image
 * \param a Arbq
 * \return Nat taille
 * \pre rien
 */
Nat tc(Arbq a);

/**
 * \brief crée une feuille à partir d'une couleur
 * \param c Couleur
 * \return Arbq a
 * \pre c≠NULL
 */
Arbq f(Couleur c);

/**
 * \brief crée un arbre en enracinant quatre sous-arbres
 * \param no Arbq 
 * \param ne Arbq 
 * \param so Arbq 
 * \param se Arbq 
 * \return Arbq a
 * \pre rien
 */
Arbq e(Arbq no,Arbq ne,Arbq so,Arbq se);

/**
 * \brief renvoie le sous-arbre nord-ouest
 * \param a Arbq
 * \return Arbq nord-ouest
 * \pre ¬estf(a)
 */
Arbq no(Arbq a);

/**
 * \brief renvoie le sous-arbre nord-est
 * \param a Arbq
 * \return Arbq nord-est
 * \pre ¬estf(a)
 */
Arbq ne(Arbq a);

/**
 * \brief renvoie le sous-arbre sud-ouest
 * \param a Arbq
 * \return Arbq sud-ouest
 * \pre ¬estf(a)
 */
Arbq so(Arbq a);

/**
 * \brief renvoie le sous-arbre sud-est
 * \param a Arbq
 * \return Arbq sud-est
 * \pre ¬estf(a)
 */
Arbq se(Arbq a);

/**
 * \brief renvoie la hauteur de l'arbre passé en entrée
 * \param a Arbq
 * \return Nat ht
 * \pre rien
 */
Nat h(Arbq a);

/**
 * \brief renvoie une copie passée de la couleur contenue dans la feuille
 * en entrée
 * \param a Arbq 
 * \return Couleur c
 * \pre estf(a)
 */
Couleur c(Arbq a);

/**
 * \brief renvoie 1 si l'entrée est une feuille, 0 sinon
 * \param a Arbq
 * \return Couleur c
 * \pre rien
 */
Bool estf(Arbq a);

/**
 * \brief renvoie le nombre de feuille de l'arbre
 * \param a Arbq
 * \return Nat nb_feuille
 * \pre rien
 */
Nat nf(Arbq a);

/**
 * \brief renvoie le pixel aux coordonnées x, y passés en entrée
 * \param a Arbq
 * \param i Nat
 * \param j Nat
 * \return Couleur c
 * \pre x<2^(h(a)) et y<2^(h(a)) 
 */
Couleur p(Arbq a,Nat i,Nat j);

#endif
