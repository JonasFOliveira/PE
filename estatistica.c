#include "estatistica.h"
#include <stdio.h>
int max = 0;
int min = 10;
float med = 0;

int maxfun(int *arr, int n){
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
        max = arr[i];
        }
    }
    return max;
}
float medfun(int *arr, int n){
    for (int i = 0; i < n; i++){
        med += (arr[i]/n);
    }
    return med;
}   
int minfun(int *arr, int n){
    for (int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}