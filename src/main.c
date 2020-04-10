/*
** EPITECH PROJECT, 2019
** src
** File description:
** main.c
*/

#include "../include/header.h"

int mygetnbr(char *str)
{
    char *new_str = malloc(sizeof(char) * (100));
    int j = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            new_str[j++] = str[i];
    }
    new_str[j] = '\0';
    return (atoi(new_str));
}

char *add_0finale(char *buff_user)
{
    int i = 0;

    while (buff_user[i] != '\n')
        i++;
    buff_user[i] = '\0';
    return (buff_user);
}

int get_enteruser(instance_t *inst, char *buff_user, int read)
{
    buff_user = add_0finale(buff_user);
    if (strcmp(buff_user, "exit") == 0) {
        free(buff_user);
        return (0);
    }
    analyse_buff(inst, buff_user, read);
    return (1);
}

int main(int ac, char **av)
{
    instance_t *inst = malloc(sizeof(instance_t));
    int nbr_read = 0;
    size_t size = 100;
    char *buff_user = NULL;
    init_frigo(inst);

    do {
        buff_user = malloc(sizeof(char) * 1000);
    }while (((nbr_read = getline(&buff_user, &size, stdin)) > -1) &&
    get_enteruser(inst, buff_user, nbr_read) == 1);
    save(inst);
    return (0);
}
