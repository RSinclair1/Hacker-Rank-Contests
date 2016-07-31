/*
Team Tripod (Current CS50xMiami Students)
Ricardo Sinclair
Yamilette Ayala
Elizabeth Evans
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask user for size of square x
    int height = GetInt();
    if ((height%2 == 0) || (height < 3 || height > 23))
    {
        return 1;
    }
    
    
    //print first line of all *
    for(int i = 0; i < height; i++)
    {
        printf("*");
    }
    
    printf("\n");
    
    //print top half of x's
    for(int i = 0, k = ((height/2) - 1); i < k; i++)
    {
        for(int m = 0; m < height; m++)
        {
            if(m == 0)
            {
                printf("*");
            }
            else if(m == i + 1)
            {
                printf("*");
            }
            else if(m == height - 2 - i)
            {
                printf("*");
            }
            else if(m == height - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    
    
    //print middle line with the one * in the middle
    for(int i = 0; i < height; i++)
    {
        if((i == 0) || (i == (height -1)/2 ) || (i == height - 1))
            printf("*");
        else
            printf(" ");
    }
    
    printf("\n");
    
    //print bottom half x's
    for(int i = 0, k = ((height/2) - 1); i < k; i++)
    {
        for(int m = 0; m < height; m++)
        {
            if(m == 0)
            {
                printf("*");
            }
            else if(m == ((height - 1)/2 - 1 - i))
            {
                printf("*");
            }
            else if(m == ((height - 1)/2 + 1 + i))
            {
                printf("*");
            }
            else if(m == height - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    
    //print last line of all *
    for(int i = 0; i < height; i++)
    {
        printf("*");
    }
    
    printf("\n");
    
    
}


            
            
