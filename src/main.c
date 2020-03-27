/*
** EPITECH PROJECT, 2019
** src
** File description:
** main.c
*/

#include "../include/header.h"

char *str_infile(char *path)
{
    char *buff = malloc(sizeof(char) * 10000);
    int fd = open(path, O_RDONLY);

    read(fd, buff, 10000);
    printf("%s\n", buff);
    return (buff);
}

int main(int ac, char **av)
{
    char *str;
    if (ac != 3)
        return (84);
    str = str_infile(av[1]);
    return (0);
}