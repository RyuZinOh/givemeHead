### sort_arrayint_asc()
- [uses bubble sorting method-> repeatedly swaping adjacent element method]
- takes array and its size
- outer loop creates a barrier to run, after each run the largest unsorted moves at the end position
- innter loop goes from 0 to the n-i-1 compares the adjacent element of array j and j+1 
- if current one is larger than next, then  swapped

### sort_arrayint_desc()
- does same as sort_arrayint_asc() for opposite

### sort_string_asc()
- does same as the array asc, but takes string

### sort_string_desc()
- does same as the  string asc, but opposite


### words_in_array_asc();
- [uses quick sorting method->moves all elements smaller than pivot to left and larger to right where pivot is center, recursively sorts left and then right]
- takes array and its we know left will be starting of as 0 and right will be of n-1 
- picks a pivot generally left+right/2, in c we can't generally assign but we can use the string methods for that
- now we create a loop until i,j crosses each other
- moving i forward and j backward
- when i finds element larger than its elements then we do swaping
- sorts all elements after the pivot (indices i to right) recursively and vice versa
`if(left < j) words_in_array_asc(words, left, j);
if(i < right) words_in_array_asc(words, i, right);`

