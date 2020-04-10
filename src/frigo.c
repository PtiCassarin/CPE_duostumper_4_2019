/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** frigo.c
*/

#include "../include/header.h"

void display_frigo(instance_t *inst)
{
    printf("tomato = %d\n", inst->tomato);
    printf("dough = %d\n", inst->dough);
    printf("onion = %d\n", inst->onion);
    printf("pasta = %d\n", inst->pasta);
    printf("olive = %d\n", inst->olive);
    printf("pepper = %d\n", inst->pepper);
    printf("ham = %d\n", inst->ham);
    printf("cheese = %d\n", inst->cheese);
}
