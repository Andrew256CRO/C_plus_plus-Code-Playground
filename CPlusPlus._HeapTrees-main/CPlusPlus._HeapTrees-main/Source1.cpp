#include <iostream>
#include "Header.h"

int main()
{

	int v[30];
	int x;
	int n = 0;
	std::cout << "\n x=";
	std::cin >> x;
	while (x)
	{
		inserare(v, n, x);
		std::cout << "\n x=";
		std::cin >> x;
	}

	int i;
	std::cout << "\n ";
	for (i = 1; i <= n; i++)
	{
		std::cout << v[i] << " ";
	}

	Stergere(v, n);
	std::cout << "\n ";
	for (i = 1; i <= n; i++)
	{
		std::cout << v[i] << " ";
	}

	build_heap(v, n);
	std::cout << "\n ";
	for (i = 1; i <= n; i++)
	{
		std::cout << v[i] << " ";
	}

}