#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2){
    if (s1 && s2){
        int l1 = mx_strlen(s1);
        int l2 = mx_strlen(s2);
        char *arr = mx_strnew(l1 + l2);
        arr = mx_strdup(s1);
        arr = mx_strcat(arr, s2);
        return arr;
    }
    else if(s1) return mx_strdup(s1);
    else if(s2) return mx_strdup(s2);
    else return NULL;
}
