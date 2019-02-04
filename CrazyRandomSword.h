/*
 * File:   CrazyRandomSword.h
 * Author: Joshua Williams <jaw15j@my.fsu.edu>
 * 
 * Created on February 3, 2019, 2:50 PM
 */

#include <string>
#include "Weapon.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines behavior of a crazy random sword (hitpoint = random integer
 * between 7 and 100, ignores a random amount of integer armor points,
 * ranging from 2 to a third of the armor points
 */

class CrazyRandomSword : public Weapon {
public:
        CrazyRandomSword() : Weapon("CrazyRandomSword", GetRandNumber()) {//Calls Weapon(name, hit)
	}

        virtual ~CrazyRandomSword() {};
        virtual double hit(double armor);
private:
	int GetRandNumber();
};


