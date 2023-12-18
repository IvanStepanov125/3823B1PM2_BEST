#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* tree_writer(int n){
    FILE* fl;
    fl = fopen("dz.txt", "wb");
    for (int i = 0; i < n-1; i ++){
        fputc(' ', fl);
    }
    fputc('*', fl);
    fputc('\n', fl);
    for (int i = 0; i < n-1; i ++){
        fputc(' ', fl);
    }
    fputc('^', fl);
    fputc('\n', fl);
    int k = 0;
    for (int i = 0; i < n - 1; i ++){
        k ++;
        for (int j = 0; j < n - 2 - i; j++){
            fputc(' ', fl);
        }
        for (int j = 0; j < k; j ++){
            fputc('^', fl);
        }
        fputc('|', fl);

        for (int j = 0; j < k; j ++){
            fputc('^', fl);
        }
        fputc('\n', fl);
    }
    for (int j = 0; j < n - 3; j++){
            fputc(' ', fl);
        }
    fputc('_', fl);
    fputc('_', fl);
    fputc(' ', fl);
    fputc('_', fl);
    fputc('_', fl);

    fclose(fl);
    
    char* otv = malloc(sizeof(char) * 100);
    otv[0] = 'd';
    otv[1] = 'z';
    otv[2] = '.';
    otv[3] = 't';
    otv[4] = 'x';
    otv[5] = 't';
    otv[6] = '\0';
    
    return otv;
}
