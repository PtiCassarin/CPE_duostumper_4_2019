/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** init.c
*/

#include "../include/header.h"

char *stock_fr(instance_t *inst, char *str)
{
    str = add_0finale(str);
    if (strcmp(get(str, 0), "tomato") == 0) {
        printf("%s\n", str);
    }
}

void init_value(instance_t *inst)
{
    inst->tomato = 50;
    inst->dough = 50;
    inst->onion = 50;
    inst->pasta = 50;
    inst->olive = 50;
    inst->pepper = 3;
    inst->ham = 50;
    inst->cheese = 50;
}

size_t stats_octet(char *path)
{
    struct stat stats;

    if (stat(path, &stats) == -1)
        return (4);
    return stats.st_size;
}

void load_file(instance_t *inst)
{
    char *buff = malloc(sizeof(char) * 10000);
    char *nbr = malloc(sizeof(char) * 100);
    int fd = 0;
    int j = 0;

    fd = open("./.save", O_RDONLY);
    if (fd == -1) {
        init_value(inst);
        return;
    }
    // read(fd, buff, stats_octet("./.save"));
    // printf("%s\n", buff);
    // for (int i = 0; buff[i]; i++) {
    //     for (; buff[i] != '\n' && buff[i]; i++) {
    //         nbr[j++] = buff[i];
    //     }
    //     nbr[j] = '\0';
    //     stock_fr(inst, nbr);
    //     nbr = malloc(sizeof(char) * 100);
    // }
    init_value(inst);
    free(buff);
}

void init_frigo(instance_t *inst)
{
    load_file(inst);
}
