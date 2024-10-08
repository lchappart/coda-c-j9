#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"

void fill_struct(character *perso)
{ 
    perso->strength = 90;
    perso->intelligence = 100;
    perso->wisdom = 75;
    perso->agility = 87;
    perso->endurance = 95;
}

int main(int argc, char const *argv[])
{
    character *perso = malloc(sizeof(*perso));
    perso->name = malloc((strlen("Gandalf")) * sizeof(char));
    strcpy(perso->name, "Gandalf");
    fill_struct(perso);
    printf("Les statistiques du joueur %s sont:\n Force : %d\n Intelligence : %d\n Sagesse : %d\n Agilité : %d\n Endurance : %d\n",
           perso->name, perso->strength, perso->intelligence, perso->wisdom, perso->agility, perso->endurance);
    free(perso->name);
    free(perso);
    return 0;
}
