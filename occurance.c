#include<stdio.h>
int main(){
    int arr[]={1,2,2,3,4,7};
    int ans=binarySearch(arr,5,2);
    int ans1=binarySearch(arr,5,2);
    printf("%d\n%d", ans,ans1);


}
int binarySearch(int arr[],int e,int tgt){
    int ans=-1;
    int s=0;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==tgt){
            ans=mid;
            e=mid-1;
        }

        else if(arr[mid]<tgt){
            return binarySearch(arr,mid+1,e,tgt);
        }
        return binarySearch(arr,s,mid-1,tgt);
        mid=s+(e-s)/2;
    }
    
}