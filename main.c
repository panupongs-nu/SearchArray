/*=====================================================
Program: SearchArray
Objective: to search for key value in list (array)
Input: List of data (integer) 10 values, key
Output: Message show search result
Programmer : Panupong Sornkhom (panupongs@nu.ac.th)
Version 1.0, Date 2020-08-01
======================================================*/
#include <stdio.h>

#define LIST_SIZE 10        // define number of data

int main(void) {
  /* Variable declaration
    list - array for store data
    data - for store data from user input
    index - for use in loop
    key - value to search
    found - a counter variable for search result
  */
  int list[LIST_SIZE], data, index, key , found; 
  char ch;    // ch - for store user's choice

  /* Read input */
  for (index = 0;index < LIST_SIZE;index++) {
    printf("Enter data %d from %d: ", index+1, LIST_SIZE);
    scanf("%d",&data);      // read data from user input
    list[index] = data;     // store data in array
  }                         // end loop for

  /* Process */
  do {
    printf("Enter a key value (integer) to search: ");
    scanf("%d",&key);


    for (index = 0, found = 0;index < LIST_SIZE;index++) {
      if (key == list[index])
        found++;
  }                         // end loop for

   /* Show output */
    if (found > 0 ) {
      if (found == 1) // found 1 time
        printf("Found %d in data list %d time\n",key, found);
      else            // found 2 times or more
        printf("Found %d in data list %d times\n",key, found);
    } else {          // not found
      printf("Not found %d in data list\n",key);
    }                 // end if-else 

    /* Ask to end program or search again */
    printf("Do you want to exit? (y/n): ");
    scanf(" %c",&ch);
  } while (ch!='y'&&ch!='Y');           // end do-while
  
  printf("Exit program. Bye.\n");

  return 0;
}
