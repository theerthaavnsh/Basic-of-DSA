#include <stdio.h>

int linearsearch ( int arr[], int size, int key) {
for (int i=0; i<size; i++){
    if (arr[i]=key){
        return i ; 
    }
}
return -1 ;
}
int main ()
{
    int size, keyvalue;
    
    printf("Enter size of array:");
    scanf("%d",&size);
    
    int number[size];
    
    printf("Enter the elements of the array:");
    for ( int i=0;i<size;i++){
        scanf ("%d", &number[i]);
    }
    
    printf ("Enter number to be searched:");
    scanf ("%d", &keyvalue);
    
    int index = linearsearch(number, size, keyvalue);
    
    if (index =! -1) {
        printf ("Element found at index %d/n:", index);
    }
        else {
        printf ("Element not found"); 
    
    
}
}

