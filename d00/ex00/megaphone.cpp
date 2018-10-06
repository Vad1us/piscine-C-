#include <iostream>

int main(int argc, char *argv[]) {
	int		i;
	int		arg;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		exit(1);
	}
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			putchar(toupper(argv[arg][i]));
			i++;
		}
		arg++;
	}
	std::cout << std::endl;
}