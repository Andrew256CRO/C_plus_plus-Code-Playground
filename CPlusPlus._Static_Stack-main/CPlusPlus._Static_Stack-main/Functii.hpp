#pragma once
#define max_size 100

struct stivaOrdonata {
	int data[max_size];
	int top;
};
int topStiva(const stivaOrdonata& s);
void init(stivaOrdonata& s);
void push(stivaOrdonata& s, int valoare);
void pop(stivaOrdonata& s);
bool isEmpty(stivaOrdonata& s);
bool isFull(stivaOrdonata& s);