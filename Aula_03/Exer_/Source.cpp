#include <iostream>

#define TAMANHO 2

int somar(int *vetor, int tam) {

	int soma = 0;

	for (int i = 0; i < tam; i++) {
		soma += vetor[i];
	}

	return soma;
}

int somar2(int *vetor, int tam) {

	int soma = 0;

	for (int i = 0; i < tam; i++) {
		soma += *(vetor + i);
	}
	return soma;
}

void leVet(int *vetor, int tam) {

	for (int i = 0; i < tam; i++) {
		std::cout << "Digite um valor para posicao " << i << " do vetor:" << std::endl;
		std::cin >> *(vetor + i);
		std::cout << std::endl;
	}
}

int main() {

	int v[TAMANHO];
	int matriz[TAMANHO][TAMANHO];


	leVet(matriz[0],TAMANHO*TAMANHO);

	std::cout << std::endl;
	std::cout << "Somar1:" << somar(matriz[0], TAMANHO*TAMANHO) << std::endl << std::endl;
	std::cout << "Somar2:" << somar2(matriz[0], TAMANHO*TAMANHO) << std::endl << std::endl;
	
	/*leVet(v, TAMANHO);

	std::cout << std::endl;
	std::cout << "Somar1:" << somar(v, TAMANHO) << std::endl << std::endl;
	std::cout << "Somar2:" << somar2(v, TAMANHO) << std::endl << std::endl;*/

	system("pause");
	return 0;
}