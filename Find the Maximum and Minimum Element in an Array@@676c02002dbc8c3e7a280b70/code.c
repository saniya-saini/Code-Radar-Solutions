#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
                    }
        if(arr[i]<min){
            min=arr[i];
        } }
    printf("%d ", min);
    printf("%d", max);


}