#include <stdio.h>

int main(){
    int a,i, flag==0;
    scanf("%d", &a);
    if(a==1 || a==0){
        flag==1; 
        printf("Not Prime");
    }
    else{
        for (i=2; i<a;i++){
            if (a%i==0){
                flag==1;
                break;            }
        }
    }
}
if (flag==0){
    printf("Prime");
}
else{
    printf("Not Prime");
}