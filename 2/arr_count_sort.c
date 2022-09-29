#include<stdio.h>

void countSort(int arr[],int n){
    int c[10]={0};
    int b[12];
    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }
    for (int j = 0; j < n; j++)
    {
        c[j+1]=c[j]+c[j+1];
    }
    for (int i = n-1; i>=0; i--)
    {
        b[c[arr[i]]-1]=arr[i];
        c[arr[i]]--;
    }
    printf("The sorted Array as follows:-" );
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
    
}

int main(){
    int a[12]={1,5,3,6,8,3,0,2,5,9,2,4};
    int n=12;
    countSort(a,12);
    return 0;


}