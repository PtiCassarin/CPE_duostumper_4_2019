/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2019
** File description:
** write.c
*/

#include "../include/header.h"
#include <sys/stat.h>

void write_infile(char *str)
{
    char *file = "./crypt";
    mode_t mode = 0004;
    int fd =  open(file, O_CREAT | O_WRONLY);
    write(fd, str, strlen(str));
    chmod(file, mode);
}