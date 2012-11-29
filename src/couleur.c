#include "couleur.h"
#include <stdlib.h>

Couleur ic(Nat r,Nat v,Nat b)
{
	Couleur c=(Couleur) malloc(sizeof(strCouleur));
	c->r=r;
	c->v=v;
	c->b=b;
	return c;
}

Nat r(Couleur c)
{
	return c->r;
}

Nat v(Couleur c)
{
	return c->v;
}

Nat b(Couleur c)
{
	return c->b;
}

Couleur blanc()
{
	return ic(255,255,255);
}

Couleur noir()
{
	return ic(0,0,0);
}
