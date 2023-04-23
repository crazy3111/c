#include<stdio.h>
int main()
{
    // int x=2;
    // if(x=1){
    //     printf("x is equal to1");
    // }
    // else{
    //     printf("x is not equal to 1");
    // }
    // return 0;
    int x=1;
    while (x++<100)
    
    {
        x*=x;

        if(x<50)
        continue;
        if(x>50)
        break;
    }
    
}