#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "There are not 3 arguments. Try again.\n";
		exit (0);
	}
	std::string 	fname = argv[1];
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	std::string 	file;
	std::string 	tmp;
	int 			i;
	std::ifstream	ifs;

	if (s1.length() == 0 || s2.length() == 0) {
		std::cout << "Dont use empty strings!\n";
		return (0);
	}
	ifs.open(fname);
	if (ifs == NULL)
	{
		std::cout << "File does not exit.\n";
		exit (0);
	}
	while (ifs >> tmp)
		file += tmp += "\n";
	ifs.close();
	i = 0;
	while (1) {
		i = file.find(s1, i);
		if (file[i] == '\0')
			break ;
		file.replace(i, s1.length(), s2);
	}
	i = 0;
	while (fname[i]) {
		fname[i] = std::toupper(fname[i]);
		i++;
	}
	fname += ".replace";
	std::ofstream outf(fname);
	outf << file;
}