/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2019
** File description:
** write.c
*/

#include "../include/header.h"

void write_infile(char *str)
{
    int fd =  open("./crypt", O_CREAT | O_RDONLY);
    write(fd, str, strlen(str));
}