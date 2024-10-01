#include<iostream>
#include "Header.h"

void inserare(int A[], int& n, int x)
{
	A[n + 1] = x;
	n = n + 1;
	int fiu = n;
	int parinte = n / 2;
	while (parinte >= 1)
	{
		if (A[parinte] < A[fiu])
		{
			std::swap(A[parinte], A[fiu]);
			fiu = parinte;
			parinte = parinte / 2;
		}
		else
		{
			parinte = 0;
		}
	}
}

void build_heap(int A[], int n)
{
	int i, v;
	for (i = 2; i <= n; i++)
	{
		v = i - 1;
		inserare(A, v, A[i]);
	}
}

int Stergere(int v[], int& n)
{
	if (n == 0)
		return -1;
	else
	{
		int ret_val = v[1];
		v[1] = v[n];
		n--;
		int parinte = 1;
		int fiu = 2;
		while (fiu <= n)
		{
			if (fiu + 1 < n && v[fiu] < v[fiu + 1])
			{
				fiu++;
			}
			if (v[parinte] < v[fiu])
			{
				std::swap(v[parinte], v[fiu]);
				parinte = fiu;
				fiu = fiu * 2;
			}
			else
			{
				fiu = n + 1;
			}
		}
	}
}