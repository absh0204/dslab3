#include<stdio.h>
void display(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    }

    int selectionsort(int arr[],int size){
        int temp,indexlow;
         for (int i = 0;i<size-1 ; i++){
            indexlow=i;
            for (int j = i+1; j < size; j++)
            {
                if (arr[j]<arr[indexlow]){
                    indexlow=j;
                }
            }
            
            temp=arr[i];
            arr[i]=arr[indexlow];
            arr[indexlow]=temp;
            
    }
    }
int main(){
    int size,index,i;
    int elements[20];
    int insert;
    printf("Enter the size of the array:- ");
    scanf("%d",&size);
    printf("Enter the elements of the array:- ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&elements[i]);
    }
      
    printf("Array elements entered:- ");
    display(elements,size);
    selectionsort(elements,size);
    printf("Elements after sorting:- ");
    display(elements,size);

    printf("Enter the element to be inserted:- ");
    scanf("%d",&insert);
    i=size-1;
    while (insert<elements[i]&& i>=0)
    {
        elements[i+1]=elements[i];
        i--;
    }
    elements[i+1]=insert;
    size=size+1;
    display(elements,size);
    
    return 0;

    
}