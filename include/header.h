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

#define get_word(A, B) get(A, B)

typedef struct instance_s {
    char **ing;
} instance_t;

int analyse_buff(instance_t *inst, char *buff_user, int read);

#endif
