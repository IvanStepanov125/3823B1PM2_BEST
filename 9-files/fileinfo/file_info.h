#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

unsigned int get_fileinfo(char filename[], unsigned int* abzac_num, unsigned int* num_word){
    FILE* tr;
    tr = fopen(filename, "r");
    printf(tr);
    unsigned int col_slov = 0;
    while (feof(tr) == 0){
        char* sl = malloc(sizeof(char*) * 150);
        fscanf(tr, "%s", sl);
        if (isdigit(sl[0]) == 0)
            col_slov ++;
    }
    rewind(tr);
    int flag = 0;
    unsigned int col_abz = 1;
    unsigned int col_bait = 0;
    while (feof(tr) == 0){
        if ((fgetc(tr) == '\n') && (flag == 0)){
            col_abz ++;
            flag = 1;
        }
        else
            flag = 0;
        col_bait ++;
    }
    *abzac_num = col_abz;
    *num_word = col_slov;
    col_bait --;
    return col_bait;
}
