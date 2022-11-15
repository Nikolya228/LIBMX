#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *temp = malloc(n + 1);
    size_t i = 0;

    while (i < n){
        temp[i] = s1[i];
        i++;
    }
    temp[i + 1] = '\0';
    return temp;
}
