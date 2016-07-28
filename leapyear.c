/*
Team Tripod (Current CS50xMiami Students)
Ricardo Sinclair
Yamilette Ayala
Elizabeth Evans
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    //ask user for year
    int year = GetInt();
    
    //check input for leap year cases
    if(year%4 == 0)
    {
        if((year%400 != 0) && (year%100 == 0))
        {
            printf("Not Leap Year\n");
        }
        else
        {
            printf("Leap Year\n");
        }
    }
    else
    {
        printf("Not Leap Year\n");
    }
    
    
    
}
