#include <ncurses.h>
#include <string>

using std::string;

void mapaInicial();

int main(int argc, char*argv[]){

	initscr();
	start_color();
	attron(A_BOLD);
	scrollok(curscr,TRUE);
	init_pair(1, COLOR_RED,     COLOR_BLACK);
    init_pair(2, COLOR_GREEN,   COLOR_BLACK);
    init_pair(3, COLOR_CYAN,    COLOR_BLACK);
    init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(5, COLOR_WHITE,   COLOR_BLACK);
    init_pair(7,COLOR_WHITE, COLOR_BLACK);
    bkgd(COLOR_PAIR(7) | A_BOLD);

    mapaInicial();
    getch();

    




	endwin();
	return 0;
}

void mapaInicial(){

	attron(COLOR_PAIR(1)); 
	mvprintw(1,35,"   ****     *      *        *        ****    ********    ****  ");
	mvprintw(2,35," *      *   *      *       * *       *   *       *     *      *");
	mvprintw(3,35," *      *   *      *      *   *      *   *       *     *      *");
	mvprintw(4,35," *   *  *   *      *     *******     * *         *     *      *");
	mvprintw(5,35," *     **   *      *    *       *    *   *       *     *      *");
	mvprintw(6,35,"   **** *     ****     *         *   *    *      *       ****  ");
	attroff(COLOR_PAIR(1));

	attron(COLOR_PAIR(3));
	mvprintw(11,12, "        1           2            3            4");
	mvprintw(12,12, "  +-----------+-----------+------------+------------+");
	mvprintw(13,12, "  |           |           |            |            |");
	mvprintw(14,12, "  |           |           |            |            |");
	mvprintw(15,12, "1 |           |           |            |            | 1");
	mvprintw(16,12, "  |           |           |            |            |");
	mvprintw(17,12, "  |           |           |            |            |");
	mvprintw(18,12, "  +-----------+-----------+------------+------------+");
	mvprintw(19,12, "  |           |           |            |            |");
	mvprintw(20,12, "  |           |           |            |            |");
	mvprintw(21,12, "2 |           |           |            |            | 2");
	mvprintw(22,12, "  |           |           |            |            |");
	mvprintw(23,12, "  |           |           |            |            |");
	mvprintw(24,12, "  +-----------+-----------+------------+------------+");
	mvprintw(25,12, "  |           |           |            |            |");
	mvprintw(26,12, "  |           |           |            |            |");
	mvprintw(27,12, "3 |           |           |            |            | 3");
	mvprintw(28,12, "  |           |           |            |            |");
	mvprintw(29,12, "  |           |           |            |            |");
	mvprintw(30,12, "  +-----------+-----------+------------+------------+");
	mvprintw(31,12, "  |           |           |            |            |");
	mvprintw(32,12, "  |           |           |            |            |");
	mvprintw(33,12, "4 |           |           |            |            | 4");
	mvprintw(34,12, "  |           |           |            |            |");
	mvprintw(35,12, "  |           |           |            |            |");
	mvprintw(36,12, "  +-----------+-----------+------------+------------+");
	mvprintw(37,12, "        1           2            3            4");
	attroff(COLOR_PAIR(3));

	attron(COLOR_PAIR(2));
	mvprintw(30,95,"Elija una pieza");
	move(32,95);
	attron(COLOR_PAIR(2));
}