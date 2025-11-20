//
// Created by shu on 11/20/25.
//
#pragma once
#include "Idol.h"

class Yamato: Idol {
private:
    int restraint;
    int impulse;
public:
    Yamato() {
        this->name = "Yamato Nikaido";
        this->unit = "Idolish7";
        this->agency = "Cosmic Production";
        this->rank = "E";
        this->dance = 380;
        this->vocal = 510;
        this->performance = 970;
        this->restraint = 50;
        this->impulse = 0;
    }
};
