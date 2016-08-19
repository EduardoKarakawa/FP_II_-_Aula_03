#include <iostream>

int main() {
	int p[3] = { 3,3,3 };
	int *pv = p;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Valor: " << pv[i]  << " Memoria: " << (pv + i) << std::endl << std::endl;
	}

	system("pause");
	return 0;
}