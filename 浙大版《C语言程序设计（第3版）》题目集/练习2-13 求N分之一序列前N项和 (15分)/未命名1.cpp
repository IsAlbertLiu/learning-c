#include<stdio.h>
int main()
{  
	int number = 0;
    double sum=0 ;
    scanf("%d",&number);
    for(int i=1;i<number;i+=2){
	   		sum = sum + 1.0/i;
	}
     printf("sum = %.6f\n", sum);
    return 0;  
}
