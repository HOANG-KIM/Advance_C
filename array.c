#include <stdio.h>

int maxvalue(int array[], int length){
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int minvalue(int array[], int length){
    int min = array[0];
    for (int i = 1; i < length; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

void mangTangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

void mangGiamDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
