#include <iostream>

struct Player {
	char name[50];
	int posX, posY;
	int vel;
};

void iniciaPlayer(Player *p1) {

	std::cout	<< "Digite o nome do player: ";
	std::cin >> p1->name;

	std::cout << "Posicao X: ";
	std::cin >> p1->posX;

	std::cout << "Posicao Y: ";
	std::cin >> p1->posY;

	std::cout << "Velocidade: ";
	std::cin >> p1->vel;
}

int main() {
	
	Player p;
	iniciaPlayer(&p);

	std::cout << std::endl << std::endl << "Digite o nome do player: "<< p.name << std::endl;

	std::cout << "Posicao X: " << p.posX << std::endl;

	std::cout << "Posicao Y: " << p.posY << std::endl;

	std::cout << "Velocidade: " << p.vel << std::endl;

	system("pause");
	return 0;
}