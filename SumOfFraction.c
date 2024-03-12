#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int gcd = 1;

    int numer = numer2 * denom1 + numer1 * denom2;
    int denom = denom1 * denom2;

    for (int i = 1; i <= denom; i++) {
        if ((numer % i == 0) && (denom % i == 0)) gcd = i;
    }

    answer[0] = numer / gcd;
    answer[1] = denom / gcd;

    return answer;
}