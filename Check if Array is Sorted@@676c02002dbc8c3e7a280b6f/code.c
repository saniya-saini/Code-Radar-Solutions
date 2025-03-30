#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d", arr[i]);
    }
    int sorted=1;
    for(i=0;i<n;i++){
    if(arr[i] < arr[n+1])
    sorted=0;
    break;
    }
if(sorted==0){
    printf("Sorted");}
    else{
        printf("Not Sorted");
    }
}
