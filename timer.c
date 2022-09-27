#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,5,6,7};
    int idx1=firstocc(arr,8,5);
    printf("%d\n",idx1);

}
int firstocc(int arr[],int n,int tgt){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==tgt){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]>tgt){
            e=mid-1;
        }
        else{
            s=e+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}