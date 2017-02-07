#include "stdio.h"
#include "heapsort.h"

using namespace std;

//quando a prioridade de um n� � aumentada (ou um novo n� � adicionado no "fundo" do heap) deve-se navegar para "cima" para restaurar a ordem do heap
//quando a prioridade de um n� � diminu�da (por exemplo, se substituirmos um n� da raiz com um novo n� com chave menor) deve-se navegar para baixo para se restaurar a ordem do heap

void heapify(int* arrayOfData, int positionOfNode, int sizeOfArray) //n� deve mover-se para um nivel abaixo para atender crit�rio de heap
{
    while(2 * positionOfNode <= sizeOfArray)
    {
        int childrenNode = 2 * positionOfNode;
        if(childrenNode < sizeOfArray && arrayOfData[childrenNode] < arrayOfData[childrenNode + 1])
            childrenNode++;
        if(arrayOfData[positionOfNode] >= arrayOfData[childrenNode])
            break;
        swapElementsInArray(arrayOfData, positionOfNode, childrenNode);
        positionOfNode = childrenNode;
    }
}

void heapSort(int* arrayOfData, int sizeOfArray)
{
    for(int k = sizeOfArray / 2 ; k >= 1 ; k--)
        heapify(arrayOfData, k, sizeOfArray);

    int auxSize = sizeOfArray;
    while(auxSize >= 1)
    {
        swapElementsInArray(arrayOfData, 1, auxSize);
        auxSize--;
        heapify(arrayOfData, 1, auxSize);
    }
}
