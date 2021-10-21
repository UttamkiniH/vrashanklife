// Factorial of a number using recursion

#include<stdio.h>

int fact(int a){
    if(a==0 || a==1)
        return 1;
    return a*fact(a-1);
}

void main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("\nFactorial of %d is %d",n,fact(n));
}
