//
// Created by shu on 11/19/25.
//

#pragma once
#include "Idol.h"

class Shu: Idol {
    private:
    int sanity;
    int integrity;
    public:
    Shu() {
        this->name = "Shu Itsuki";
        this->unit = "Valkyrie";
        this->agency = "Cosmic Production";
        this->rank = "E";
        this->dance = 380;
        this->vocal = 510;
        this->performance = 970;
        this->sanity = 50;
        this->integrity = 100;
    }
};