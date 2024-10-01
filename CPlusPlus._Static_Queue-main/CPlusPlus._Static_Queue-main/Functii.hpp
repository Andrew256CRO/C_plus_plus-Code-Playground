#pragma once
#define dim 100

struct coadaStatica {
	int cap, coada;
	int data[dim];
};
void init(coadaStatica& q);
void put(coadaStatica& q, int valoare);
int get(coadaStatica& q);
int front(const coadaStatica& q);
int isEmpty(const coadaStatica& q);
int isFull(const coadaStatica& q);