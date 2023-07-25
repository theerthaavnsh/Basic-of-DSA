#include <stdio.h>
//To calculate the numbers in Fibonaccinocci series//
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
//To print and store the elements in the fib series// 

void printfib (int n){
    for (int i=0;i<n;i++){
        printf(" %d", fib(i));
    }
}

//Main Function 

int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n); 
    
    
    printf("Fibonacci series:"); 
    printfib (n);
    return 0;
}
