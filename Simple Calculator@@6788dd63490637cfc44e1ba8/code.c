#include <stdio.h>

int main(){
    char a;
    int b,c,result;
    scanf("%d %d", &b &c);
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
        result=b/c;
        printf("%d", result);
        break;
        default:
        printf("Error");
    }

}