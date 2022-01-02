/*

This is a simple tool I've built to aid me learn C

*/

#include <stdio.h>
#include <stdlib.h>

#define P2KG 0.453592

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Provide 1 Argument ONLY\n");

    }else{

        float mass = atof(argv[1]) * P2KG;
        printf("Mass in Kg = %f\n", mass);
    
    }
    
    return 0;
}
