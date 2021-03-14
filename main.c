#include <stdio.h>



int main() {

  //test cases 

  //simple mixed array 
  int x[] = {111, 4, 56, 23, 1, 44, 567};
  int n = sizeof(x) / sizeof(x[0]);
  radixsort(x, n);
  result(x, n);

  //array with large range
  int lst[] = {10000, 5 , 0, 33, 34, 354};
  int l = sizeof(lst) / sizeof(lst[0]);
  radixsort(lst, l);
  result(lst, l);

  
  //array with repeats
  int lst1[] = {4,4,4,4,64,5};
  int l1 = sizeof(lst1) / sizeof(lst1[0]);
  radixsort(lst1, l1);
  result(lst1, l1);

  //array with single element
  int lst2[] = {4};
  int l2 = sizeof(lst2) / sizeof(lst2[0]);
  radixsort(lst2, l2);
  result(lst2, l2);

  //array with no elements
  int lst3[] = {};
  int l3 = sizeof(lst3) / sizeof(lst3[0]);
  radixsort(lst3, l3);
  result(lst3, l3);
}
