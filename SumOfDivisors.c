#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 1;
    int sum = 0;
    while(n/i >= i){
        if(n % i == 0){
            sum += i;
            if(n/i != i) sum += n/i;
        }
        i++;
    }
    return sum;
}