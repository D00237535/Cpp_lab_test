#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Album.h"
using namespace std;

/* Do Question 3a Here - loadAlbums() */



/* Do Question 3b Here - getLongestAlbum() */

/* Do Question 4a Here - ShiftRight() */

void ShiftRight(int* arr, int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
}

/* Do Question 4b Here - RemoveBetween() */

void removeBetween(int* arr2, int size, int start, int end)
{
    for (int i = end; i < size - 1; i++)
    {
        arr2[i] = arr2[i + 1];
    }
}


int main() {
   /*  Test Question 2 here */

    Album();





    /* Test Question 3a here */
    Album album1;
    Album album2;
    Album album3;
    Album album4;


    /* Test Question 3b here */



    int *arr = new int[4]{6,3,2,4};
    /* Test Question 4a here */
    ShiftRight(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }



    int *arr2 = new int[7]{8, 10, 17, 9, 14, 3, 8};
    /* Test Question 4b here */
    cout << "Before: " << endl;
    removeBetween(arr2, 7, 2, 4);
    for (int i = 0; i < 7; i++)
    {
        cout << arr2[i] << endl;
    }
    cout << "After: " << endl;
    removeBetween(arr2, 7, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr2[i] << endl;
    }



    return 0;
}
