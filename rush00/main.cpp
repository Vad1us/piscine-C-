#include <iostream>
#include "ncurses.h"

int main() {
	initscr();
	noecho();
	cbreak();
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW * inputwin = newwin(yMax-20, xMax-20, 10, 10);
	getmaxyx(stdscr, yMax, xMax);
	mvwprintw(inputwin, 1, 40, "hellooooo");
	box (inputwin, 0, 0);
	refresh();
	wrefresh(inputwin);
	keypad(inputwin, true);

	std::string ch[] = {"New game", "Quit"};
	int choice;
	int highlight = 0;
	while (1) {
		for (int i = 0; i < 2; i++) {
			if (i == highlight)
				wattron(inputwin, A_REVERSE);
			mvwprintw(inputwin, i+1, 1, ch[i].c_str());
			wattroff(inputwin, A_REVERSE);
		}
		choice = wgetch(inputwin);

		switch(choice) {
			case KEY_UP:
				highlight--;
				if(highlight == -1)
					highlight = 0;
				break;
			case KEY_DOWN:
				highlight++;
				if (highlight == 2)
					highlight = 1;
				break;
			default:
				break;
		}
		if (choice == 10)
			break ;
	}
//	int key = getch();
//	move(20,20);
//	printw("%i", key);
//	mvprintw(3,3, "%i", key);
//	refresh();
	getch();
	endwin();
	exit(EXIT_SUCCESS);
}