#include <iostream>
using namespace std;
int d (int v1[], int v2[],int size)
{
  int p = 0;
  for (int i = 0; i < size; i++)
    {
      p = p + v1[i] * v2[i];
} 
      return (p);
    
}
int main ()
{
  int size1;
  int size2;
  cout << "enter size for vec1: " << endl;
  cin >> size1;
  int vec1[size1];
  cout << "enter size for vec2: " << endl;
  cin >> size2;
  int vec2[size2];
  if (size1 == size2)
    {
      for (int j = 0; j < size1; j++)
	{
	  cout << "enter elemts for vec1: ";
	  cin >> vec1[j];}
	  for (int j = 0; j < size2; j++)
	{
	  cout << "enter elemts for vec2: ";
	  cin >> vec2[j];
	}cout << "Final dot product: " << d (vec1, vec2,size1) << endl;
    }
  else
    {
      cout << "Not possible" << endl;
    }
  return 0;
}