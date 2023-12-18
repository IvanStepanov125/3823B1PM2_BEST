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
            if (strcmp(str, "smile") == 0){
                fputc('(', fl);
                fputc('n', fl);
                fputc('_', fl);
                fputc('n', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "uh...oh") == 0){//"uh...oh"
                fputc('(', fl);
                fputc('.', fl);
                fputc('_', fl);
                fputc('.', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "ouch") == 0){ // "ouch"
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "happy") == 0){//"happy"
                fputc('(', fl);
                fputc('^', fl);
                fputc('_', fl);
                fputc('^', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "happier") == 0){//"happier"
                fputc('*', fl);
                fputc('(', fl);
                fputc('^', fl);
                fputc('o', fl);
                fputc('^', fl);
                fputc(')', fl);
                fputc('*', fl);
            }
            else if (strcmp(str, "sad") == 0){//"sad"
                fputc('(', fl);
                fputc('!', fl);
                fputc('_', fl);
                fputc('!', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "bored") == 0){//"bored"
                fputc('(', fl);
                fputc('=', fl);
                fputc('_', fl);
                fputc('=', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "serious") == 0){//"serious"
                fputc('(', fl);
                fputc('o', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "wink") == 0){//"wink"
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "i messed it up") == 0){//"i messed it up"
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('-', fl);
                fputc(':', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "jealous") == 0){//"jealous"
                fputc('8', fl);
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
                fputc('8', fl);
            }
            else if (strcmp(str, "i love it") == 0){//"i love it"
                fputc('(', fl);
                fputc('*', fl);
                fputc('-', fl);
                fputc('*', fl);
                fputc(')', fl);
            }
            
            k = 0;
            
        }
    }
    fclose(fl);
}
