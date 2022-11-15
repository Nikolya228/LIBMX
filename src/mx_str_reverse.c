#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    int len = mx_strlen(s);
    int count = 0;
    
    while (count <= len / 2) {
        mx_swap_char(&s[count], &s[len - 1]);
        count++;
        len--;
    }
}
