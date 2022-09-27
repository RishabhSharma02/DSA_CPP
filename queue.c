#include <stdio.h>
int main(){
    int arr[5];
    int s=-1;
    int e=-1;
    enqueue(arr,s,e);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}
void enqueue( arr,int e,int s){
    if(e==-1){
        s=0;
        e=0;

    }
    while (e<5)
    {
        scanf("%d",&arr[e++]);
    }
    
}