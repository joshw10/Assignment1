/*
 * File:	SimpleHammer.cpp
 * Author:	Joshua Williams <jaw15j@my.fsu.edu>
 *
 * Created on February 3, 2019, 2:35 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	double damage;
	if (armor < 30)
	{
		damage = hitPoints;
	}
	else
	{
		damage = hitPoints - armor;
	}

	if(damage < 0)
	{
		return 0;
	}
	
	return damage;
}
