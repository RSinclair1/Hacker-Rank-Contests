#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Colleen is turning  years old! She has  candles of various heights on her cake, and candle  has height . Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.

Given the  for each individual candle, find and print the number of candles she can successfully blow out.

Input Format

The first line contains a single integer, , denoting the number of candles on the cake. 
The second line contains  space-separated integers, where each integer  describes the height of candle .

Constraints

Output Format

Print the number of candles Colleen blows out on a new line.
*/

void sort(int values[], int n);//prototype

int main(void) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    //ask user for the number of candles, should be positive!
    unsigned int candle_num;
    do{
        printf("How many candles do you have? ");
        
        scanf("%d",&candle_num);
    }
    while(candle_num <= 0);

    //create an array of size candle_num
    int num_arr[candle_num];

    //ask user for all heights
    for(int i = 0; i < candle_num; i++)
    {
        scanf("%d", &num_arr[i]);
    }
    
    //use temp big num
    int big_num = num_arr[0];
    
    //search for biggest num
    for (int j = 0; j < candle_num; j++)
    {
            if (num_arr[j] > big_num)
            {
                big_num = num_arr[j];
            }
    }

    //initialize big num counter
    int counter = 0;
    
    //find how many times the biggest num appers
    for (int i = 0; i < candle_num; i++)
    {
        if(num_arr[i] == big_num)
            counter++;
    }
   
   
   printf("%i\n", counter);
    
    return 0;
}
