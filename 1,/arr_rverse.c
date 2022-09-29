#include<stdio.h>

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reversal(int arr[],int size){
    int temp;
    for (int i = 0; i <size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    
}
int main(){
    int a[20];
    int size;
    printf("Enter the size of the array:- ");
    scanf("%d",&size);
    printf("Enter the elements of array:- ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your array:- ");
    display(a,size);
    reversal(a,size);
    printf("After Reversal:\nArray:- ");
    display(a,size);

    
}