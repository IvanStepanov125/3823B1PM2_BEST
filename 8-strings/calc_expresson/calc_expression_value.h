#include <math.h>
#include <string.h>

int calculate_expression(char expression[]){
    int size = strlen(expression);
    int otv = 0;
    int flag = 1;
    for (int i = 0; i < size; i++){
        if (expression[i] == "+")
            flag = 1;
        else if (expression[i] == "-")
            flag = 2;
    
        if ((flag == 1) && expression[i] != "+")
            otv += expression[i];
        else if ((flag == 2) && expression[i] != "-")
            otv -= expression[i];
    }
    return otv;
}
