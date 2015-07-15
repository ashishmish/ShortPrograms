#include<stdio.h>
#include<string.h>
int main(int i,int n,int count,char c,char d[50]){
	for(i = 1; i <= 11, count = 0, n = 1; i++){
		if(i == 11)return (0);		
		while((c = getchar()) != '\n')
			d[count++] = c;
			if(strlen(d) > 20)return(0);
			if(c == 'T' || c == 'D' || c == 'L' || c == 'F')n *= 2;
		}
		printf("%d\n",n);
	}
}