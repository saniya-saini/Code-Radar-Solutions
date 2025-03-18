#include <stdio.h>
int isPrime(int n);
int main(){
    int num;
    scanf("%d", &num);
    if (isPrime(num)){
        printf("1");}
    else{printf("0");

    }
    return 0;
}
int isPrime(int n){
    if (n<2)
    return 0;
    for ( int i; i*i <=n ; i++){
        if n%i==0
        return 0;
    }
    return 1;
}
