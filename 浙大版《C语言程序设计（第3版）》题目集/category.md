练习5-1 求m到n之和 (10分)
本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数。

函数接口定义：
int sum( int m, int n );
其中m和n是用户传入的参数，保证有m<n。函数返回的是m~n之间所有整数的和。

裁判测试程序样例：
```
#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}
int sum(int m,int n)
{
    int result;
    for(m,n;m<=n;m++){
        result=result+m;
    }
    return result;
}
```
