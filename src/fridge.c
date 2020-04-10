/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** fridge.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int fridge(char **contenant)
{
    int i = 0;
    int j = 0;

    for(; contenant[i][j] != NULL; j += 1) {
        
        for(; contenant[i] != '\0'; i += 1) {
            if(contenant[i] == ' ') {
                printf(" = ");
            }
            printf("%i", contenant[i]);
        }
    }
    return (0);
}

int main(void)
{
    fridge("fromage 60" "poulet 30");
    return (0);
}

