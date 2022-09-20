// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[],int s,int e,int tgt){
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==tgt){
            return mid;
        }

        else if(arr[mid]<tgt){
            return binarySearch(arr,mid+1,e,tgt);
        }
        return binarySearch(arr,s,mid-1,tgt);
    }
    
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
