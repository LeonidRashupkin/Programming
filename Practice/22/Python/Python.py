MA = [
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
]
visited = []
exits = []

def is_wall_or_bad_point(x, y):
    return y < 0 or x < 0 or x >= len(MA[0]) or y >= len(MA) or MA[y][x] == "#";

def crawl_MA(x, y):
    if is_wall_or_bad_point(x, y):
        return

    if (x, y) in visited:
        return
    
    visited.append( (x, y) )
        
    if MA[y][x] != " " and MA[y][x] not in exits:
        exits.append(MA[y][x])

    crawl_MA(x, y+1)
    crawl_MA(x, y-1)
    crawl_MA(x+1, y)
    crawl_MA(x-1, y)

def print_MA():
    print("\n     ", end='')
    for i in range(len(MA[0])):
        print(i % 10, end='')
    print()

    for index, line in enumerate(MA):
        print(" {:3d} {}".format(index, line))
    print()

# print_MA()

x, y = map(int, input("Введите координаты x, y через пробел: ").split())
crawl_MA(x, y)

if is_wall_or_bad_point(x, y):
    print("Неверные координаты")
else:
    if (len(exits) == 0):
        print("Выходов нет")
    else:
        for exit in exits:
            print(exit, end=' ')
        print()
