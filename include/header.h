/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2019
** File description:
** header.h
*/

#ifndef HEADER_MY
#define HEADER_MY

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define get(A, B) get_word(A, B)

typedef struct instance_s {
    int tomato;
    int dough;
    int onion;
    int pasta;
    int olive;
    int pepper;
    int ham;
    int cheese;
} instance_t;

int analyse_buff(instance_t *inst, char *buff_user, int read);
void make_pasta(instance_t *inst, char *buff_user);
void make_pizza(instance_t *inst, char *buff_user);
void init_frigo(instance_t *inst);
char *add_0finale(char *buff_user);
void display_frigo(instance_t *inst);
void addto(instance_t *inst, char *str);
char *get_word(char *str, int key);

#endif
