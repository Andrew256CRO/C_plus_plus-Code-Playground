#include <iostream>
#include"Stiva.hpp"

//int main()
//{
//	stiva* callStack = 0;
//	std::cout << topElem(callStack) << std::endl;
//	std::cout << popElem(callStack) << std::endl;
//	int x;
//	std::cin >> x;
//	while (x) {
//		inserareStiva(callStack, x);
//		std::cin >> x;
//	}
//	afisareStiva(callStack);
//	std::cout << topElem(callStack) << std::endl;
//	std::cout << popElem(callStack) << std::endl;
//	afisareStiva(callStack);
//	stiva* callStack2 = copy(callStack);
//	afisareStiva(callStack2);
//	std::cout << "Aici ar trebui ca stiva sa fie 0 aka nullptr aka goala." << std::endl;
//	deleteStiva(callStack);
//	afisareStiva(callStack);
//	return 0;
//}

int main() {
	stiva* callStack = 0;
	std::cout << topElem(callStack) << std::endl;
	std::cout << popElem(callStack) << std::endl;
	int x;
	std::cin >> x;
	while (x) {
		pushElem(callStack, x);
		std::cin >> x;
	}
	afisareStiva(callStack);
	std::cout << topElem(callStack) << std::endl;
	std::cout << popElem(callStack) << std::endl;
	stiva* callStack2 = copy(callStack);
	afisareStiva(callStack2);
	std::cout << "Aici ar trebui ca stiva sa fie 0 aka nullptr aka goala." << std::endl;
	deleteStiva(callStack);
	afisareStiva(callStack);
	return 0;
}

