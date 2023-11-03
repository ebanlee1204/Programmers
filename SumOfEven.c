#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sol = 0;
    while(n > 0){
        if(n % 2 == 0) sol += n;
        n--;
    }
    return sol;
}