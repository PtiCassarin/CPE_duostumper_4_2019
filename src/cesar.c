/*
** EPITECH PROJECT, 2020
** cesar.c
** File description:
** cesar.c
*/

#include "../include/header.h"

char new_letterless(char old_char, int n)
{
    if (old_char == 'a' && n == -1)
        return ('z');
    if (old_char == 'A' && n == -1)
        return ('Z');

    for (int i = n; i < 0; i++) {
        if (old_char == 'a' && i < 0) {
            old_char = 'z';
            i++;
        }
        if (old_char == 'A' && i < 0) {
            old_char = 'Z';
            i++;
        }
        old_char = old_char - 1;
    }

    return (old_char);
}

char new_letterplus(char old_char, int n)
{
    for (int i = n; i > 0; i--) {
        old_char = old_char + 1;
        if (old_char == 'z' && i > 0) {
            old_char = 'a';
            i--;
        }
        if (old_char == 'Z' && i > 0) {
            old_char = 'A';
            i--;
        }
    }

    return (old_char);
}

char *cesar(char *s, int n)
{
    int j = 0;
    char *new_str = malloc(sizeof(char) * (strlen(s) + 10));

    for(int i = 0; s[i] != '\0'; i += 1) {
        if ((s[i] >= 'A' || s[i] >= 'a') && (s[i] <= 'Z' || s[i] <= 'z') && n > 0)
            s[i] = new_letterplus(s[i], n);
        if ((s[i] >= 'A' || s[i] >= 'a') && (s[i] <= 'Z' || s[i] <= 'z') && n < 0)
            s[i] = new_letterless(s[i], n);
        new_str[j] = s[i];
        j++;
    }
    new_str[j] = '\0';

    return (new_str);
}
