#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* tree_writer(int n){
    FILE* fl;
    fl = fopen("dz", "w");
    char* per_str = (char*)malloc(sizeof(char) * (n + 1));
    char* vtor_str = (char*)malloc(sizeof(char) * (n + 1));
    char* now = (char*)malloc(sizeof(char) * (n + 3));
    char* new_str = (char*)malloc(sizeof(char) * (2 * n - 1));
    for (int i = 0; i < n; i ++){
        per_str[i] = ' ';
        vtor_str[i] = ' ';
        new_str[i] = ' ';
        now[i] = ' ';
    }
    per_str[n - 1] = '*';
    per_str[n] = '\0';
    vtor_str[n - 1] = '^';
    vtor_str[n] = '\0';
    new_str[n - 2] = '^';
    new_str[n - 1] = '|';
    new_str[n] = '^';
    new_str[2 * n - 2] = '\0';
    now[n + 2] = '\0';
    fprintf(fl, "%s %d", per_str, 10);
    fprintf(fl, "%s %d", vtor_str, 10);
    fprintf(fl, "%s %d", new_str, 10);
    for (int i = 0; i < n - 2; i ++){
        new_str[n - 3 - i] = '^';
        new_str[n + 1 + i] = '^';
        fprintf(fl, "%s %d", new_str, 10);
    }
    now[n - 3] = '_';
    now[n - 2] = '_';
    now[n - 1] = ' ';
    now[n] = '_';
    now[n + 1] = '_';
    now[n + 2] = '\0';
    fprintf(fl, "%s", new_str);
    fclose(fl);
    free(per_str);
    free(vtor_str);
    free(new_str);
    free(now);
}
