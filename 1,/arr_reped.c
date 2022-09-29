// repeated elements

#include<stdio.h>
int main(){
    int a[ ]={1,7,2,4,5,2};
     int dat[8]={0};
   
    for (int j = 0; j < 6; j++)
    {
        dat[a[j]]++;
    }
    printf("The non repeated elements are:-");
    for (int i = 0; i < 8; i++)
    {
        if ((dat[i]==1))
        {
            printf("%d ",i);
        }
        
    }
    return 0;
    
}