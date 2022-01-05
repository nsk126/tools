/*

This is a simple tool I've built to aid me learn C

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LB2KG 0.453592
#define KG2LB 1/(0.453592)
#define F2C(f) (f-32)/1.8
#define C2F(c) (1.8*c)+32

int main(int argc, char const *argv[])
{
    if (strcmp(argv[1],"--h") == 0 || strcmp(argv[1],"--help") == 0)
    {
        printf("Usage: Converr [OPTION] [VALUE]\n");
        printf("\nOPTIONS expanded\n");
        printf("\t-lb2kg\n");
        printf("\t-kg2lb\n");
        printf("\t-f2c\n");
        printf("\t-cbf\n");
        
    } else if (argc != 3)
    {

        printf("Please follow the format: Executable [OPTION] [VALUE]\n");
    
    } else 
    {
        if (strcmp(argv[1],"-lb2kg") == 0)
        {
            float a = atof(argv[2]) * LB2KG;
            printf("In Kg = %f\n", a);

        }else if (strcmp(argv[1],"-kg2lb") == 0)
        {
            float a = atof(argv[2]) * KG2LB;
            printf("In Lb = %f\n", a);

        }else if (strcmp(argv[1],"-f2c") == 0)
        {
            float a = F2C(atof(argv[2]));
            printf("In C = %f\n", a);
            
        }else if (strcmp(argv[1],"-c2f") == 0)
        {
            float a = C2F(atof(argv[2]));
            printf("In F = %f\n", a);
            
        }else{
            
            printf("Error: argument presented was %s\n", argv[1]);
        }
           
        
    }
    
    
    return 0;
}
