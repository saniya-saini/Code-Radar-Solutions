#include <stdio.h>
void reverse(int start, int end,int arr[]){
    int temp;
    for (start<end){
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d", arr[i])
    }
    int k;
    scanf("%d", &k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
for (i=0;i<n;i++){
    printf("%d", arr[i])
}

}