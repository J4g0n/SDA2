#include "arbq.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

Nat tc(Arbq a)
{
	return (int)sqrt((float)nf(a));
}

Arbq f(Couleur c)
{
	Arbq a=(Arbq) malloc(sizeof(strArbq));
	a->t=COULEUR;
	a->c=ic(c->r,c->v,c->b);
	a->no=NULL;
	a->ne=NULL;
	a->so=NULL;
	a->se=NULL;
	return a;
}

Arbq e(Arbq no,Arbq ne,Arbq so,Arbq se)
{
	Arbq a=(Arbq) malloc(sizeof(strArbq));
	a->t=NOEUD;
	a->no=no;
	a->ne=ne;
	a->so=so;
	a->se=se;
	return a;
}

Arbq no(Arbq a)
{
	return a->no;
}

Arbq ne(Arbq a)
{
	return a->ne;
}

Arbq so(Arbq a)
{
	return a->so;
}

Arbq se(Arbq a)
{
	return a->se;
}

Nat h(Arbq a)
{
	int i=0;
	while(a->t==NOEUD)
	{
		i++;
		a=a->no;
	}
	return i;
}

Couleur c(Arbq a)
{
	Couleur tmp=a->c;
	Couleur coul=ic(r(tmp),v(tmp),b(tmp));
	return coul;
}

Bool estf(Arbq a)
{
	return a->t==COULEUR?1:0;
}

Nat nf(Arbq a)
{
	int r=1;
	while(a->t==NOEUD)
	{
		r*=4;
		a=a->no;
	}
	return r;
}

Couleur p(Arbq a,Nat x,Nat y)
{
	int r=tc(a);
	while(a->t!=COULEUR)
	{
		r/=2;
		if(x>=r)
		{
			x-=r;
			if(y>=r)
			{
				y-=r;
				a=a->se;
			}
			else 
				a=a->so;
		}
		else
		{
			if(y>=r)
			{
				y-=r;
				a=a->ne;
			}
			else 
				a=a->no;
		}
	}
	return c(a);
}

/*	if(estf(a))
	{
		return c(a);
	}
	else
	{
		if(x>r)
		{
			if(y>r)
			{
				return p(a->se,x-r,y-r);
			}
			else
			{
				return p(a->ne,x-r,y);
			}
		}
		else
		{
			if(y>r)
			{
				return p(a->so,x,y-r);
			}
			else
			{
				return p(a->no,x,y);
			}
		}
	}
}
*/

