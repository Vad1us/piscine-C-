#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

struct DataSerial {
	char	s1[8];
	int n;
	char	s2[8];
};

void	randomizer(char* str) {
	//char		*str;
	char alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) {
		str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	str[8] = '\0';
}

void * serialize( void ) {
	DataSerial *ds = new DataSerial;


	//std::cout << rand() % 333333 << "QQQQQ\n";
	ds->n = rand() % 3333;
	randomizer(ds->s1);
	randomizer(ds->s2);

	std::cout << ds->s1 << "\n" << ds->n << "\n" << ds->s2 << "\n";
	return (reinterpret_cast<void*>(ds));
}

Data * deserialize( void * raw ) {
	Data		*d = new Data;
	DataSerial	*ds;

	ds = reinterpret_cast<DataSerial*>(raw);
	d->s1 = static_cast<std::string>(ds->s1);
	d->n = ds->n;
	d->s2 = static_cast<std::string>(ds->s2);
	return (d);
}
int main()
{
	void		*tmp;
	Data		*d;


	std::srand(std::time(NULL));
	tmp = serialize();
	std::cout << tmp << "\n";
	d = deserialize(tmp);
	std::cout << d->s1 << "\n" << d->n << "\n" << d->s2 << "\n";
	/* code */
	return 0;
}