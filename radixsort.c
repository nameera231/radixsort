/*
Academic Honesty

 Academic Honesty Certification
* Written sources used:textbook
* (Include textbook(s), complete citations for web or other written sources.
* Note that you are not allowed to use the web for this assignment.
* Write "none" if no sources used.)
*
*
*
* Help obtained:noone
* (Include names of anyone other than the instructor.)
*
*
*
* My written or typed signature below confirms that the above list * of sources is complete. \\
* Signature:Nameera Muhammad Dawood

*/


#include <stdio.h>




int max_num(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
   { if (array[i] > max)
      {
        max = array[i];
      }
   }
  return max;
}

// Counting sort used as the stable sort
void counting_sort(int array[], int length, int location) {

  int result[length + 1];


  int max = (array[0] / location) % 10;

  for (int i = 1; i < length; i++) 
  {
    if (((array[i] / location) % 10) > max)
      {
        max = array[i];
      }
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
   {
      count[i] = 0;
   }


  for (int i = 0; i < length; i++)
    {
      count[(array[i] / location) % 10]++;
    }
    
 
  for (int i = 1; i < 10; i++)
    {
      count[i] += count[i - 1];
    }

  // Place the elements in sorted order
  for (int i = length - 1; i >= 0; i--) 
  {
    result[count[(array[i] / location) % 10] - 1] = array[i];
    count[(array[i] / location) % 10]--;
  }

  for (int i = 0; i < length; i++)
    array[i] = result[i];
}


//Documentation
/*
Procedure
radixsort
Parameters
x : pointer to the array to be sorted -- contains only nonnegative integers
n : the size of the array to be sorted
Purpose
sorts an array x in increasing order from smallest to largest nonnegative integer
Produced
void -- does not output anything 
Preconditions
the array pointer to by x is now in sorted order from smallest to largest integer and retains all original elements. It is still of size n.
Postconditions
all elements in the array pointed to by x are in non decreasing order. There are no new elements in the array pointed to by x. All original elements are retained.

 */


void radixsort(int x[], int n) {

  if(n < 2)
  {
  return;
  }
  int max = max_num(x, n);

  for (int a = 1; max / a > 0; a *= 10)
    {
      counting_sort(x, n, a);
    }
}

// Print result
void result(int x[], int n) {
  for (int i = 0; i < n; ++i) 
  {


    printf("%d  ", x[i]);
  }
  printf("\n");
}