#include <iostream>
using namespace std;

int size = 30;

void selection_sort(int x[])
{
    int left = 0;
    while (left < size)
    {
        int min = left;
        
        for(int i = left; i < size; i++)
        {
            if (x[i] < x[min]) {min = i;}
        }
        
        int temp = x[min];
        x[min] = x[left];
        x[left] = temp;
        left++;
    } 
}

int main()
{
    int test[size];
    for (int i = 0; i < size; i++)
    {
        test[i] = rand();
    } 
    
    selection_sort(test);
    
    for (int i = 0; i < size; i++)
    {
        cout << test[i] << " ";
    }
}



