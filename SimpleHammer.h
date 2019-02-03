/* 
 * File:	SimpleHammer.h
 * Author: Joshua Williams <jaw15j@my.fsu.edu
 * 
 * Created on February 3, 2019, 2:30 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines behavior of a simple hammer (hitpoint = 25, ignores all armor
 * points if armor is less than 30)
 */

class SimpleHammer : public Weapon {
public:
	SimpleHammer() : Weapon("Simple Hammer", 25.0) {//Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
	}
	
	virtual ~SimpleHammer() {};
	virtual double hit(double armor);
};
