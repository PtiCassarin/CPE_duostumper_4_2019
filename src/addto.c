/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** addto.c
*/

#include "../include/header.h"

void addto(instance_t *inst, char *str)
{
    int nbr = atoi(get_word(str, 2));
    if (strcmp(get_word(str, 1), "tomato") == 0)
        inst->tomato += nbr;
    if (strcmp(get_word(str, 1), "dough") == 0)
        inst->dough += nbr;
    if (strcmp(get_word(str, 1), "onion") == 0)
        inst->onion += nbr;
    if (strcmp(get_word(str, 1), "pasta") == 0)
        inst->pasta += nbr;
    if (strcmp(get_word(str, 1), "olive") == 0)
        inst->olive += nbr;
    if (strcmp(get_word(str, 1), "pepper") == 0)
        inst->pepper += nbr;
    if (strcmp(get_word(str, 1), "ham") == 0)
        inst->ham += nbr;
    if (strcmp(get_word(str, 1), "cheese") == 0)
        inst->cheese += nbr;
}