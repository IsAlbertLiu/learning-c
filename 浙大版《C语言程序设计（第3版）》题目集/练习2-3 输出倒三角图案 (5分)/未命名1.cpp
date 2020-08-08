#include<stdio.h>
main(){
	int line = 4;
	
/*	打印正三角形 
*
* *
* * *
* * * *
for(int i = 0; i<line;i++){
		for(int j = 0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
*/ 

/*打印三角形 

* * * *
* * *
* *
*

for(int i = 0; i<=line;i++){
		for(int j = 0;j<line-i;j++){
			printf("* ");
		}
		printf("\n");
	}

*/	

/*打印三角形
   *
  ***
 *****
*******
for(int i = 1; i<=line;i++){
 	for(int j = 0;j<line-i;j++){
		printf(" ");
	}
	for(int j = 0;j<2*i-1;j++){
		printf("*");
	}
	printf("\n");
}

*/

/*

* * * *
 * * *
  * *
   *
*/
	for(int i = 0; i<line;i++){
	 	for(int j = 0;j<i;j++){
			printf(" ");
		}
		for(int j = 0;j<2*(line-i)-1;j++){
			// 如果行数为偶数，则中间为空格（奇数位是空格） 
			if(line%2==0) {
				if(j%2!=0){
					printf(" ");
				}
				else{
					printf("*");
				}
			}else{
				printf("*");
			}
			
		}
		printf("\n");
	}
	 
} 
