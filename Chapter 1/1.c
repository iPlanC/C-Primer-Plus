/*
 * @Author: PlanC
 * @Date: 2020-09-07 16:32:09
 * @LastEditTime: 2020-09-07 16:35:07
 * @FilePath: \C Primer Plus\Chapter 1\1.c
 */
#include <stdio.h>

int main() {
    int inchs = 0;
    printf("input inchs\n");
    scanf("%d", &inchs);
    printf("%dinchs = %lfcm", inchs, 2.54 * inchs);
    return 0;
}
