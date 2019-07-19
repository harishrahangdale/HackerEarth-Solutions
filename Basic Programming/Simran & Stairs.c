#include <stdio.h>
 
int func(int n)
{
 
	if (n == 1 || n == 0)
 
		return 1;
 
	else if(n == 2)
 
		return 2;
 
	else
 
		return func(n-1) + func(n-2) + func(n-3);
 
}
 
int main(){
    
    int N, i;
    scanf("%d", &N);
    
    printf("%d\n",func(N));
}