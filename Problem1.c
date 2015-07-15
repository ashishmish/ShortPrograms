#include<stdio.h>
int main(){
	int a[1000],size,sum = 0,i;
	scanf("%d",&size);
	if(size < 0 || size > 1000)return(0);
	for(i=0; i < size; i++)scanf("%d",&a[i]);
	for(i=0; i < size; i++)if((a[i]>=-1000 && a[i]<=1000) && a[i]>0)sum=sum+a[i];
	printf("%d\n",sum);
}