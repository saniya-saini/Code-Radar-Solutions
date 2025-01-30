#include <stdio.h>

int main(){
    char a;
    int b,c;
    float div;
    div=a/b;
    scanf("%d %d %c", &b, &c, &a);
    if(a=='+'){
    printf("%d",b+c);        
    }
    else if(a=='-'){
    printf("%d", b-c);
    }
    else if(a=='*'){
    printf("%d", b*c);
    }
    else if(a=='/'){
        if(c==0){
            printf("error");
        }
        else{
            printf("%d", b/c);
        }
    }
}