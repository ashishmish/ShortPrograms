#include<stdio.h>
int main(int size,int i,int j){	
	char a[] ={'a','b','c','d'};
	scanf("%d", &size);
	if(size >= -10 && size < 0)for(i = 0; i > size; i--)for(j = 3; j >= 0; j--)printf("%c", (j == 3 && i == 0) ? toupper(a[j]) : a[j]);
	else if(size <= 10 && size > 0)for(i = 0; i < size; i++)for(j = 0; j < 4; j++)printf("%c",(j == 0 && i == 0) ? toupper(a[j]) : a[j]);
	printf("\n");
}