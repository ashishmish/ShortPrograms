#include<stdio.h>
int main(int num,int a,int b,int x,char op,int res[20]){
	if(scanf("%d", &num)){
	 if(x = num){}
	    while(num <= 99 && num-- && scanf("%d%c%d", &a, &op, &b)){
	       	if(res[num] = (op == '*' ? a * b :op == '-' ? a - b : op == '+' ? a + b : 1)){}
	    }
	}
	while(x != 0){if(printf("%d\n", res[--x])){}}
}