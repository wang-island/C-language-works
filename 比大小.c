#include<stdio.h>

//这是一个用于两个整数比大小的程序
//定义了两个函数()和max()

int min(int a , int b){
    if (a>b)
        return (a);
    else
        return (b);
}

int max(int a, int b){
    if(a<b)
        return(a);
    else
        return(b);

}

int main(){

    int a,b,c,d;
    printf("please enter two numbers :\n");
    scanf("%d%d",&a,&b);

    c=min(a,b);

    printf("%d",a);



}