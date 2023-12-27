#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Patient
{
    char name[10];
    struct Patient* nextPatient;
};



unsigned char get_queue_len(struct Patient* persons){
    struct Patient* now = malloc(sizeof(struct Patient));
    now = persons;
    int count = 1;
    while (now->nextPatient != NULL){        
        now = now->nextPatient;
        count ++;
    }
    return count;
}
