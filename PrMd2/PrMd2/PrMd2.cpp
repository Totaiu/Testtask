// PrMd2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <time.h>
#include <iostream>

const int arSize1 = 10;
const int arSize2 = 10;
const int arSize3 = arSize1 + arSize2;

void RandAndPrintArrays(int *a, int *b);
void selecSort(int* n, int size);

int main()
{
    int a[arSize1];
    int b[arSize2];
    int c[arSize3];

    RandAndPrintArrays(a, b);
    
    for(int i = 0; i < arSize3; i++) 
    {
       if(i < arSize1) 
       {
            c[i] = a[i];
       }
       else 
       {
            c[i] = b[i - arSize1];
       }
    }
    std::cout << std::endl;

    std::cout << "merged and sorted array:\n";
    selecSort(c, arSize3);
    for(int j = 0;  j < arSize3; j++) 
    {
        std::cout <<"Array c: " << c[j] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Min and max of array c:\n";

    int max = c[0];
    int min = c[0];
    for (int i = 0; i < arSize3; i++)
    {
        if (min > c[i])
        {
            min = c[i];
        }
        else if (max < c[i])
        {
            max = c[i];
        }
    }

    std::cout << "Min is: " << min << std::endl;
    std::cout << "Max is: " << max << std::endl;

    std::cout << std::endl;
    float sum = 0;
    int count = 0;
    for(int i = 0; i < arSize3; i++) 
    {
        sum += c[i];
        count++;
    }
    std::cout << "geomitric avg: " << sum / count;

    return 0;

}

void RandAndPrintArrays(int *a, int *b) 
{
    srand(time(NULL));
    for (int i = 0; i < arSize1; i++)
    {
        a[i] = rand();
        std::cout << "array A: " << a[i] << std::endl;
    }

    std::cout<<std::endl;

    for (int i = 0; i < arSize2; i++)
    {
        b[i] = rand();
        std::cout << "Array B: " << b[i] << std::endl;
    }
}

void selecSort(int *n, int size) 
{
    int min, temp;
    for(int i = 0; i < size; i++)
    {
        min = i;
        for(int j = i + 1; j < size; j++) 
        {
            if (n[j] < n[min])
                min = j;
        }
        temp = n[i];
        n[i] = n[min];
        n[min] = temp;
    }
}


