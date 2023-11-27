#include <math.h>
#include <stdlib.h>

int generator(int* mass, int tec, int size){
    mass[0] = 0;
    mass[1] = tec - size + 1;
    mass[2] = tec - size;
    mass[3] = tec - size - 1;
    mass[4] = tec - 1;
    mass[5] = tec + size - 1;
    mass[6] = tec + size;
    mass[7] = tec + size + 1;
    mass[8] = tec + 1;
    return *mass;
}

void dob_hod(int* arry, int raz, int poz){
    for (int i = 0; i < raz; i++){
        if (arry[i] == 0){
            arry[i] = poz;
            break;
        } 
    }
}

int repetition(int* arry, int raz, int poz){
    for (int i = 0; i < raz; i++){
        if (arry[i] == poz)
            return 0;
        if (arry[i] == 0){
            break;
        } 
    }
    return 1;
}

int tr(int size, int* arry, int raz, int* pic1, int tec, int* pozic, int fl){
    int flag = 0;
    int* vozmozhn1 = (int*)malloc(9 * sizeof(int));
    generator(vozmozhn1, tec, size);
    int ed = 0;
    int id = 0;
    for (int i = 1; i < 9; i ++){
        if (pic1[vozmozhn1[i]] == 1){
            int t = repetition(arry, raz, vozmozhn1[i]);
            flag += t;
            if (t){
                ed = vozmozhn1[i];
                if (i <= 4)
                    id = 8 + (i - 4);
                else 
                    id = i - 4;
                break;
            }
        }
    }
    if (flag == 0){
        return 1;
    }
    else {
        if (fl){
            pozic[0] = ed;
            pozic[1] = id;
            dob_hod(arry, raz, pozic[0]);
        }
        return 0;
    }    
}
int poisk(int* arry, int raz, int* pozic, int size, int* pic1){
    for (int i = 1; i < raz; i++){
        if (arry[i] == 0)
            return 0;
        else if ((raz - size >= arry[i]) && (arry[i] % size != (size - 1))){
            int t = 0;
            t = tr(size, arry, raz, pic1, arry[i], pozic, 1);
            if (t != 1){
                return 1;
            }
        }
    }
    return 0;
    }

// void f_n(int* pozic, int tec, int size, int* arry, int raz, int chekable_pos, int prev_pos){
//     if (repetition(arry, raz, chekable_pos)){
//         pozic[0] = chekable_pos;
//         pozic[1] = prev_pos;
//         dob_hod(arry, raz, pozic[0]);
//     }
// }

void f_1(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec - size + 1)){
        pozic[0] = tec - size + 1;
        pozic[1] = 5;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_2(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec - size)){
        pozic[0] = tec - size;
        pozic[1] = 6;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_3(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec - size - 1)){
        pozic[0] = tec - size - 1;
        pozic[1] = 7;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_4(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec - 1)){
        pozic[0] = tec - 1;
        pozic[1] = 8;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_5(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec + size - 1)){
        pozic[0] = tec + size - 1;
        pozic[1] = 1;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_6(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec + size)){
        pozic[0] = tec + size;
        pozic[1] = 2;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_7(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec + size + 1)){
        pozic[0] = tec + size + 1;
        pozic[1] = 3;
        dob_hod(arry, raz, pozic[0]);
    }
}

void f_8(int* pozic, int tec, int size, int* arry, int raz){
    if (repetition(arry, raz, tec + 1)){
        pozic[0] = tec + 1;
        pozic[1] = 4;
        dob_hod(arry, raz, pozic[0]);
    }
}

