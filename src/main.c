/*
** EPITECH PROJECT, 2019
** src
** File description:
** main.c
*/

#include "../include/header.h"

char *str_infile(char *path);

void write_infile(char *str);

char *get_str(char **av)
{
    char *str;
    if (strcmp(av[1], "-s") == 0) {
        str = malloc(sizeof(char) * strlen(av[2]));
        str = strcpy(str, av[2]);
        return (str);
    } else if (strcmp(av[1], "-f") == 0)
        return (str_infile(av[2]));
}

char *str_infile(char *path)
{
    char *buff = malloc(sizeof(char) * 10000);
    int fd = open(path, O_RDONLY);

    if (fd == -1)
      exit (84);
    read(fd, buff, 10000);
    close (fd);
    return (buff);
}

int main(int ac, char **av)
{
    char *str;
    int nbr = 0;
 
    if (ac != 4)
        return (84);
    nbr = (atoi(av[3]) < 26 ? atoi(av[3]) : atoi(av[3]) % 26);
    str = get_str(av);
    printf("%s\n", str);
    write_infile(str);
    return (0);
}
