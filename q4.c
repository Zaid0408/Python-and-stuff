#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b,k,c;
    printf("Input:\n");
    scanf("%d",&k);
    printf("Enter the series:");
    while(1)
    {
        scanf("%d",&b);
        if(b==-1)
        {
            printf("End of series");
            break;
        }
        else if(b%2==0)
        {
            a++;
            if(a==k)
            {
                c=b;
            }
            
        }
    }
    printf("kth occurence of an even number in series is: %d",c);
    return 1;
}