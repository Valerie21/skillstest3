#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int  size=10, arr[50], i, j, temp, total, ave;
 
  cout<< "Enter 10 numbers: ";
  for (i=0; i<size; i++)
  {
      cin>> arr[i];
  }
  cout << "sorting array...\n";
  
  for (i=0; i<size; i++)
  {
      for (j=i+1; j< size; j++)
      {
          if(arr[i]> arr[j])
          {
              temp = arr[i];
              arr[i]= arr[j];
              arr[j]=temp;
          }
      }
  }
  
  cout<< "Now the Array after sorting is: \n";
  for (i=0; i<size; i++)
  {
      cout <<arr[i]<<" ";
  }
  
  cout<< "\nThe smallest number is: "<< arr[0];
  cout<< "\nThe largest number is: " << arr[9];

for (i=0; i< size; i++)
{
    total+=arr[i];
}
 cout<< "\nTotal: "<<total; 
  getch();
  return 0;
}

