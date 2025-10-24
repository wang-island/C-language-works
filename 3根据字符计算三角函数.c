#include <stdio.h>
#include <math.h>

int main() {
    float angle;
    char c;
    
    printf("please enter the angle (PI) :\n");
    printf("(range from 0 to 6.28)\n");
    scanf(" %f", &angle);
    
    printf("please enter the character :\n");
    scanf(" %c" , &c);
    //注意我这里两个格式控制符前有空格
    
    if (c == 'i' || c == 'I') {
       
        printf("%f\n", sin(angle));
    }
    else if (c == 'c' || c == 'C') {
        
        printf("%f\n", cos(angle));
    }
    else if (c == 't' || c == 'T') {
        
        printf("%f\n", tan(angle));
    }
    else if (c == 'g' || c == 'G') {
       
        double v = tan(angle);
        printf("%lf",1/v);
        
   
    }
    
    return 0;
}



/*


#include <stdio.h>
#include <math.h>

int main() {
    double angle;
    char operation;
    
    // 输入角度和操作字符
    printf("请输入角度（弧度）和一个字符（i/I/c/C/t/T/g/G）：");
    scanf("%lf %c", &angle, &operation);
    
    // 根据输入的字符进行相应的三角函数计算
    switch(operation) {
        case 'i':
        case 'I':
            printf("sin(%.2f) = %.6f\n", angle, sin(angle));
            break;
            
        case 'c':
        case 'C':
            printf("cos(%.2f) = %.6f\n", angle, cos(angle));
            break;
            
        case 't':
        case 'T':
            // 检查正切是否存在（cos(angle) ≠ 0）
            if (fabs(cos(angle)) < 1e-10) {
                printf("错误：该角度的正切值不存在（余弦值为0）\n");
            } else {
                printf("tan(%.2f) = %.6f\n", angle, tan(angle));
            }
            break;
            
        case 'g':
        case 'G':
            // 检查余切是否存在（sin(angle) ≠ 0）
            if (fabs(sin(angle)) < 1e-10) {
                printf("错误：该角度的余切值不存在（正弦值为0）\n");
            } else {
                printf("cot(%.2f) = %.6f\n", angle, cos(angle) / sin(angle));
            }
            break;
            
        default:
            printf("错误：无效的字符输入！\n");
            printf("请使用以下字符：\n");
            printf("i/I - 正弦\n");
            printf("c/C - 余弦\n");
            printf("t/T - 正切\n");
            printf("g/G - 余切\n");
            break;
    }
    
    return 0;
}




*/