#include <stdio.h>
void
main ()
{
  int n, i, j = 0, k = 0;
  printf ("Enter the no of elements:");
  scanf ("%d", &n);

  int arr[n], even[n], odd[n];	//array declaration

  for (i = 0; i < n; i++)
    {				//insert values to arr[n]
      printf ("Enter the values:");
      scanf ("%d", &arr[i]);
    }

  for (i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
	{			//check if the numbers in the array are even 
	  even[j] = arr[i];
	  j++;
	}
      else
	{			//otherwise odd
	  odd[k] = arr[i];
	  k++;
	}


    }
  printf ("\nEven number array\n");
  for (i = 0; i < j; i++)
    {				//to print even numbers
      printf ("%d", even[i]);
    }
  printf ("\nOdd number array\n");
  for (i = 0; i < k; i++)
    {				//to print odd numbers
      printf ("%d", odd[i]);
    }

}
