#include <iostream>
#include <algorithm>
using namespace std;

int particion(int arre[], int rta, int end)
{

    int p = arre[end];
 

    int pI = rta;
 

    for (int i = rta; i < end; i++)
    {
        if (arre[i] <= p)
        {
            swap(arre[i], arre[pI]);
            pI++;
        }
    }
 

    swap (arre[pI], arre[end]);
 

    return pI;
}
 

void quicksort(int arre[], int rta, int end)
{
 
    if (rta >= end) {
        return;
    }
 

    int p = particion(arre, rta, end);
 

    quicksort(arre, rta, p - 1);
 

    quicksort(arre, p + 1, end);
}
 

int main()
{
    int arre[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
    int n = sizeof(arre)/sizeof(arre[0]);
 
    quicksort(arre, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arre[i] << " ";
    }
 
    return 0;
}


// Cristian Duran, Carlos Orjuela, Daniel Ruiz.