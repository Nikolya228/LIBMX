#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c){
    char *newStr = malloc(1);

    if (*s != c){
        newStr[0] = c;
    }

    char *pp;
    char *qq;
    unsigned int sepCount;

    newStr = mx_strjoin(newStr, s);

    for ( pp = newStr, sepCount = 0; *pp; pp++ )
    {
         if ( c == *pp ) sepCount++;
    }

    char **result = malloc((2 + sepCount) * sizeof( *result ));
    result[0] = newStr;
    pp = newStr;
    sepCount = 0;

    for ( ;; )
    {
        qq = mx_strchr( pp, c );
        if ( NULL == qq ) break;
        if(*qq == *(qq + 1) || *(qq + 1) == '\0'){
            *qq = '\0';
            pp = qq + 1;
            continue;
        } 
        *qq = '\0';
        pp = qq + 1;
        result[ sepCount ] = pp;
        sepCount++;
    }

    return result;
}
