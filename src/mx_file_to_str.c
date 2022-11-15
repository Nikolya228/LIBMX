#include "../inc/libmx.h"

char *mx_file_to_str(const char *file){
    int fp = open(file, O_RDONLY);
    if (fp < 0){
        return NULL;
    }
    char temp;
    int count = 0;

    while (read(fp, &temp, 1) > 0){
        count++;
    }
    close(fp);

    char *arr = mx_strnew(count);
    fp = open(file, O_RDONLY);
    count = 0;

    while(read(fp, &temp, 1) > 0){
        arr[count] = temp;
        count++;
    }
    close(fp);
    return arr;
}

