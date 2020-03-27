/*
** EPITECH PROJECT, 2020
** cesar.c
** File description:
** cesar.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void cesar(char *str, int n)
{    
    for(int i = 0; str[i] != '\0'; i += 1) {
        if((str[i] >= 'A' || str[i] >= 'a') && (str[i] <= 'Z' || str[i] <= 'z')) {
                str[i] = str[i] - n;
                printf("%c", str[i]);
        }
         else
            printf("%c", str[i]);
    }
}   


int main(int ac, char **av)
{
    cesar(av[1], av[2][0]);
}