void search(int* pozic, int raz, int size, int* arry, int* pic1){
    int tec = pozic[0];
    
    if (pozic[1] == 0){
        if (pic1[tec - size + 1] == 1)
            f_1(pozic, pozic[0], size, arry, raz);

        else if (pic1[tec + 1] == 1)
            f_8(pozic, pozic[0], size, arry, raz);
        
        else if (pic1[tec + size + 1] == 1)
            f_7(pozic, pozic[0], size, arry, raz);
        }

    else if (pozic[0] == 0){
        if (pic1[1] == 1){
            f_8(pozic, 1, size, arry, raz);
        }
        else if (pic1[size] == 1){
            f_6(pozic, size, size, arry, raz);
        }
        else if (pic1[size + 1] == 1){
            f_7(pozic, size + 1, size, arry, raz);
        }
    }
    else if (pozic[0] == (raz - size)){
        if (pic1[raz - size + 1] == 1){
            f_8(pozic, size + 1, size, arry, raz);
        }
        else if (pic1[raz - 2 * size + 1] == 1){
            f_1(pozic, size + 1, size, arry, raz);
        }
        else if (pic1[raz - 2 * size] == 1){
            f_2(pozic, size + 1, size, arry, raz);
        } 
    }

    else if ((raz - size <= pozic[0]) && (pozic[0] <= (raz - 1))){
        if (pic1[tec + 1] == 1)
            f_8(pozic, tec, size, arry, raz);
        if (pic1[tec - size + 1] == 1)
            f_1(pozic, tec, size, arry, raz);
    }
    else if (pozic[0] % size == (size - 1)){
        if (pic1[tec - size] == 1)
            f_2(pozic, tec, size, arry, raz);
        else 
            pozic[1] = 9;
    }

    else if (tr(size, arry, raz, pic1, tec, pozic, 0) == 0){
        if (pozic[1] == 1){
            if(pic1[tec + size - 1] == 1)
                f_5(pozic, tec, size, arry, raz);

            else if (pic1[tec + size] == 1)
                f_6(pozic, tec, size, arry, raz);

            else if (pic1[tec - 1] == 1)
                f_4(pozic, tec, size, arry, raz);
            
            else if (pic1[tec - size - 1] == 1)
                f_3(pozic, tec, size, arry, raz);
            
            else if (pic1[tec + size + 1] == 1)
                f_7(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 2){
            if (pic1[tec + size] == 1)
                f_6(pozic, tec, size, arry, raz);

            else if (pic1[tec + size + 1] == 1)
                f_7(pozic, tec, size, arry, raz);

            else if (pic1[tec + size - 1] == 1)
                f_5(pozic, tec, size, arry, raz);
            
            else if (pic1[tec + 1] == 1)
                f_8(pozic, tec, size, arry, raz);
            
            else if (pic1[tec - 1] == 1)
                f_4(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 3){
            if (pic1[tec + size] == 1)
                f_6(pozic, tec, size, arry, raz);

            else if (pic1[tec + size + 1] == 1)
                f_7(pozic, tec, size, arry, raz);

            else if (pic1[tec + 1] == 1)
                f_8(pozic, tec, size, arry, raz);

            else if (pic1[tec + size - 1] == 1)
                f_5(pozic, tec, size, arry, raz);
            
            else if (pic1[tec - size + 1] == 1)
                f_1(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 4){
            if (pic1[tec - size + 1] == 1)
                f_1(pozic, tec, size, arry, raz);

            else if (pic1[tec + 1] == 1)
                f_8(pozic, tec, size, arry, raz);

            else if (pic1[tec + size + 1] == 1)
                f_7(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 5){
            if (pic1[tec - size] == 1)
                f_2(pozic, tec, size, arry, raz);

            else if (pic1[tec - size + 1] == 1)
                f_1(pozic, tec, size, arry, raz);
            
            else if (pic1[tec + 1] == 1)
                f_8(pozic, tec, size, arry, raz);

            else if (pic1[tec - size - 1] == 1)
                f_3(pozic, tec, size, arry, raz);

            else if (pic1[tec + size + 1] == 1)
                f_7(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 6){
            if (pic1[tec - size] == 1)
                f_2(pozic, tec, size, arry, raz);
            else if (pic1[tec - size - 1] == 1)
                f_3(pozic, tec, size, arry, raz);

            else if (pic1[tec - size + 1] == 1)
                f_1(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 7){
            if (pic1[tec - size - 1] == 1)
                f_3(pozic, tec, size, arry, raz);

            else if (pic1[tec - 1] == 1)
                f_4(pozic, tec, size, arry, raz);
            
            else if (pic1[tec - size] == 1)
                f_2(pozic, tec, size, arry, raz);

            else if (pic1[tec + size - 1] == 1)
                f_5(pozic, tec, size, arry, raz);

            else if (pic1[tec - size + 1] == 1)
                f_1(pozic, tec, size, arry, raz);
        }
        else if (pozic[1] == 8){
            if (pic1[tec - 1] == 1)
                f_4(pozic, tec, size, arry, raz);

            else if (pic1[tec + size - 1] == 1)
                f_5(pozic, tec, size, arry, raz);
    
            else if (pic1[tec - size - 1] == 1)
                f_3(pozic, tec, size, arry, raz);

            else if (pic1[tec + size] == 1)
                f_6(pozic, tec, size, arry, raz);

            else if (pic1[tec - size] == 1)
                f_2(pozic, tec, size, arry, raz);
        }
    }
    
    else if (tr(size, arry, raz, pic1, tec, pozic, 0)){
        int* vozmozhn = (int*)malloc(9 * sizeof(int));
        generator(vozmozhn, tec, size);
        int base = -1;
        for (int j = 1; j < 9; j++){
            if (pic1[vozmozhn[j]] == 1){
                base = tr(size, arry, raz, pic1, vozmozhn[j], pozic, 1);
                if (base == 0)
                    break;
            }
        }
        if (base == 0){
            pozic[2] += 1;
        }
        else if (poisk(arry, raz, pozic, size, pic1) == 1)
            pozic[2] += 1;

        else {
            pozic[1] = 9;
        }     
        
    }
}

void find_loops(int* pic, int size, int* num_loop, int* start_row, int* start_col, int* finish_row, int* finish_col){
    int* pic1 = (int*)malloc(size * sizeof(int));
    for (int k = 0; k < size; k ++)
        pic1[k] = pic[k];
    int start = -1;
    int raz = size;
    int new_size = sqrt(size);
    for (int i = 0; i < new_size; i++){
        if (pic1[i * new_size] == 1){
            start = i * new_size;
            break;
        }
    }
    if (start == -1){
        *num_loop = 0;
        *start_row = -1;
        *start_col = -1;
        *finish_row = -1;
        *finish_col = -1;
    }
    else {
        int* pozic = (int*)malloc(3 * sizeof(int));
        pozic[0] = start;
        pozic[1] = 0;
        pozic[2] = 0;
        int* arry = (int*)malloc(raz * sizeof(int));
        for (int i = 0; i < raz; i++)
            arry[i] = 0;
        while (pozic[1] != 9){
            search(pozic, raz, new_size, arry, pic1);     
        }

        int rez = pozic[0];
        int rez1 = pozic[2];
        *num_loop = pozic[2];
        *start_row = start / new_size;
        *start_col = start % new_size;
        *finish_row = pozic[0] / new_size;
        *finish_col = pozic[0] % new_size;
    }
}
