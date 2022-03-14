///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab08c-all-creatures-great-and-small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   13_MAR_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include<string>

#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

enum Gender {
    UNKNOWN_GENDER, MALE, FEMALE
};

const float UNKOWN_WEIGHT = -1;

class Animal {
protected:
    static const std::string kingdom;
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKOWN_WEIGHT;
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
