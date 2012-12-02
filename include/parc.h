/**
 * \file       parc.h
 * \author     Andreux Simon
 * \version    1.0
 * \date       30 nov 2012
 * \brief      include de parc.c 
 *
 * \details    Contient les prototypes des fonctions relatives au traitement des pixels
 *
 */

#ifndef __parc_h_
#define __parc_h_

#include "arbq1.h"
#define MAX_PIXEL 255
#define NIV_R 0.299
#define NIV_V 0.587
#define NIV_B 0.114
#define SEUIL 100

/**
 * \brief parcoure une arbre et applique la fonction func sur chaque
 * pixel
 * \param a Arbq
 * \param func Couleur fonction(Couleur)
 * \return Arbq a' (arbre dont les pixels ont été modifiés par la
 * fonction func
 * \pre rien
 */
Arbq parc(Arbq a,Couleur (*func)());

/**
 * \brief prend un pixel et renvoie un pixel dont les couleurs on été
 * inversées
 * \param c Couleur
 * \return Couleur c' (pixel dont la couleur a été inversée
 * \pre c≠NULL
 */
Couleur invc(Couleur c);

/**
 * \brief transforme un pixel en niveau de gris
 * \param c Couleur
 * \return Couleur c' (renvoie le pixel en niveau de gris)
 * \pre c≠NULL
 */
Couleur nivg(Couleur c);

/**
 * \brief seuil le pixel selon une certaine valeur
 * \param c Couleur
 * \return Couleur c' (pixel modifié ou non selon la valeur de c)
 * \pre c≠NULL
 */
Couleur tresh(Couleur c);

#endif
