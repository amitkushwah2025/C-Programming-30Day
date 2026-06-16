#include<stdio.h>
int main()
{
    int n,i;
printf("Enter the number");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if(n%i==0)
{
    printf("Not Prime");
    return 0;
}
}
printf("Prime");

return 0;

}