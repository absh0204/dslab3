/*  Program in C to insert the element in the sorted array  */

 
#include<stdio.h>
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    
}
int insertelement(int arr[],int element, int size,int capacity,int index){
    if (size>=capacity)
    {
        return -1;
    }
    else
        for (int i =size-1; i >= index-1; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index-1]=element;
        return 1;      
    
}
void deletion(int arr[],int size,int index ){
    for (int i = size-1; i < index-1; i--)
    {
        arr[i-1]=arr[i];
    }
    
}
void main( )
{
     
     int a[10]={1,2,3,5,20,49,20};
     int size=7,elmt,index;
     printf("Array before insertion:- ");
     display(a,size);
     printf("Enter element to be inserted:-");
     scanf("%d",&elmt);
     printf("Enter the position:- ");
     scanf("%d",&index);
     insertelement(a,elmt,size,10,index);
     size=size+1;
     display(a,size);
     ///
     ///
     ///deletion
     printf("Array before deletion:- ");
     display(a,size);
     deletion(a,size,3);
     size=size-1;
     printf("Array after deletion:- ");
     display(a,size);

}
