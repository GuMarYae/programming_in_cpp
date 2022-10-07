#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <cstdlib>

//in this, its basically saying to set a number for key and return the INDEX location if its true, or else, return -1 for ERROR

int linearSearch(const int list[], int key, int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    if (key == list[i])
      return i;
  }
  return -1;
}

int main()
{
int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
int i = linearSearch(list, 4, 8); // Returns 1
int j = linearSearch(list, -4, 8); // Returns -1
int k = linearSearch(list, -3, 8); // Returns 5

  std::cout <<i;

   
}
