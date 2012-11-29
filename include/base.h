#ifndef __base_h_
#define __base_h_

#define vrai 1
#define faux 0
#define MALLOC(t) ((t*)malloc(sizeof(t)))
#define MALLOCN(t,n) ((t*)malloc(n*sizeof(t)))

typedef int Bool;
typedef int S;
typedef unsigned int Nat;
typedef int Ent;

unsigned int nat2uint(Nat);

#endif

