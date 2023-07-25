#include <stdio.h> 

int isPrime (int num){
    if (num<=0){
        return 0; //not prime since negative numbers cant be prime
    }
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            return 0; //not prime since num/i is divisible by i, hence it is not prime
            
        }
        
    }
    return 1; //prime number 


}
int main ()
{
    int n;
    printf("Enter any positive integer: "); 
    scanf ("%d",&n); 
    
    if (isPrime(n)){
        printf("%d is a prime number \n",n);
    }
    else {
        printf("%d is not a prime number\n",n); 
    }
}
