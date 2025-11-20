//
// Created by shu on 11/19/25.
//

#include "Idol.h"
using namespace std::string_literals;

void save_idol_progress(Idol your_idol) {
    std::fstream savefile("save.txt", std::ios_base::out);

    savefile << your_idol.get_name() << std::endl;
    savefile << your_idol.get_unit() << std::endl;
    savefile << your_idol.get_agency() << std::endl;
    savefile << your_idol.get_dance() << std::endl;
    savefile << your_idol.get_vocal() << std::endl;
    savefile << your_idol.get_performance() << std::endl;
}

Idol create_idol() {
    std::cout << "Let's produce an idol!" << std::endl;

    std::string name, unit, agency;
    int da, vo, pf;

    // input idol data
    std::cout << "Let's start by naming your idol: ";
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "What unit do they form part of? ";
    std::cin >> unit;
    std::cout << std::endl;

    std::cout << "What agency do they belong to? ";
    std::cin >> agency;
    std::cout << std::endl;
    std::cout << "How high is your idol's Dance stat?";
    std::cin >> da;
    std::cout << std::endl;
    std::cout << "How high is your idol's Vocal stat?";
    std::cin >> vo;
    std::cout << std::endl;
    std::cout << "How high is your idol's Performance stat?";
    std::cin >> pf;
    std::cout << std::endl;

    std::string current_rank = "E";

    Idol your_idol(name, unit, agency, current_rank, da, vo, pf);

    std::cout << "Your Idol Datasheet" << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "Name: " << your_idol.get_name() << std::endl;
    std::cout << "Unit: " << your_idol.get_unit() << std::endl;
    std::cout << "Agency: " << your_idol.get_agency() << std::endl;
    std::cout << "Dance Stat: " << your_idol.get_dance() << std::endl;
    std::cout << "Vocal Stat: " << your_idol.get_vocal() << std::endl;
    std::cout << "Performance Stat: " << your_idol.get_performance() << std::endl;
    std::cout << "Idol Rank: " << your_idol.get_rank() << std::endl;

    save_idol_progress(your_idol);
    return your_idol;
}

Idol choose_idol() {
    int chosen_idol;
    std::cout << "Choose between these three idols:" << std::endl;
    std::cout << "1. MIRIA AKAGI" << std::endl;
    std::cout << "2. SHU ITSUKI" << std::endl;
    std::cout << "3. YAMATO NIKAIDO" << std::endl;

    std::cin >> chosen_idol;

    Idol your_idol;

    if (chosen_idol == 1) {
        // Miria
    } else if (chosen_idol == 2) {
        // Shu
    } else if (chosen_idol == 3) {
        // Yamato
    }

    return your_idol;
}

Idol load_savefile() {
    std::fstream savefile("save.txt", std::ios_base::in);

    // sets name, unit, agency, current rank
    std::string name, unit, agency, current_rank;
    std::getline(savefile, name);
    std::getline(savefile, unit);
    std::getline(savefile, agency);
    // sets stats so far
    std::getline(savefile, current_rank);
    std::string da_str, vo_str, pf_str;
    std::getline(savefile, da_str);
    int da = stoi(da_str);
    std::getline(savefile, vo_str);
    int vo = stoi(vo_str);
    std::getline(savefile, pf_str);
    int pf = stoi(pf_str);
    // actually creates the idol
    Idol your_idol(name, unit, agency, current_rank, da, vo, pf);

    return your_idol;
}

void start_game() {
    int menu_option;
    std::cout << "Welcome to Idol Trainer!" << std::endl;
    std::cout << "1. NEW" << std::endl;
    std::cout << "2. LOAD SAVE FILE" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    std::cin >> menu_option;

    Idol your_idol;

    while (menu_option != 3) {
        if (menu_option == 1) {
            int ng_option;
            std::cout << "Do you want to produce a new idol or start with an existing one?" << std::endl;
            std::cout << "1. Produce a new idol" << std::endl;
            std::cout << "2. Choose a premade idol" << std::endl;

            std::cin >> ng_option;

            if (ng_option == 1 ) {
                your_idol = create_idol();
            } else if (ng_option == 2) {
                your_idol = choose_idol();
            }
            break;
        } if (menu_option == 2) {
            your_idol = load_savefile();
            break;
        }
    }

start_gameplay(your_idol);
}

void start_gameplay(Idol your_idol) {
    // gameplay loop goes here
}
