#include <iostream>
using namespace std;

int findMin(int [], int, int);

int main() {
  const int N = 10;
  int numbers[N] = {25,10,15,30,35,40,45,55};

  for(int i =0;i<N-1;i++)
  {
    int minidx;
    minidx = findMin(numbers, N, i);
    swap(numbers[i], numbers[minidx]);
  }
}

  int findMin(int numbers[], int N, int ith)
  {
    int min,minidx;
    min = numbers[ith];
    for(int i =ith;i<N;i++)
    {
      if(min > numbers[i])
      {
        min = numbers[i];
        minidx = i;
      }
    }
    return ith;
  }

  int printArray(int a[], int x)
  {
    for(int i =0;i< x;i++)
    {
      cout << a[i] << "\t";
    }
    cout << "\n";
  }