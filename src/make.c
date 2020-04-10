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
    inst->pepper -= 8;
}

int make_pizzainter(instance_t *inst, char *buff_user)
{
    if (inst->pepper < 8) {
        printf("'make pizza': not enough pepper");
        return (0);
    }
    if (inst->ham < 4) {
        printf("'make pizza': not enough ham");
        return (0);
    }
    if (inst->cheese < 3) {
        printf("'make pizza': not enough cheese");
        return (0);
    }
    return (1);
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
    if (make_pizzainter(inst, buff_user) == 0)
        return;
    make_pizzaagain(inst, buff_user);
}