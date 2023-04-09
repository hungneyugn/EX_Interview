/*
*File: findNumber.c
*Author: Nguyen Phi Hung
*Date: 18/03/2023
*Description: define functions which were declarated in header file
*/
#include<findNumber.h>

/*
*Function: findTwoNumberSumK
*Description: find two number whose sum is K
*Input: 
    arr: array of non-negative integers
    k : value of Sum
    length: length of array
Output:
     pairs of numbers whose sum is K
*/
void findTwoNumberSumK(uint8_t arr[],int k, int length)
{
    /*number of combinations of inputs is 2^length <=> 1<<length */
    for(int i = 0; i < (1 << length); i++)                 
    {
        uint8_t Sum = 0;                                
        uint8_t soPhanTu = 0;
        /*save two number whose sum is K*/   
        int TwoNumber[2];
        /*check in turn combinations*/                              
        for(int j = 0; j < length; j++)                 
        {
            /*check which number is selected in combination i*/
            if((i & (1<<j)) > 0)                        
            {
                /*Sum of selected numbers*/
                Sum += arr[j];                        
                TwoNumber[soPhanTu] = arr[j];          
                soPhanTu += 1;                        
            }
        }
        if(Sum == k && soPhanTu == 2) printf("(%d, %d) ",TwoNumber[0] ,TwoNumber[1]); 
    }
}