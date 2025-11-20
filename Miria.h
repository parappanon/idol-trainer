//
// Created by shu on 11/20/25.
//

#pragma once
#include "Idol.h"

class Miria: Idol {
    private:
    int cheerfulness;
    int innocence;
    public:
    Miria() {
        this->name = "Miria Akagi";
        this->unit = "Solo";
        this->agency = "3rd Agency";
        this->rank = "E";
        this->dance = 680;
        this->vocal = 650;
        this->performance = 500;
        this->cheerfulness = 100;
        this->innocence = 100;
    }
};