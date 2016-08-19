#include <iostream>

int main() {
	int q = 30;
	int p = 10;
	p = 20;

	// const int *pp = &p;		//So permite a alteracao da memoria que ele aponta
	// int *const pp = &p;		//So permite a alteracao do valor por dereferenciacao
	const int *const pp = &p;	//Nao permite ser alterado nada

	pp = &q;	
	*pp = 15;

	system("pause");
	return 0;
}