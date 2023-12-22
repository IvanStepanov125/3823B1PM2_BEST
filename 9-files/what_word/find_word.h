#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int poisk(char* strok, char* podstroka){
    int mraz = fmin(strlen(strok), strlen(podstroka));
    int mraz1 = fmax(strlen(strok), strlen(podstroka));
    if (mraz1 - mraz > 1)
        return 0;
    for (int i = 0; i < mraz; i++){
        if (strok[i] != podstroka[i])
            return 0;
    }
    return 1;
}

void zapis_podchet(char** slovar, char* t, int* col){
    t[0] = (char)tolower(t[0]);
    for(int i = 0; i < 1000; i++){
        if ((strcmp(slovar[i], t) == 0) || (poisk(slovar[i], t) == 1)){
            col[i] ++;
            break;
            }
        else if (slovar[i][0] == '0'){
            slovar[i] = t;
            col[i] ++;
            break;
            }
    }
}

char* get_word(char filename[], unsigned int how_many_times){
    int col[1000];
    char** slovar = malloc(sizeof(char*) * 1000);
    for(int i = 0; i < 1000; i++){
        col[i] = 0;
        char* slovo = malloc(sizeof(char) * 150);
        for (int j = 0; j < 150; j++){
            slovo[j] = '0';
        }
        slovar[i] = slovo;
    }
    FILE* tr;
    tr = fopen(filename, "r");
    while (feof(tr) == 0){
        char* sl = malloc(sizeof(char*) * 150);
        fscanf(tr, "%s",sl);
        zapis_podchet(slovar, sl, col);
    }
    for (int i = 0; i < 1000; i ++){
        char* base = malloc(150);
        base = slovar[i];
        if ((col[i] == how_many_times) && (strcmp(slovar[i], "of") != 0))
            return slovar[i];
    }
    return 0;
}
