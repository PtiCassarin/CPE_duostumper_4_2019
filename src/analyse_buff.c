/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** analyse_buff.c
*/

#include "../include/header.h"

int invalid_ingr(char *str)
{
    if (strcmp("tomato", str) == 0)
        return (1);
    if (strcmp("dough", str) == 0)
        return (1);
    if (strcmp("onion", str) == 0)
        return (1);
    if (strcmp("pasta", str) == 0)
        return (1);
    if (strcmp("olive", str) == 0)
        return (1);
    if (strcmp("pepper", str) == 0)
        return (1);
    if (strcmp("ham", str) == 0)
        return (1);
    if (strcmp("cheese", str) == 0)
        return (1);
    return (0);
}

char *get_word(char *str, int key)
{
    int i = 0;
    int space = 0;
    char *new_word = malloc(sizeof(char) * (strlen(str) + 1));
    int j = 0;

    while (str[i] && space < key) {
        if (str[i] == ' ')
            space++;
        i++;
    }
    while (str[i] != ' ' && str[i]) {
        new_word[j] = str[i];
        i++;
        j++;
    }
    new_word[j] = '\0';
    return (new_word);
}

void other_output(char *b)
{
    if (strcmp(get(b, 0), "addToFridge") == 0 && invalid_ingr(get(b, 1)) == 0) {
        printf("'%s': Invalid operation\n", b);
        return;
    }
}

void error_output(char *buff_user)
{
    if (buff_user[0] == 'm' && buff_user[1] == 'a' && buff_user[2] == 'k' &&
    buff_user[3] == 'e' && buff_user[4] == ' ') {
        printf("'");
        for (int i = 5; buff_user[i]; i++) {
            printf("%c", buff_user[i]);
        }
        printf("' unknown\n");
    } else {
        other_output(buff_user);
    }
}

int analyse_buff(instance_t *inst, char *bu, int read)
{
    if (read == 1)
        return (1);
    if (strcmp(bu, "make pizza") == 0) {
        make_pizza(inst, bu);
        return (1);
    }
    if (strcmp(bu, "make pasta") == 0) {
        make_pasta(inst, bu);
        return (1);
    }
    if (strcmp(get(bu, 0), "disp fridge") == 0) {
        make_pizza(inst, bu);
        return (1);
    }
    if (strcmp(get(bu, 0), "addToFridge") == 0 && invalid_ingr(get(bu, 1))) {
        make_pizza(inst, bu);
        return (1);
    }
    error_output(bu);
    return (0);
}
