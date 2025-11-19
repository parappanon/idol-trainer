//
// Created by shu on 11/19/25.
//

#ifndef IDOLTRAINERGAME_IDOL_H
#define IDOLTRAINERGAME_IDOL_H


#ifndef IDOLCREATOR_IDOL_H
#define IDOLCREATOR_IDOL_H
#include <iostream>
#include <fstream>

class Idol {
private:
    std::string name;
    std::string age;
    std::string unit;
    std::string agency;
    std::string rank;
    int fans = 0;
    int dance;
    int vocal;
    int performance;
public:
    // default constructor
    Idol() = default;
    // constructor with setters
    Idol(std::string const &n, std::string const &u, std::string const &p, std::string const &r, int const &d, int const &v, int const &pf) {
        this->name = n;
        this->unit = u;
        this->agency = p;
        this->rank = r;
        this->dance = d;
        this->vocal = v;
        this->performance = pf;
    }
    // destructor
    virtual ~Idol() { };
    // getters
    std::string get_name() {
        return name;
    }
    std::string get_unit() {
        return unit;
    }
    std::string get_agency() {
        return agency;
    }
    std::string get_rank() {
        return rank;
    }
    int get_dance() {
        return dance;
    }
    int get_vocal() {
        return vocal;
    }
    int get_performance() {
        return performance;
    }
};

void save_idol_progress(Idol your_idol);
Idol create_idol();
Idol load_savefile();

#endif //IDOLCREATOR_IDOL_H


#endif //IDOLTRAINERGAME_IDOL_H