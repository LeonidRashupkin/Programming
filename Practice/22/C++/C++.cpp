#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using visits_t = std::vector<std::pair<int, int>>;
using exits_t = std::vector<char>;

const std::string MA[] = {
	"####B######################",
	"# #       #   #      #    #",
	"# # # ###### #### ####### #",
	"# # # #       #   #       #",
	"#   # # ######### # ##### #",
	"# # # #   #       #     # #",
	"### ### ### ############# #",
	"# #   #     # #           #",
	"# # #   ####### ###########",
	"# # # #       # #         C",
	"# # ##### ### # # ####### #",
	"# # #     ### # #       # #",
	"#   ##### ### # ######### #",
	"######### ### #           #",
	"# ####### ### #############",
	"A           #   ###   #   #",
	"# ############# ### # # # #",
	"# ###       # # ### # # # #",
	"# ######### # # ### # # # F",
	"#       ### # #     # # # #",
	"# ######### # ##### # # # #",
	"# #######   #       #   # #",
	"# ####### ######### #######",
	"#         #########       #",
	"#######E############D######"
};

bool is_wall_or_bad_point(int x, int y) {
	return x < 0 || x >= MA[0].length()
		|| y < 0 || y >= std::size(MA)
		|| MA[y][x] == '#';
}

void crawl_MA(visits_t& visited, exits_t& exits, int x, int y) {

	if (is_wall_or_bad_point(x, y)) {
		return;
	}

	if (std::find(visited.begin(), visited.end(), std::make_pair(x, y)) != visited.end()) {
		return;
	}

	visited.push_back(std::make_pair(x, y));

	if (MA[y][x] != ' '
		&& std::find(exits.begin(), exits.end(), MA[y][x]) == exits.end()) {
		exits.push_back(MA[y][x]);
	}

	crawl_MA(visited, exits, x + 1, y);
	crawl_MA(visited, exits, x - 1, y);
	crawl_MA(visited, exits, x, y + 1);
	crawl_MA(visited, exits, x, y - 1);

}

int main() {
	visits_t visited;
	exits_t  exits;

	int x, y;
	std::cout << "Введите координаты x, y через пробел: ";
	std::cin >> x >> y;

	if (is_wall_or_bad_point(x, y)) {
		std::cout << "Неверные координаты" << std::endl;
	}
	else {
		crawl_MA(visited, exits, x, y);

		if (exits.size() != 0) {
			for (char e : exits) {
				std::cout << e << " ";
			}
		}
		else {
			std::cout << "Выходов нет";
		}   std::cout << std::endl;
	}

}