#include <stdio.h>
void main(){
    int num, temp, r, sum=0;
    
    printf("Enter any three digit positive integer:");
    scanf("%d",num);
    
    for (temp=num;num!=0;num=num/10){
        r=num%10;
        sum=sum+(r*r*r);
    }
    
    if (sum==temp){
        printf("%d is an armstrong number.",temp);
    }
    else {
        printf("%d is an not an armstrong number.",temp);
    }
    
}
