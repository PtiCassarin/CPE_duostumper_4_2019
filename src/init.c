/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** init.c
*/

#include "../include/header.h"

void init_value(instance_t *inst)
{

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
    int fd = 0;

    fd = open("./.save", O_RDONLY);
    if (fd == -1) {
        init_value(inst);
        return;
    }
    read(fd, buff, stats_octet("./.save"));
    printf("%s\n", buff);
    free(buff);
}

void init_frigo(instance_t *inst)
{
    load_file(inst);
}
