 #include<stdio.h>
int main()
{
        int i,a,n,sum=0;
        printf("input the value of a(1<=a<10) n:\n");
        scanf("%d%d",&a,&n);

        for(i=1;i<=n;i++)
        {
        sum=sum+a;
        a=a*10+a;
        }

        printf("the sum of'a+aa+aaa+...+aaa...aaa'is:%d\n",sum);

        return 0;
}

