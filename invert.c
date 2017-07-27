#include <stdio.h>
int main(void) {
int n,i,j,k,count=0,p=0;
int a[1000000],b[1000000];
if(n<=50)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
k=a[i];

for(j=1;j<=k;j++)
{
if(k%j==0)
{
count++;
}
}
b[i]=count;
//printf(" %d",b[i]);

}
for(i=0;i<n;i++)
{   
for(j=i+1;j<n;j++)
   {
   if(b[i]>b[j])
   {
       p++;
   }
   }
   }
printf(" %d",p);
}
return 0;
}
