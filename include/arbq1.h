/**
 * \file       arbq1.h
 * \author     Andreux Simon
 * \version    1.0
 * \date       30 nov 2012
 * \brief      include de arbq1.c 
 *
 * \details    Contient les prototypes des fonctions relatives aux images
 *
 */
#ifndef __arbq1_h_
#define __arbq1_h_

#include "arbq.h"

/**
 * \brief renvoie un damier
 * \param i Nat hauteur_du_damier
 * \return Arbq damier
 * \pre rien
 */
Arbq damier(Nat i);

/**
 * \brief fonction auxiliaire pour la symétrie horizontale
 * \param a Arbq
 * \return Arbq a' (image miroir de a)
 * \pre rien
 */
Arbq symh_aux(Arbq a);

/**
 * \brief fonction de symétrie horizontale de l'image
 * \param a Arbq
 * \return Arbq a' (symétrie sur a)
 * \pre rien
 */
Arbq symh(Arbq a);

/**
 * \brief fonction auxiliaire pour la symétrie verticale
 * \param a Arbq
 * \return Arbq a' (image miroir de a)
 * \pre rien
 */
Arbq symv_aux(Arbq a);

/**
 * \brief fonction de symétrie verticale de l'image
 * \param a Arbq
 * \return Arbq a' (symétrie sur a)
 * \pre rien
 */
Arbq symv(Arbq a);

/**
 * \brief opère une rotation à gauche
 * \param a Arbq
 * \return Arbq a' (image tournée à 90° sur la gauche
 * \pre rien
 */
Arbq rotg(Arbq a);

/**
 * \brief opère une rotation a droite
 * \param a Arbq
 * \return Arbq a' (image tournée à 90° sur la droite
 * \pre rien
 */
Arbq rotd(Arbq a);

/**
 * \brief opère un dézoom sur une image
 * \param a Arbq
 * \return Arbq a' (image renvoyée avec un pixel sur quatre)
 * \pre rien
 */
Arbq dzoo(Arbq a);

/**
 * \brief supprime un Arbq
 * \param a Arbq
 * \return NULL
 * \pre rien
 */
Arbq dela(Arbq a);

/**
 * \brief copie un arbre
 * \param a Arbq
 * \return Arbq a' (renvoie une copie de a)
 * \pre rien
 */
Arbq cpa(Arbq a);

/**
 * \brief prend un arbre et une fonction en argument et applique
 * l'opération sur cet arbre
 * \param a Arbq 
 * \param func Arbq fonction(Arbq)
 * \return Arbq a'
 * \pre les préconditions de func sur a
 */
Arbq opa(Arbq,Arbq (*func)());

#endif

