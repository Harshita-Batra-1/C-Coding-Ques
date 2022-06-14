#include <bits/stdc++.h>
#define size 3
using namespace std;

//function to calculate cross product of two vectors
void cross_product(int vector_a[], int vector_b[], int temp[]) {
   temp[0] = vector_a[1] * vector_b[2] - vector_a[2] * vector_b[1];
   temp[1] = -(vector_a[0] * vector_b[2] - vector_a[2] * vector_b[0]);
   temp[2] = vector_a[0] * vector_b[1] - vector_a[1] * vector_b[0];
}
int main() {
   int vector_a[] = { 4, 2, -1 };
   int vector_b[] = { 5, 7, 1 };
   int temp[size];
   
   cout << "Cross product:";
   cross_product(vector_a, vector_b, temp);
   for (int i = 0; i < size; i++)
   cout << temp[i] << " ";
   return 0;
}
