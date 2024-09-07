#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10];
    int max=INT_MIN;
    printf("Enter The Numbers");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
for (int i = 0; i < 10; i++)
{
    if (max<arr[i])
    {
        max=arr[i];
    }
    
}
printf("The maximum number is = %d",max);
return 0;}