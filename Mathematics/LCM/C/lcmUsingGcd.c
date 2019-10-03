// C program to find LCM of two numbers 
#include <stdio.h>

// Function to return gcd of two number

int gcd(int a, int b){ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

// Function to return LCM of two numbers 

int lcm(int a, int b) 
{ 
	return (a*b)/gcd(a, b); 
} 

int main() 
{ 
	int a , b ;
  scanf("%d%d",&a,&b);
	printf("LCM of %d and %d is %d ",a,b,lcm(a, b)); 
	return 0; 
} 
