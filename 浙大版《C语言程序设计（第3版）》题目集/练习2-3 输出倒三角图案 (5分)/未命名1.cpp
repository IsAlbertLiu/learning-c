#include<stdio.h>
main(){
	int line = 4;
	
/*	��ӡ�������� 
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

/*��ӡ������ 

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

/*��ӡ������
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
			// �������Ϊż�������м�Ϊ�ո�����λ�ǿո� 
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
