#include <iostream>
#include "Magic.hpp"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "WTF\n";
		exit(0);
	}
	int i = 1;
	Magic m;
	while (i < argc) {
		m.doit(argv[i]);
		std::cout << "\n";
		i++;
	}
}