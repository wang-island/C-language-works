#include <stdio.h>

//1——200内的素数

int main (){
    int   x,i,j;
    

    for(x > 2;x <=200;x++){
        j=0;

        for(i=2 ; i<=(x/2) ; i++){
            if (x%i == 0)
            {
                j++;
                break;
            }   
        }


        if (j == 0)
        {
            printf("%d\n",x);
        }
        
    }

    return 0;



}


/*


#include <stdio.h>

int main() {
    int x, i;
    int isPrime;  // 使用标志变量更清晰
    
    for(x = 2; x <= 200; x++) {
        isPrime = 1;  // 先假设是素数
        
        for(i = 2; i <= x/2; i++) {
            if (x % i == 0) {
                isPrime = 0;  // 找到因子，不是素数
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d\n", x);
        }
    }
    
    return 0;
}



*/