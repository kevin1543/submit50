#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int he = get_int("Height: ");
    
    while ( 1 > he || he >8 )
    {
        int h = get_int("Height: ");
        he = h;
    }
    int y = he;
    while (he!=0)   
    {
        int x=he-1;
        while(x!=0) 
    {
             printf(" ");
             x=x-1;
    }
     
      
       int z= y-he;
        while(z>0)
        {
            printf("#");
            z=z-1;
        }
        printf("#\n") ;  
        he=he-1;
        
        
    }
    
}
