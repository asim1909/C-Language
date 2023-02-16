#include <stdio.h>
 
int main()
{
    int n, i;
 
    printf("Enter an integer: ");
    scanf("%d",&n);
 
    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
    return 0;
}


// ---------------------------------------------------------------------------------------------

// DO - While Loop 


#include <stdio.h>
 
int main()
{
    int x, n=1;
 
    printf("Enter an integer: ");
    scanf("%d",&x);
 
    do
    {
        printf("%d * %d = %d\n",x,n,x*n);
        n++;
    }
    while(n<=10);
    
    return 0;
}


// ---------------------------------------------------------------------------------------------
