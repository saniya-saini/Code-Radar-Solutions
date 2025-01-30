#include <stdio.h>

int main(){
    char a;
    int b,c,result;
    float div;
    div=a/b;
    scanf("%d %d %c", &b, &c, &a);
     if(a == '+'){
     printf("%d", a+b);        
     }
     else if(a=='-'){
        printf("%d", a-b);
     }
     else if(a=='*'){
        printf("&d", a*b)
     }
     else if(a=='/'){
        if(c==0){
            printf("error");
        }
        else{
            printf("%d", a/b);
        }
     }
}