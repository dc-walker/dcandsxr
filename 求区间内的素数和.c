#include<stdio.h>
int main()
{
	int a,b,c,i,s=0,n,m;
	scanf("%d %d",&a,&b);
	if(a==1)a=2; 
	for(i=a;i>=a&&i<=b;i++){
		m=0;
		for(n=2;n<i;n++){
			if(i%n==0){
				m=1;
				break;
			}		
		}
		if(m==0){
			c++;
			s+=i;
		}
	}
	printf("%d %d",c,s);
	return 0;
 } 
