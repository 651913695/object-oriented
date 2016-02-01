#include<stdio.h>
int main()
{
   int x,y,i=1,j,k,n;
   int c[10001];
   scanf("%d %d",&x,&y);

   k=x+y;
   j=k;
   
if(j>=0)
{ 
	for(i=1,n=1;i<=100000;i++)
 {
 
   c[i]=k%10;
	   k=k/10;
	   if(k==0) break;
	   n++;
	}
}

if(j<0)
{
	
for(i=1,n=1;i<=100000;i++)
	{
       c[i]=k%10;
	       k=k/10;
		  c[i]=-c[i];

	  if(k==0) break;
	    n++;
	}

c[n]=-c[n];	
}

 for(i=1;i<=n;i++)
   { 
	     if(n>3)
		 { 
			 printf("%d",c[n-i+1]);
	         if((n-i)%3==0 && i!=n)
		     printf(",");
		 }
     else
		 printf("%d",c[n-i+1]);

 }
 
	
	
   return 0;
}
