#include<stdio.h>
int display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int a[10];
    int c[10]={0};
    int size;
    printf("Enter the size of the array:- ");
    scanf("%d",&size);
    printf("Enter the elements of the array:- ");
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        c[a[i]]++;
    }
    display(c,size);
    printf("Repeated elements are:- ");
    for (int j = 0; j < size; j++)
    {
        if (c[j]>1)
        {
        printf("%d , ",j);
        }
    }
    
    return 0;
    
   
    


    

}