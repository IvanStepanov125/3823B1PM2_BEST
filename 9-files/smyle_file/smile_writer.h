#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void write_smile(char filename[], char smile_names[]){
    int len = strlen(smile_names);
    char str[50];
    for (int i = 0; i < 50; i++)
        str[i] = '0';
    FILE* fl;
    fl = fopen(filename, "w");
    int k = 0;
    for (int i = 0; i < len; i ++){
        if (smile_names[i] != ','){
            str[k] = smile_names[i];
            k ++;
        }
        if ((smile_names[i] == ',') || (i == len - 1)){ 
            i ++;
            str[k] = '\0';
            if ((str[0] == 's') && (strlen(str) == 5))//'smile'
                fprintf(fl, "%s%d", "(n_n)", 10);
            else if ((str[0] == 'u') && (strlen(str) == 7))//"uh...oh"
                fprintf(fl, "%s%d", "(._.)", 10);
            else if ((str[0] == 'o') && (strlen(str) == 4)) // "ouch"
                fprintf(fl, "%s%d", "(>_<)", 10);
            else if ((str[0] == 'h') && (strlen(str) == 5))//"happy"
                fprintf(fl, "%s%d", "(^_^)", 10);
            else if ((str[0] == 'h') && (strlen(str) == 7))//"happier"
                fprintf(fl, "%s%d", "*(^o^)*", 10);
            else if ((str[0] == 's') && (strlen(str) == 3))//"sad"
                fprintf(fl, "%s%d", "(!_!)", 10);
            else if ((str[0] == 'b') && (strlen(str) == 5))//"bored"
                fprintf(fl, "%s%d", "(=_=)", 10);
            else if ((str[0] == 's') && (strlen(str) == 7))//"serious"
                fprintf(fl, "%s%d", "(o_o)", 10);
            else if ((str[0] == 'w') && (strlen(str) == 4))//"wink"
                fprintf(fl, "%s%d", "(-_o)", 10);
            else if ((str[0] == 'i') && (strlen(str) == 14))//"i messed it up"
                fprintf(fl, "%s%d", "(-_-:)", 10);
            else if ((str[0] == 'j') && (strlen(str) == 7))//"jealous"
                fprintf(fl, "%s%d", "8(>_<)8", 10);
            else if ((str[0] == 'i') && (strlen(str) == 9))//"i love it"
                fprintf(fl, "%s%d", "(*-*)", 10);
            k = 0;
        }
    }
    fclose(fl);
}
