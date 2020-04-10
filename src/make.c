/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** make.c
*/

#include "../include/header.h"

void make_pizzaagain(instance_t *inst, char *buff_user)
{
    inst->tomato -= 5;
    inst->dough -= 1;
    inst->onion -= 3;
    inst->olive -= 8;
    inst->ham -= 4;
    inst->cheese -= 3;
}

void make_pizza(instance_t *inst, char *buff_user)
{
    if (inst->tomato < 5) {
        printf("'make pizza': not enough tomato");
        return;
    }
    if (inst->dough < 1) {
        printf("'make pizza': not enough dough");
        return;
    }
    if (inst->onion < 3) {
        printf("'make pizza': not enough onion");
        return;
    }
    if (inst->olive < 8) {
        printf("'make pizza': not enough olive");
        return;
    }
    if (inst->ham < 4) {
        printf("'make pizza': not enough ham");
        return;
    }
    if (inst->cheese < 3) {
        printf("'make pizza': not enough cheese");
        return;
    }
    make_pizzaagain(inst, buff_user);
}