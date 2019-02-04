/* 
 * File:        SimpleArrow.h
 * Author: Joshua Williams <jaw15j@my.fsu.edu
 * 
 * Created on February 3, 2019, 11:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEARROW_H
#define SIMPLEARROW_H

/**
 * Defines behavior of a simple arrow (hitpoint = 50, ignores all armor
 * points if armor is less than 40 and greater than 70. If armor is between 40 and 70
 * ignore half of armor)
 */

class SimpleArrow : public Weapon {
public:
        SimpleArrow() : Weapon("Simple Arrow", 50.0) {//Calls Weapon(name, hitpoints) constructor with values Simple Arrow and 50.0
        }

        virtual ~SimpleArrow() {};
        virtual double hit(double armor);
};

