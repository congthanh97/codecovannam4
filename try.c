#include <stdio.h>
#include <stdlib.h> 
void try(int i, int len, int X[])
{
    int val;    
    for (val = 1; val >=0; val--)      
    {
        X[i] = val;
        if (i == (len-1)) 
        {
            for(int j = 0 ; j <len; j++)         
            {
                printf("%d", X[j]);
            }
            printf("\n");
        }
        else             
        {
            try(i+1, len, X);
        }
    }
}
 
 
int main()
{
    int len;
    scanf("%d", &len);
    int X[len];     
    try(0, len, X);  
    return 0;
}