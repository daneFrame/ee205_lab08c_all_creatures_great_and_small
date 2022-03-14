///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab08c-all-creatures-great-and-small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   13_MAR_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); //Refactor to include Unit of Measure
    myFirstAnimal.printInfo();
    return 0;
}
