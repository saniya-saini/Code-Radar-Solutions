#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
        }
        int even=0, odd=0;
        for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        
        if(arr[i]%2!=0){
            odd=odd+1;
        }}
    printf("%c ", even);
    printf("%c", odd);
        }
        
        