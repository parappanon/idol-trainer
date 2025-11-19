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

    while (menu_option != 3) {
        if (menu_option == 1) {
            Idol your_idol = create_idol();
            // start_gameplay();
        } else if (menu_option == 2) {
            Idol your_idol = load_savefile();
        }
    }
    return 0;
}