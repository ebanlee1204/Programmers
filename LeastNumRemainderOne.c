#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 2;
    while(i < n){
        if(n % i == 1) return i; 
        i++;
    }
    return 0;
}