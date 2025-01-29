#include <stdio.h>

int main(){
    char a;
    int b,c,result;
    scanf("%d %d", &b, &c);
    scanf("%c", &a);
    switch(a){
        case '+':
        result= b+c;
        printf("%d", result);
        break;
        case '-':
        result=b-c;
        printf("%d", result);
        break;
        case'*':
        result=b*c;
        printf("%d", result);
        break;
        case'/':
         if(c!=0){
        result=b/c;
        printf("%d", result);}
         else{printf("Error");}
        break;
        default:
        printf("Error");
    }

}