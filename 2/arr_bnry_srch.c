#include<stdio.h>
int binarysearch(int arr[], int l, int h, int x)
{
    int mid=(l+h)/2;
    while(l<=h){
       
        if (arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            l=mid+1;
        }
        else
            h=mid+1;
        
    }
    return -1;
}
int main(){
    int a[10]={1,2,5,6,7,8,9,10,11,12};
    int s,l=0,h,key;
    s=sizeof(a)/sizeof(int);
    h=s-1;
    printf("Enter elements to be searched:-");
    scanf("%d",&key);
    int search=binarysearch(a,l,h,key);
    printf("The element %d is at %d index",key,search);
    return 0;

}