/*
 * File:        CrazyRandomSword.cpp
 * Author:      Joshua Williams <jaw15j@my.fsu.edu>
 *
 * Created on February 3, 2019, 7:35 PM
 *http://www.cplusplus.com/reference/cstdlib/rand/
 */

#include "CrazyRandomSword.h"
#include <time.h>
#include <stdlib.h>

double CrazyRandomSword::hit(double armor) {
        double damage;
	int third = armor / 3;
	srand(time(NULL));
	int randignore = rand() % third + 2;
	
	damage = hitPoints - (armor - randignore);

        if(damage < 0)
        {
                return 0;
        }

        return damage;
}

int GetRandNumber()
{
	srand(time(NULL));
	int randomnum = rand() % 100 + 7;
	
	return randomnum;
}
