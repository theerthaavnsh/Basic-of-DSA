// large and small

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter total number in the array: ");
    scanf("%d",&n);
    
    if(n==0) return 0; //stop program if array index is zero
    int arr[n];
    
    for(i=0;i<n;i++){ //read elements into the array 
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    
    int small=arr[0], large=arr[0]; //assume that the first element is smallest/largest
    
    for(i=1;i<n;i++){ //checking index
        if(small>arr[i])    small=arr[i]; //if current smallest number is greater than arr[i], then assign current small no is arr[i]
        else if(large<arr[i]) large=arr[i]; //if current largest number is less than arr[i], then assign current large number to arr[i]
    }
    
    printf("%d is the largest number.\n%d is smallest number.\n",large,small);
}
