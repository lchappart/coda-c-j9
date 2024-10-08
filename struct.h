#ifndef __STRUCT__
#define __STRUCT__

#include <stdlib.h>
#include <stdio.h>

struct s_char
{
    int strength;
    int intelligence;
    int wisdom;
    int agility;
    int endurance;
};

typedef struct s_char statistic;

#endif