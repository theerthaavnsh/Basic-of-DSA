// Online C compiler to run C program online
#include <stdio.h>

int LinearSearch (int arr[], int size, int key)
{
for (int i=0; i<size; i++){
    if (arr[i]==key){
        return i ; //index key//
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
    printf("Enter the elements:");
    for (int i=0; i<size; i++){
        scanf("%d", &number[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d", &keyvalue); 
    int index= LinearSearch(number,size, keyvalue)
    if (index!=-1){
        printf("Element found at %d/n", index);
    }
    else {
        printf("Element not found");
    }
    }
        
    
