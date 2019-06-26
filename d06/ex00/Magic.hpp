//
// Created by Vadym RADCHENKO on 10/10/18.
//

#ifndef EX00_MAGIC_HPP
#define EX00_MAGIC_HPP

#include <iostream>
#include <iomanip>
class Magic {
private:

	int		_intgr;
	float	_flt;
	double	_dbl;
	char 	_chr;
public:
	/* Canonical Form */
	Magic();

	Magic(Magic const &src);

	~Magic();

	Magic &operator=(Magic const &rhs);

	void 		doit(std::string str);

	void		intgr(std::string str);
	void		flt(std::string str);
	void		dbl(std::string str);
	void 		chr(std::string str);
	int			len(std::string str);
};


#endif //EX00_MAGIC_HPP