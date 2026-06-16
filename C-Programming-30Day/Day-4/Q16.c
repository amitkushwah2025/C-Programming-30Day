#include<stdio.h>
int main()
{
    int i,a,b,t,r,sum;
    printf("Enter a & b");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
      t=i;
      sum=0;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;

    }
    if(sum==i)
    printf("%d",i);
    }

return 0;

}