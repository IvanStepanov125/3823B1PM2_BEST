#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct BornDate {
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Pasport{
    char* name;
    char* surname;
    char gender; //M or F
    struct BornDate bornDate;
    char* country;
};

struct Person
{
    char driver_license;
    struct Pasport pasport;
    char* working_specialty;
};



unsigned char paper_please_game(struct Person* persons, unsigned char size){
    struct Person* now = malloc(sizeof(struct Person*));
    now = persons;
    int count = 0;
    for (int i = 0; i < size; i++){
        if ((now[i].driver_license == 'B') && ((strcmp(now[i].working_specialty, "programmist") == 0) || (strcmp(now[i].working_specialty, "majort") == 0) || (strcmp(now[i].working_specialty, "collective farmer") == 0))){
            if ((strcmp(now[i].pasport.country, "Arstocka") ==0) || (strcmp(now[i].pasport.country, "Arcanistan") == 0)){
                if (2023 - now[i].pasport.bornDate.year < 40)
                    count ++;
            }
        }
    }
    return count;
}
