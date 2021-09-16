#include<iostream>
using namespace std;
int binarySearch(int [], int,int,int);

int main()
{
    const int N = 10;
    int numbers[N] = {10,25,30,35,40,45,55,60,65,70};
    int target = 35;
    int index;

    index = binarySearch(numbers, N, target,index);
    if(index == -1)
    {
        cout << " Not Found " << endl;
    }
    else   
        cout << " Found at Index : " << index << endl;

    
}

int binarySearch(int numbers[], int N, int target,int index)
{
    int first, last, mid;
    first = 0;
    last = N-1;

    while (first <= last)
    {
        mid = (first + last)/2;
        if (numbers[mid] == target)
        {
            return index;
        }
        if(numbers[mid] < target)
        {
            first = mid + 1;
        }
        else   
            last = mid - 1;
    }
    return -1;
}