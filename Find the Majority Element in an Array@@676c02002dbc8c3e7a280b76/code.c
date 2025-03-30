#include <stdio.h>
int majorityelement(int arr,int n){
    int count =1,candidate=arr[0],i;
    for (i=0;i<n;i++){
        if(a[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    if (count==0){
        candidate=arr[i]
        count=1;
    }
    }
   count=0;
   for(i=0;i<n;i++){
    if (arr[i]==candidate){
        count++;
    }
   }
   if(count>n/2){
    return candidate;
    else{
        return -1;
    }
   }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[]);
    }
    majority=majorityelement(arr,n)
    if (count<n/2){
    printf("-1")
    }
    else(count>n/2{
        printf("%d", arr[i])
    })

}