/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** init.c
*/

#include "../include/header.h"

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
    char *buff = NULL;
    int fd = 0;

    fd = open("./.save", O_RDONLY);
    if (fd == -1) {
        init_value(inst);
        return;
    }
    inst->tomato = mygetnbr(get_next_line(fd));
    inst->dough = mygetnbr(get_next_line(fd));
    inst->onion = mygetnbr(get_next_line(fd));
    inst->pasta = mygetnbr(get_next_line(fd));
    inst->olive = mygetnbr(get_next_line(fd));
    inst->pepper = mygetnbr(get_next_line(fd));
    inst->ham = mygetnbr(get_next_line(fd));
    inst->cheese = mygetnbr(get_next_line(fd));
    free(buff);
}

void init_frigo(instance_t *inst)
{
    load_file(inst);
}
