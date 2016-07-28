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
    //from ther user, get balance, rate, and years respectively
    float balance = GetFloat();
    float rate = GetFloat();
    float years = GetFloat();
    
    //calculate the compound interest with number of time compounded a year set to 1
    float ending_balance = (balance * ( pow(1 + rate, years)) );
    
    
    
    //print out balance at end of years rounded to the nearest cent
    printf("%0.2f\n", (ending_balance));
    
return 0;
}
