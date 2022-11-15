#include "../inc/libmx.h"

char *mx_strstr(const char *s1, const char *s2) {
	char *s11 = (char *)s1;
    char *s22 = (char *)s2;
    	
    while (*s11) {
        if (!mx_strcmp(s11, s22))
            	return s11;
        s11++;
    }
    return 0;
}

