#include <iostream>

template<typename T>
void iter(T const arr[], size_t len, void f(T)) {
	size_t i = 0;
	while (i < len)
		f(arr[i++]);
}
template<typename T>
void f(T tmp) {
	std::cout << tmp << "\n"; 
}

int main( void ) {
	std::string tmp[] = {"111111",
						"222222",
						"333333",
						"444444",
						"555555",
						"666666"};
	iter(tmp, 6, ::f);
	std::cout << "\n";
	int tmp2[] = {111, 222,333,444,555,666,777};
	iter(tmp2, 7, ::f);
}