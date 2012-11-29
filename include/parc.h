#ifndef __parc_h_
#define __parc_h_

#include "arbq1.h"
#define MAX_PIXEL 255
#define NIV_R 0.299
#define NIV_V 0.587
#define NIV_B 0.114
#define SEUIL 100

/**
 * \fn
 * \brief parcoure une arbre et applique la fonction func sur chaque
 * pixel
 * \param Arbq a
 * \param Couleur fonction(Couleur)
 * \return Arbq a' (arbre dont les pixels ont été modifiés par la
 * fonction func
 * \pre rien
 */
Arbq parc(Arbq,Couleur (*func)());

/**
 * \fn
 * \brief prend un pixel et renvoie un pixel dont les couleurs on été
 * inversées
 * \param Couleur c
 * \return Couleur c' (pixel dont la couleur a été inversée
 * \pre c≠NULL
 */
Couleur invc(Couleur);

/**
 * \fn
 * \brief transforme un pixel en niveau de gris
 * \param Couleur c
 * \return Couleur c' (renvoie le pixel en niveau de gris)
 * \pre c≠NULL
 */
Couleur nivg(Couleur);

/**
 * \fn
 * \brief seuil le pixel selon une certaine valeur
 * \param Couleur c
 * \return Couleur c' (pixel modifié ou non selon la valeur de c)
 * \pre c≠NULL
 */
Couleur tresh(Couleur);

#endif
