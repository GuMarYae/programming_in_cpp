#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>

void reverse(const int list[], int newList[], int size)
{
  for (int i = 0, j = size - 1; i < size; i++, j--) // you dont need to put an int in front of j
                                                    // because the int from i is representing j by the comma
                                                    // remember, end of statements are represented by ";"
  {
    newList[j] = list[i]; // since j is at the end of size, its first input for size-1 is whatever the heck is in i
                          // after that happens, i++ and j--, (j will be in the size -2 position now, then size-3 and so on until
                          // its finally in the beginning of i and I will be done counting)
  }
}

void printArray(const int selectedList[], int size) // this is the original array list then a reverse copy gets created above this function
{
  for (int i = 0; i < size; i++)
  {
    std::cout << selectedList[i] << " ";
  }
}

int main()
{
  const int SIZE = 7;
  int list[] = {1, 2, 3, 4, 5, 6, 7};
  int newList[SIZE];
  reverse(list, newList, SIZE); 

  std::cout << "The original array is ";
  printArray(list, SIZE);
  std::cout<<"\n";
  std::cout << "The new reversed array is ";
  printArray(newList, SIZE);


  return 0;
}
/*
1.you made a variable names list with values.. you can actually put list[SIZE] but its fine as list[]
2.made a second variable named new list
3.called the reverse function and sent the three variables to it
4.READ THE NOTES INSIDE reverse function.. thats step 4.
5.list is iterated, but what matters is that newList[SIZE] is denoted with values now.
  remember, with arrays, you dont need a return value in a function. when you denote or make a statement for the array, its
  going to effect the array regardless. I think thats what denoting is representing+
  
6.Both list and newList are sent to the printArray function 
7.The end
*/