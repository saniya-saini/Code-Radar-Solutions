#include <stdio.h>
int isprime(int n);
int main(){
    int num;
    scanf("%d", &num);
    if (isprime(num)){
        printf("1");}
    else{printf("0");

    }
    return 0;
}
int isprime(int n){
    if (n<2)
    return 0;
    for ( int i; i*i <=n ; i++){
        if n%i==0
        return 0;
    }
    return 1;
}
