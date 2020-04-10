/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** save.c
*/

#include "../include/header.h"


int number_digits(int nbr)
{
    int n = 1;
    int po = 10;

    if (nbr < 0)
        nbr = -nbr;
    while (nbr >= po) {
        n++;
        if (po > 214748364)
            break;
        po *= 10;
    }
    return (n);
}

char *my_itc(int nbr)
{
    int len = number_digits(nbr);
    char *result;

    result = malloc(sizeof(char) * len);
    result[len] = '\0';
    while (len--) {
        result[len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (result);
}

void save_again(instance_t *inst, char *buff)
{
    int fd = open("./.save", O_CREAT | O_RDWR);

    buff = strcat(buff, "pasta = ");
    buff = strcat(buff, my_itc(inst->pasta));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "olive = ");
    buff = strcat(buff, my_itc(inst->olive));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "pepper = ");
    buff = strcat(buff, my_itc(inst->pepper));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "ham = ");
    buff = strcat(buff, my_itc(inst->ham));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "cheese = ");
    buff = strcat(buff, my_itc(inst->cheese));
    write(fd, buff, strlen(buff));
}

void save(instance_t *inst)
{
    char *buff = malloc(sizeof(char) * 1000);
    int i = 0;

    buff = strcpy(buff, "tomato = ");
    buff = strcat(buff, my_itc(inst->tomato));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "dough = ");
    buff = strcat(buff, my_itc(inst->dough));
    buff = strcat(buff, "\n");
    buff = strcat(buff, "onion = ");
    buff = strcat(buff, my_itc(inst->onion));
    buff = strcat(buff, "\n");
    save_again(inst, buff);
}