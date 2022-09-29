#include<stdio.h>
void traverse(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main(){
    // traversing
    int n;
    printf("Enter number of elements:- ");
    scanf("%d",&n);
    int a[10];
    printf("Enter the elements:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    traverse(a,n);
    return 0;

}