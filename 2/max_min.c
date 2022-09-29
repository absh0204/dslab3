#include<stdio.h>
void display(int arr[],int size){
    printf("Array entered:-");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void max(int a[], int n)
{
    int max=a[0];
    for (int  i = 0; i < n-1; i++)
    {
        if (max<a[i+1])
        {
            max=a[i+1];
        }
       
        
    }
    printf("Max of the array is:-%d\n",max);

}
void min(int a[], int n)
{
    int min=a[0];
    for (int  i = 0; i < n-1; i++)
    {
        if (min>a[i+1])
        {
            min=a[i+1];
        }
        
    }
    printf("Min of the array is:-%d",min);

}
void main(){
    int size;
    int a[10];
    printf("Enter the size of the array:-");
    scanf("%d",&size);
    printf("Enter the elements:-");
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&a[j]);
    }
    display(a,size);
    max(a,size);
    min(a,size);

    
}
