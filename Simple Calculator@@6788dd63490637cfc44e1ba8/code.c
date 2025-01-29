#include <stdio.h>

int main(){
    char a;
    int a,b;
    scanf("%d %d", &b &c);
    scanf("%c", &a);
    switch(a){
        case '+':
        result= b+c;
        printf("%d", result);
        break;
        case '-':
        result2=b-c;
        printf("%d", result2);
        break;
        case'*':
        result3=b*c;
        printf("%d", result3);
        break;
        case'/':
        result4=b/c;
        printf("%d", result4);
        break;
        default:
        printf("Error");
    }

}