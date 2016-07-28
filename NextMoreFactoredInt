/*
Ricardo Sinclair
program finds the next smallest number to have more factors than number entered
Asks how # of queries
then what your initial number is
it will calculate the number of factors
and return the next value that has more factors than number entered
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Q 1000000
#define A 10000000

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    //ask for number of queries
    unsigned int queries;
    do
    {
        scanf("%d",&queries); 
    }
    while((queries > Q));
    
    
    for(unsigned int q = 0; q < queries; q++)
    {
    //ask for a, positive integer smaller than n
    unsigned int smaller_num;
    do
    {
        scanf("%d",&smaller_num);
    }
    while((smaller_num > A));
    
    //counter for number of factors
    unsigned int counter1 = 0;

    //find the number of factors
    for (unsigned int i = 1; i <= smaller_num; i++)
    {
        if (smaller_num%i == 0)
            counter1++;
    }
    
    //counter for number of factors
    unsigned int counter2 = 0;
    
    
    //initialize the next integer
    unsigned int bigger_num = smaller_num;
    
    //checking condition of number of factors
    while(counter2 <= counter1)
    {
        //increment bigger_num by one each iteration and reset counter2
        bigger_num += 1;
        counter2 = 0;
        
        //find the number of factors
        for(unsigned int i = 1; i <= bigger_num; i++)
        {
            if(bigger_num%i == 0)
            {
                counter2++;
            }
        }
    }
    
    
    //print next smallest integer found
    printf("%i\n", bigger_num);
    
    }
    return 0;
}
