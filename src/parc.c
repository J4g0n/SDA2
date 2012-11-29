#include <stdlib.h>
#include "parc.h"

Arbq parc(Arbq a,Couleur (*func)())
{
	if(estf(a)) 
	{
		return f(func(c(a)));
	}
	else
	{
		return e(parc(a->no,func),parc(a->ne,func),parc(a->so,func),parc(a->se,func));
	}
}

Couleur invc(Couleur c)
{
	c->r=MAX_PIXEL-r(c);
	c->v=MAX_PIXEL-v(c);
	c->b=MAX_PIXEL-b(c);
	return c;
}

Couleur nivg(Couleur c)
{
	c->r=(r(c)+v(c)+b(c))/3;
	c->v=(r(c)+v(c)+b(c))/3;
	c->b=(r(c)+v(c)+b(c))/3;
	return c;
}

Couleur tresh(Couleur c)
{
	if(((r(c)+v(c)+b(c))/3)<SEUIL) 
	{
		free(c);
		return noir();
	}
	else
	{
		return c;
	}
}


