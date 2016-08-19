#include <iostream>

int main() {
	int x = 8, *y, **z, ***w,;
	y = &x;
	z = &y;
	w = &z;

	std::cout	<< *y	<< std::endl
				<< **z	<< std::endl
				<< ***w << std::endl;

	system("pause");
	return 0;
}