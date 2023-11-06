int maxmin(int input[], int size){
    int minim = -100000;
    for (int i = 1; i < size - 1; i++){
        if ((input[i] < input[i - 1]) && (input[i] < input[i + 1])){
            if (input[i] > minim)
                minim = input[i];
        }
    }
    if ((input[0] < input[1]) && (input[0] > minim))
        minim = input[0];

    if ((input[size - 1] < input[size - 2]) && (input[size - 1] > minim))
        minim = input[size - 1];
        
    return minim;
}