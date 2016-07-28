/*
Team Tripod (Current CS50xMiami Students)
Ricardo Sinclair
Yamilette Ayala
Elizabeth Evans
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


int main(void)
{
    //get string from user
    string input = GetString();
    
    // for (int i=0, j = strlen(input); i < j; i++)
    // {
    int i = 0;
        while ((input[i]) != '\0')
        {
            if(input[i] == ',')
            {
                printf(", ");
                //printf("%c", input[i]);
                //i++;
            }
            else if(input[i] == '.')
            {
                printf(". ");
                printf("%c", toupper(input[i + 1]));
                i++;
            }
            else
            {
                printf("%c", input[i]);
            }
        i++;
        }

    // }
    


return 0;
}
