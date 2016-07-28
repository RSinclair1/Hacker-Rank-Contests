#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. During his last hike, he took exactly  steps. For every step he took, he noted if it was an uphill or a downhill step. Gary's hikes start and end at sea level. We define the following terms:

A mountain is a non-empty sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a non-empty sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

Input Format

The first line contains an integer, , denoting the number of steps in Gary's hike. 
The second line contains a single string of  characters. Each character is  (where U indicates a step up and D indicates a step down), and the  character in the string describes Gary's  step during the hike.

Constraints

Output Format

Print a single integer denoting the number of valleys Gary walked through during his hike.
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    //get number of steps
    unsigned int num_steps;
    do{
        scanf("%d",&num_steps);
    }
    while(num_steps <= 0);
    
    char* movement = (char*)malloc(num_steps * sizeof(char));
    
    //char* movement;
    scanf("%s", movement);
    
    int height = 0;
    int temp = 0;
    
    //initialize valley counter = 0;
    int valley_counter = 0;
    
    

        
    //itirate through the string, U will add one to height, D will subtract one from height
    for(char* t = movement; *t != '\0'; t++)
    {
        if (*t == 'U')
            {
                height += 1;
            }
        else if (*t == 'D')
            {
                height -= 1;
            }
        
        //checking for sea level condition againts previous height and then updating previous height
        if (height == 0 && height > temp)
            {valley_counter++;}
            
        temp = height;
            
        
    }

    printf("%i\n", valley_counter);
    
    
    
    
    
    return 0;
}
