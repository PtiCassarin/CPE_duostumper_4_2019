/*
** EPITECH PROJECT, 2020
** cesar.c
** File description:
** cesar.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char new_letter(char old_char, int n)
{
    for (int i = n; i > 0; i--) {
        old_char = old_char + 1;
        if (old_char == 'z' && i > 0) {
            old_char = 'a';
            i--;
        }
        if (old_char == 'Z' && i > 0) {
            old_char = 'a';
            i--;
        }
    }

    return (old_char);
}

char *cesar(char *str, int n)
{
    int j = 0;
    char *new_str = malloc(sizeof(char) * (strlen(str) + 10));

    for(int i = 0; str[i] != '\0'; i += 1) {
        if ((str[i] > 'A' || str[i] > 'a') && (str[i] < 'Z' || str[i] < 'z'))
            str[i] = new_letter(str[i], n);
        new_str[j] = str[i];
        j++;
    }
    new_str[j] = '\0';

    return (new_str);
}
