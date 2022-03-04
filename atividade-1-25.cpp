#include <iostream>
#include <stdlib.h>
#define VECTOR_SIZE 5

extern void bubbleSort(int vector[], int size)

int main(void)
{
    int vector[VECTOR_SIZE];
    int indx;

    //recbimento de dados
    for ( indx = 0; indx < VECTOR_SIZE; indx++)
    {
        std::cout << "\n Vetctor position [" << indx << "]";
        std::cin >> indx;
    }

    //bubbleSort();
}
