#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sol = 0;
    while(n > 0){
        sol += n % 10;
        n /= 10;
    }
    return sol;
}