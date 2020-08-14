#include<stdio.h>
int main()
{  
    int fahr,lower,upper;
    double celsius;
     
    scanf("%d%d",&lower,&upper);
    if(lower<=upper)
    {
        printf("fahr celsius\n");
        
        	fahr = lower;
            while(fahr<=upper){
            	printf("%d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
            	fahr+=2;
			}
    }
    else
        printf("Invalid.\n");
     
    return 0;  
}
