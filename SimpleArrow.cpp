
/* 
 * File:   SimpleArrow.cpp
 * Author: Joshua Williams <jaw15j@my.fsu.edu>
 *  
 *http://www.cplusplus.com/reference/cstdlib/rand/
 */

#include "SimpleArrow.h"


double SimpleArrow::hit(double armor){
   double damage;
   if(armor < 40 && armor > 70)
   { 
    	damage = hitPoints;
   }
   else
   {
	damage = hitPoints - (armor * 0.5);
   }

    if(damage < 0){
        return 0;
    }
    return damage;
}

