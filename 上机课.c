
//水仙花数

#include<stdio.h>
#include<math.h>

/*

1.用 while 计算出输入数字的位数
2.用 while 计算各位上数字的位数幂，并同时求和
3.用 if 判断是否相等

*/


int main(){
    int n,x,y,a=1,wei,sum=0 ;

    printf("***********\n");
    printf("please enter a number :\n");
    scanf("%d",&n);

    x=n;
    y=n;
    while(x/10 > 0){
        a++;
        x=x/10;
    }

    //printf("%d",a);

    while (n>0)
    {
        wei = n%10;
        sum =sum +pow(wei,a);
        n=n/10;
    }
    // printf("%d\n",sum);


    if (sum==y)
    {
        printf("YES!\n");
        
    }else{
        printf("NO!\n");

    }
    


}