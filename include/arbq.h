#ifndef __arbq_h_
#define __arbq_h_

#include "couleur.h"


enum type {COULEUR,NOEUD};

/**
 * \typedef type Arbq qui couleur qui contient des pointeurs vers les
 * sous-arbres et un pointeur vers une couleur ainsi qu'un type enum
 * permettant de sélectionner l'un ou l'autre
 */
typedef struct arbq
{
	enum type t;
	Couleur c;
	struct arbq *no;
	struct arbq *ne;
	struct arbq *so;
	struct arbq *se;
} *Arbq, strArbq;

/**
 * \fn
 * \brief renvoie la taille du côté de l'image
 * \param Arbq a
 * \return Nat taille
 * \pre rien
 */
Nat tc(Arbq);

/**
 * \fn
 * \brief crée une feuille à partir d'une couleur
 * \param Couleur c
 * \return Arbq a
 * \pre c≠NULL
 */
Arbq f(Couleur);

/**
 * \fn
 * \brief crée un arbre en enracinant quatre sous-arbres
 * \param Arbq a0
 * \param Arbq a1
 * \param Arbq a2
 * \param Arbq a3
 * \return Arbq a
 * \pre rien
 */
Arbq e(Arbq,Arbq,Arbq,Arbq);

/**
 * \fn
 * \brief renvoie le sous-arbre nord-ouest
 * \param Arbq a
 * \return Arbq nord-ouest
 * \pre ¬estf(a)
 */
Arbq no(Arbq);

/**
 * \brief renvoie le sous-arbre nord-est
 * \param Arbq a
 * \return Arbq nord-est
 * \pre ¬estf(a)
 */
Arbq ne(Arbq);

/**
 * \fn
 * \brief renvoie le sous-arbre sud-ouest
 * \param Arbq a
 * \return Arbq sud-ouest
 * \pre ¬estf(a)
 */
Arbq so(Arbq);

/**
 * \fn
 * \brief renvoie le sous-arbre sud-est
 * \param Arbq a
 * \return Arbq sud-est
 * \pre ¬estf(a)
 */
Arbq se(Arbq);

/**
 * \fn
 * \brief renvoie la hauteur de l'arbre passé en entrée
 * \param Arbq a
 * \return Nat ht
 * \pre rien
 */
Nat h(Arbq);

/**
 * \fn
 * \brief renvoie une copie passée de la couleur contenue dans la feuille
 * en entrée
 * \param Arbq a
 * \return Couleur c
 * \pre estf(a)
 */
Couleur c(Arbq);

/**
 * \fn
 * \brief renvoie 1 si l'entrée est une feuille, 0 sinon
 * \param Arbq a
 * \return Couleur c
 * \pre rien
 */
Bool estf(Arbq);

/**
 * \fn
 * \brief renvoie le nombre de feuille de l'arbre
 * \param Arbq a
 * \return Nat nb_feuille
 * \pre rien
 */
Nat nf(Arbq);

/**
 * \fn
 * \brief renvoie le pixel aux coordonnées x, y passés en entrée
 * \param Arbq a
 * \param Nat x
 * \param Nat y
 * \return Couleur c
 * \pre x<2^(h(a)) et y<2^(h(a)) 
 */
Couleur p(Arbq,Nat,Nat);

#endif
