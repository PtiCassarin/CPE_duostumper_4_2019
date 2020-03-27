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

char *str_infile(char *path);
void write_infile(char *str);
char *cesar(char *str, int n);

#endif
