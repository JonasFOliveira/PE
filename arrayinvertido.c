#include <stdio.h>


int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    /*for (int *p = (a+9); p >= a; p--){
        printf("%d ", *p);
    }*/
    
    int *p = (a+9);
    while(p >= a){
        printf("%d ", *p);
        p--;
    }
}
