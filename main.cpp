#include <iostream>
#include <fstream>
#include <vector>
#include "Idol.h"

int main() {
    int menu_option;
    std::cout << "1. NEW" << std::endl;
    std::cout << "2. LOAD SAVE FILE" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    std::cin >> menu_option;

    Idol your_idol;

    while (menu_option != 3) {
        if (menu_option == 1) {
            your_idol = create_idol();
            break;
        } else if (menu_option == 2) {
            your_idol = load_savefile();
            break;
        }
    }

    start_gameplay(your_idol);
    return 0;
}