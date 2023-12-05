#include <math.h>
#include <string.h>
#include <ctype.h>

int calculate_expression(char expression[]){
    int size = strlen(expression);
    int sum1 = 0;
    int sum2 = 0;
    int flag = 0;
    int chislo = 0;
    for (int i = 0; i < size; i++){
        if ((i >= 1) && (expression[i - 1] < 48) && (expression[i] < 48))
            return -1;
        else if ((expression[i] == '+') || (expression[i] == '-') || (i == size -1)){
            if (flag == 0){
                if (i == size -1)
                    chislo = chislo * 10 + ((int)expression[i] % 48);
                sum1 += chislo;
                flag = (int)expression[i]/45;
                chislo = 0;
                }
            else if (flag == 1){
                if (i == size -1)
                    chislo = chislo * 10 + ((int)expression[i] % 48);
                sum2 += chislo;
                flag = (int)expression[i]/45;
                chislo = 0;
                }
            }
        else
            chislo = chislo * 10 + ((int)expression[i] % 48);
    }
    return sum1 - sum2;
}
