#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int main(int argc, char const *argv[])
{
    statistic s_char;
    s_char.strength = 90;
    s_char.intelligence = 100;
    s_char.wisdom = 75;
    s_char.agility = 87;
    s_char.endurance = 95;
    printf("Les statistiques du joueur sont \n Force : %d \n Intelligence : %d \n Sagesse : %d \n Agilité : %d \n Endurance : %d \n ",s_char.strength,s_char.intelligence,s_char.wisdom,s_char.agility,s_char.endurance );
    return 0;
}
