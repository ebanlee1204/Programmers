#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long i = 1;
    long long j = 0;
    while(n / i != 0){
        i *= 10;
        j++;
    }
    
    int* answer = (int*)malloc(sizeof(int) * j);
    
    i = 0;
    
    while(j > 0){
        answer[i] = n % 10;
        n /= 10;
        i++;
        j--;
    }
    
    return answer;
}