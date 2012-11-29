#include "arbq1.h"
#include <stdlib.h>
#include <stdio.h>

Arbq damier(Nat n)
{
	if(n==0)
	{
		return f(noir());
	}
	else
	{
		if(n==1)
		{
			return e(f(noir()),f(blanc()),f(blanc()),f(noir()));
		}
		else 
		{
			return e(damier(n-1),damier(n-1),damier(n-1),damier(n-1));
		}
	}
}

Arbq symh_aux(Arbq a)
{
	if(estf(a)) return f(a->c);
	else 
	{
		return e(symh_aux(a->so),symh_aux(a->se),symh_aux(a->no),symh_aux(a->ne));
	}
}

Arbq symh(Arbq a)
{
	if(!estf(a))
	{
		a=e(cpa(a->no),cpa(a->ne),symh_aux(a->no),symh_aux(a->ne));
	}
	return a;
}

Arbq symv_aux(Arbq a)
{
	if(estf(a)) return f(a->c);
	else 
	{
		return e(symv_aux(a->ne),symv_aux(a->no),symv_aux(a->se),symv_aux(a->so));
	}
}

Arbq symv(Arbq a)
{
	if(!estf(a))
	{
		a=e(cpa(a->no),symv_aux(a->no),cpa(a->so),symv_aux(a->so));
	}
	return a;
}

Arbq rotg(Arbq a)
{
	if(estf(a)) return f(a->c);
	else 
	{
		return e(rotg(a->ne),rotg(a->se),rotg(a->no),rotg(a->so));
	}
}

Arbq rotd(Arbq a)
{
	if(estf(a)) return f(a->c);
	else 
	{
		return e(rotd(a->so),rotd(a->no),rotd(a->se),rotd(a->ne));
	}
}

Arbq dzoo(Arbq a)
{
	if(estf(a)) return f(a->c);
	else
	{
		if(estf(a->no))
		{
			return f(a->no->c);
		}
		else 
		{
			return e(dzoo(a->no),dzoo(a->ne),dzoo(a->so),dzoo(a->se));
		}
	}
}

Arbq dela(Arbq a)
{
	if(a!=NULL) 
	{
		if(a->t==NOEUD)
		{
			dela(a->no);
			dela(a->ne);
			dela(a->so);
			dela(a->se);
		}
		else
		{
			if(a->c!=NULL) free(a->c);
			free(a);
		}
	}
	return NULL;
}

Arbq cpa(Arbq a)
{

	Arbq a0=(Arbq) malloc(sizeof(strArbq));
	if(a->t==COULEUR) 
	{
		a0->t=COULEUR;
		a0->c=c(a);
		return a0;
	}
	else 
	{
		a0->t=NOEUD;
		return e(cpa(a->no),cpa(a->ne),cpa(a->so),cpa(a->se));
	}
}	

Arbq opa(Arbq a,Arbq (*func)())
{
	Arbq arb=func(a);
	return arb;
}
