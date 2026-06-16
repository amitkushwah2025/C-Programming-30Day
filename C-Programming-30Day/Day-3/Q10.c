#include<stdio.h>
int main()
{ 
    int a,b,i,j;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
    {
        if(i%j==0)
        break;
    }
    if(j==1)
    printf("%d",i);
}
return 0;
}