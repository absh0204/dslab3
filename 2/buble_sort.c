#include<stdio.h>
void ascendelsort(int a[],int size){
    int temp;
     for (int i = 0; i < size; i++)
     {
        
        for (int j = 0; j < size-i-1; j++)
        { 
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
     }
     printf("Elements after sorting:- ");
     for (int k = 0; k < size; k++)
     {
        printf("%d ",a[k]);
     }
     printf("\n");

}


     void decendelsort(int arr[],int size){
        int temp;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size-i-1; j++)
            {
                if (arr[j]<arr[j+1])
                {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp; 
                }
                
            }
            
        }printf("Elements after sorting:- ");
         for (int k = 0; k < size; k++)
         {
            printf("%d ",arr[k]);
         }
        printf("\n");
     }
     


int main(){
    int size;
    int arr[20];
    printf("Enter the size of the array:-");
    scanf("%d",&size);
    printf("Enter the elements:-");
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("In Ascending ");
    ascendelsort(arr,size);
    printf("In Descending ");
    decendelsort(arr,size);
    return 0;

}