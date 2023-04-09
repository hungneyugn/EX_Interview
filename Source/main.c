/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 18/03/2023
*Description: find all pairs of numbers in the array whose sum is K, using bitmask
*/
#include<findNumber.h>

int main()
{
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int k = 6;
    /*calculate the number of elements in the array*/
    int length = sizeof(arr) / sizeof(uint8_t); 
    findTwoNumberSumK(arr, k, length);
    return 0;
}