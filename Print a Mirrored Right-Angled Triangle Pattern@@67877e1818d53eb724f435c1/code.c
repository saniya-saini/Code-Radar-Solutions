#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j=a-i;j++){
            printf(" ");
        }
        for (k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}