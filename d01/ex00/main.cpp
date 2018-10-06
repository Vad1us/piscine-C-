#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony *Purple = new Pony("PurpleHeap");
	std::cout << " on the heap.\n";
	delete Purple; 
}

void ponyOnTheStack() {
	Pony Pink("PinkStack");
	std::cout << " on the stack.\n"; 
}

int main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
}
