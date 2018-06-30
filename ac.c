#include<stdio.h>
int main()
{
    int n,l=0,i,max,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++);
         {scanf("%d",&a[i]);}
    while(1){
    max=a[0];
    p=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>=max){
            max=a[i];
            p=i;
        }
    }
    if(p==0)
        break;
    else
        {a[p]-=1;
        a[0]+=1;
        l++;
        }
    }
    printf("%d\n",l);
    return 0;

}
