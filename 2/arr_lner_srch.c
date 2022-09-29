#include<stdio.h>
void searchelement(int arr[],int a,int n){
    int count=0,no=0;
    for (int i = 0; i < n; i++)
    {
        if (a==arr[i])
        {
           count=i;
           no++;
         }
    }
    if (no>0)
            {
                for (int j = 0; j <no ; j++)
             {
             printf("Element is at %d Index\n",count);
                }
            }
    if (no==0)
    {
        printf("Element not present.");
    }
    
} 

int main(){
    int a,b=11;
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    printf("Enter the element for linear search:-");
    
    scanf("%d",&a);
    searchelement(arr,a,b);
   
}