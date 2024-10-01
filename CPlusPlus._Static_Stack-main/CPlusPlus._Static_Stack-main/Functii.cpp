#include<iostream>
#include"Functii.hpp"

void init(stivaOrdonata& s) {
	s.top = -1;
}

void push(stivaOrdonata& s, int valoare) {
	s.top++;
	s.data[s.top] = valoare;
}

int topStiva(const stivaOrdonata& s) {
	return s.data[s.top];
}

void pop(stivaOrdonata& s) {
	s.top--;
}

bool isEmpty(stivaOrdonata& s) {
	if (s.top == -1) {
		return true;
	}
	return false;
}

bool isFull(stivaOrdonata& s) {
	if (s.top == max_size - 1) {
		return true;
	}
	return false;
}