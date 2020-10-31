#include<stdio.h>
int factorial(int n)
{
    int k;
    
    if(n <0)
    {
        k=0;
        printf("\n factorial does not exist, please try again/n");
        
      
    }
    else
    {
        int f=1;
        k=1;
        while(n)
        {
            f=f*n;
            n--;
        }
        printf("\n Factorial of the number is = %d",f);
    }
    return k;
     
}
int main()
{
    int n,k;
    do {printf("\n Enter the value of n:");
    scanf("%d",&n);
    k=factorial(n);
    } while(k!=0);
    return 0;
}
