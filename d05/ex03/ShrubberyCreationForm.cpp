//
// Created by Vadym RADCHENKO on 10/9/18.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) , _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	(void)src;
	return (*this);
}

void ShrubberyCreationForm::task() const {

	std::ofstream file(this->_target + "_shrubbery");
	file << "........................................................................................................................\n"
			"..................................................................==....==..............................................\n"
			"................................................=....=.........IAAAAAAAAAAI=............................................\n"
			"..........................................==IIIIIIIAAAAAI=..=IIAXXAIIAAXXAAAI===........................................\n"
			"........................................IIAAXAAAAXXAAAIAAIIIIIIAAAAAAAAAAAAAAAAAAI==....................................\n"
			"......................................=AAAAAAAXXXXXXXAAAXXXXAAIIAIAXXXAXXXXXXXMXXAAAAAI=................................\n"
			".................................=II=IAAXAAXAXMXXXXAAAAAMMMMXAAAXAAAAXXAAAAXMXXXXXXXAAII=...............................\n"
			"..............................=IIAAAAAXAAXMMMMMMXAAAXXXXXXXXXXMMXXMXAAXXAAAAAAXMMMXXXMXAAII.............................\n"
			"............................=IAAAXAAXAAAAXMMMMMXAAAXXXMMMXXXMXMXXXXMMMXAAAAAAAAXMXAXXAXXXXI.............................\n"
			"..........................IAAXAAAXXXAAAXXXXMXXXXXXXMMMMXXXMMMXXXXXXMMMMXXXMMXXAXXXMMMMMMXXAA=...........................\n"
			".........................=AAAXXXXXMXXXXXMMXXXXAXXXMMMMMXAAAAXXXXXMMXXXXXXXXXAAAXXAXMMMMMXXAI............................\n"
			".........................=IXXMXMMMMXMMMMMMMMXXXXMMMMMMXXXXXAAXAAMMMXXAAXXAXXXMXXXXXXXXXXXXAAI...........................\n"
			".........................=AXMMMMMMMXXMMMMMMMMMMMMMXMXXXXXXMXXXMXMMMXXAXAXXXMMXXAAAXAAAAAXXXXXAI=........................\n"
			"........................===IAXXMMXXXXXXMMMXXXXXXXXXMMMMXXMMMMMMXXMXXMMMMMMMMXAXXAAXXXXXXMMXXXAAI........................\n"
			".....................=AAAAAAAXMMXXMXXXXXMMXXXXXXXMXXXMMMMWMMMMXMMMMMMMMMMMXXAXMMMXMMXXXXXXMMXXAAA=......................\n"
			".....................IAAAAXXXXXXXMXMXXMXMXXXAAAXXXXXMMMMMMMMMMMMMMXMXMMWMXXXXMMMMMXMXXXXXMXXXXAAAI=.....................\n"
			".....................IAXXMXAXMMMXMMMXXMXXXAXMMXXXXMMMMMMXXMXMXAXXXXMMMMMMMXMMMMMMXXXXAXXXXXAAXAXAAAAAI..................\n"
			"...............===I==AAAAXXXXMMMMWMMMMMMXXMWWMMMMMMMMMMXXXXXXXXMMXXXMMMXXMMMMMMMXMMXXXXAXXAXXXAXAAAAA=..................\n"
			"..............=AAAAAAXXXXMXXAAXXXMMMMMMMMMMMMMMMMMMMMMXXXXXXXMMMXXAAXXXXXXXMMMMXXXXXXXMMXXXXMMMMMXXXXAAAI...............\n"
			".............=AXXXXXXXMMMMXXXMXXXAXXXXXXXMMMMMMMMMMMMMMMMMXXXXXXXAAXAAAXXXMMMMMMXXXXXXXXXXXAXMMMMXXAAXXXI...............\n"
			"..............IXXAAAXXXMMXAXMMMXMMMXAXXXMMMMMMMXMXMMMMMMMXXAAAAAAXXMMMXXXMMMMMMMXXXMXMXXXXXXXXXXXXAXAXXXAI..............\n"
			"...................AXXXXXXXAAMMXXAAXXXXXXMMMMMXMMMMMMXXMMAAAXXXXMMMMMXXAAXMMMMMMMMWMMMXXMMXXXXXXXXXXXMMXA=..............\n"
			"...................IAII=AI=IIXMMXI=IXI=IAAMMAAMWMMMXX=.AMMM==XMMMMXXXXAIAXMAI.=II=IXMMAAXXXXXXMMXXXXXAI.................\n"
			".......................=I==..II=..=IIIIAXMMXXXAXMXAAMMA=IMMXXMMAAAXA==IAA=.....=I=.=AXMXMXXXXAXMXXXAAAI.................\n"
			".......................................==I=AI=..=....=IAMMMMMX=..AA..............IIIAMMXIIIAXAA==AAAI=..................\n"
			"...........................................=.............AMMMA=AX=..............=IAIXIA=....=I=.........................\n"
			"..........................................................XMMMA=........................................................\n"
			"..........................................................AXMX=.........................................................\n"
			"..........................................................AXMX=.........................................................\n"
			"..........................................................AXMMI.........................................................\n"
			"..........................................................AXXMA.........................................................\n"
			".......................................................=IAXXXXXI=............................._|_.......................";
	//std::cout << "DONE\n";
}