#ifndef __arbq1_h_
#define __arbq1_h_

#include "arbq.h"

/**
 * \fn
 * \brief renvoie un damier
 * \param Nat hauteur_du_damier
 * \return Arbq damier
 * \pre rien
 */
Arbq damier(Nat);

/**
 * \fn
 * \brief fonction auxiliaire pour la symétrie horizontale
 * \param Arbq a
 * \return Arbq a' (image miroir de a)
 * \pre rien
 */
Arbq symh_aux(Arbq);

/**
 * \fn
 * \brief fonction de symétrie horizontale de l'image
 * \param Arbq a
 * \return Arbq a' (symétrie sur a)
 * \pre rien
 */
Arbq symh(Arbq);

/**
 * \fn
 * \brief fonction auxiliaire pour la symétrie verticale
 * \param Arbq a
 * \return Arbq a' (image miroir de a)
 * \pre rien
 */
Arbq symv_aux(Arbq);

/**
 * \fn
 * \brief fonction de symétrie verticale de l'image
 * \param Arbq a
 * \return Arbq a' (symétrie sur a)
 * \pre rien
 */
Arbq symv(Arbq);

/**
 * \fn
 * \brief opère une rotation à gauche
 * \param Arbq a
 * \return Arbq a' (image tournée à 90° sur la gauche
 * \pre rien
 */
Arbq rotg(Arbq);

/**
 * \fn
 * \brief opère une rotation a droite
 * \param Arbq a
 * \return Arbq a' (image tournée à 90° sur la droite
 * \pre rien
 */
Arbq rotd(Arbq);

/**
 * \fn
 * \brief opère un dézoom sur une image
 * \param Arbq a
 * \return Arbq a' (image renvoyée avec un pixel sur quatre)
 * \pre rien
 */
Arbq dzoo(Arbq);

/**
 * \fn
 * \brief supprime un Arbq
 * \param Arbq a
 * \return NULL
 * \pre rien
 */
Arbq dela(Arbq);

/**
 * \fn
 * \brief copie un arbre
 * \param Arbq a
 * \return Arbq a' (renvoie une copie de a)
 * \pre rien
 */
Arbq cpa(Arbq);

/**
 * \fn
 * \brief prend un arbre et une fonction en argument et applique
 * l'opération sur cet arbre
 * \param Arbq a
 * \param Arbq fonction(Arbq)
 * \return Arbq a'
 * \pre les préconditions de func sur a
 */
Arbq opa(Arbq,Arbq (*func)());

#endif

