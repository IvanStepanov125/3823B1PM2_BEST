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
            if (strcmp(str, "smile") == 0)
                fprintf(fl, "%s\n", "(n_n)");
            else if (strcmp(str, "uh...oh") == 0)//"uh...oh"
                fprintf(fl, "%s\n", "(._.)");
            else if (strcmp(str, "ouch") == 0) // "ouch"
                fprintf(fl, "%s\n", "(>_<)");
            else if (strcmp(str, "happy") == 0)//"happy"
                fprintf(fl, "%s\n", "(^_^)");
            else if (strcmp(str, "happier") == 0)//"happier"
                fprintf(fl, "%s\n", "*(^o^)*");
            else if (strcmp(str, "sad") == 0)//"sad"
                fprintf(fl, "%s\n", "(!_!)");
            else if (strcmp(str, "bored") == 0)//"bored"
                fprintf(fl, "%s\n", "(=_=)");
            else if (strcmp(str, "serious") == 0)//"serious"
                fprintf(fl, "%s\n", "(o_o)");
            else if (strcmp(str, "wink") == 0)//"wink"
                fprintf(fl, "%s\n", "(-_o)");
            else if (strcmp(str, "i messed it up") == 0)//"i messed it up"
                fprintf(fl, "%s\n", "(-_-:)");
            else if (strcmp(str, "jealous") == 0)//"jealous"
                fprintf(fl, "%s\n", "8(>_<)8");
            else if (strcmp(str, "i love it") == 0)//"i love it"
                fprintf(fl, "%s\n", "(*-*)");
            k = 0;
        }
    }
    fclose(fl);
}
