#include<stdio.h>
/// display'
void display(int arr[],int s){
    for (int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// sorting array
void asndsort(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {   int temp;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }
    }
}
///
void dsnddsort(int arr[],int n){

    for (int i = 0; i < n; i++)
    {   int temp;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }   
    }   
}

// merging array
int merge(int arr1[],int size1,int arr2[],int size2,int c[]){
    
    for (int i = 0; i < size1; i++)
    {
        c[i]=arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        c[size1+j]=arr2[j];
    }
}


int main(){
    int arr1[20];
    int arr2[20];
    int c[40]={0};
    int n1,n2,n3;
    printf("Enter the number of elements in Array 1:-");
    scanf("%d",&n1);
    printf("Enter hte elements:- ");
    for (int i = 0; i <n1 ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the number of elements in Array 2:-");
    scanf("%d",&n2);
    printf("Enter the elements:- ");
    for (int i = 0; i <n2 ; i++)
    {
        scanf("%d",&arr2[i]);
    }

    n3=n1+n2;
    //merge
    merge(arr1,n1,arr2,n2,c);
    display(c,n3);
    ///SORTascending
    printf("Ascending order sorting\nArray:- ");
    asndsort(c,n3);
    display(c,n3);
    // sort decending
    printf("Descending order sorting\nArray:- ");
    dsnddsort(c,n3);
    display(c,n3);

return 0;

}