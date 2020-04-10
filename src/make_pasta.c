/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** make_pasta.c
*/

#include "../include/header.h"

void make_pasta(instance_t *inst, char *buff_user)
{
    inst->tomato -= 5;
    inst->pasta -= 2;
    inst->olive -= 6;
    inst->cheese -= 3;
    inst->ham -= 4;
}

void check_frigo(instance_t *inst, char *buff_user)
{
    if (inst->tomato < 5) {
        printf("'make pasta': not enough tomato");
        return;
    }
    if (inst->pasta < 2) {
        printf("'make pasta': not enough pasta");
        return;
    }
    if (inst->olive < 6) {
        printf("'make pasta': not enough olive");
        return;
    }
    if (inst->cheese < 3) {
        printf("'make pasta': not enough cheese");
        return;
    }
    if (inst->ham < 4) {
        printf("'make pasta': not enough ham");
        return;
    }
    make_pasta(inst, buff_user);
}