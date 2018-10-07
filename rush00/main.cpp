#include <iostream>
#include "ncurses.h"
#include <random>

void newGame()
{

}
int main() {
	srand(time(NULL));
	initscr();
	use_default_colors();
	noecho();
	cbreak();
	//int yMax, xMax;
	//getmaxyx(stdscr, yMax, xMax);
	mvwprintw(stdscr, 1, 40, "HELLO MY LITTLI FRIEND\n");
	refresh();
	keypad(stdscr, true);
	std::string ch[] = {
	"    _   _                                            \n",
	"   | \\ | |                                           \n",
	"   |  \\| | _____      __   __ _  __ _ _ __ ___   ___ \n",
	"   | . ` |/ _ \\ \\ /\\ / /  / _` |/ _` | '_ ` _ \\ / _ \\\n",
	"   | |\\  |  __/\\ V  V /  | (_| | (_| | | | | | |  __/\n",
	"   |_| \\_|\\___| \\_/\\_/    \\__, |\\__,_|_| |_| |_|\\___|\n",
	"                           __/ |                     \n",
	"                          |___/ ",
	"                _ _   \n", //8
	"               (_| |  \n",
	"     __ _ _   _ _| |_ \n",
	"    / _` | | | | | __|\n",
	"   | (_| | |_| | | |_ \n",
	"    \\__, |\\__,_|_|\\__|\n",
	"       | |            \n",
	"       |_|"};
	int choice;
	int highlight = 0;
	int i;
	while (1) {
		for (i = 0; i < 2; i++) {
			if (i == highlight)
				wattron(stdscr, A_REVERSE);
			mvwprintw(stdscr, i*9+2, 10, ch[i*8].c_str());
			mvwprintw(stdscr, i*9+3, 10, ch[i*8+1].c_str());
			mvwprintw(stdscr, i*9+4, 10, ch[i*8+2].c_str());
			mvwprintw(stdscr, i*9+5, 10, ch[i*8+3].c_str());
			mvwprintw(stdscr, i*9+6, 10, ch[i*8+4].c_str());
			mvwprintw(stdscr, i*9+7, 10, ch[i*8+5].c_str());
			mvwprintw(stdscr, i*9+8, 10, ch[i*8+6].c_str());
			mvwprintw(stdscr, i*9+9, 10, ch[i*8+7].c_str());
			wattroff(stdscr, A_REVERSE);
		}
		choice = wgetch(stdscr);

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
	if (i == 1)
		newGame();
	else {
		clear();
		init_pair(1, COLOR_RED,  -1);//COLOR_BLUE);
		init_pair(2, COLOR_BLUE, -1);//COLOR_CYAN);
		init_pair(3, COLOR_CYAN, -1);//COLOR_YELLOW);
		init_pair(4, COLOR_YELLOW,-1);//COLOR_GREEN);
		init_pair(5, COLOR_GREEN, -1);//COLOR_RED);
		while (1) {
		 	int col = rand() % 5;
		 	mvwprintw(stdscr,1,1,"col =%d", col);
		 	attron(COLOR_PAIR(col));
			mvwprintw(stdscr,2, 2,
					 "   ::::::::   ::::::::   ::::::::  :::::::::        :::::::::  :::   ::: :::::::::: \n"
					 "  :+:    :+: :+:    :+: :+:    :+: :+:    :+:       :+:    :+: :+:   :+: :+:        \n"
					 "  +:+        +:+    +:+ +:+    +:+ +:+    +:+       +:+    +:+  +:+ +:+  +:+        \n"
					 "  :#:        +#+    +:+ +#+    +:+ +#+    +:+       +#++:++#+    +#++:   +#++:++#   \n"
					 "  +#+   +#+# +#+    +#+ +#+    +#+ +#+    +#+       +#+    +#+    +#+    +#+        \n"
					 "  #+#    #+# #+#    #+# #+#    #+# #+#    #+#       #+#    #+#    #+#    #+#        \n"
					 "   ########   ########   ########  #########        #########     ###    ########## ");
			attroff(COLOR_PAIR(col));
			nodelay(stdscr, true);
			if (getch() != -1) {
				system("clear");
				exit(EXIT_SUCCESS);
			}
			refresh();
		}
		getch();
		endwin();
	}
	exit(EXIT_SUCCESS);
}