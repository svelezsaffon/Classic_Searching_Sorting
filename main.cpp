#include <iostream>




/*

Binary Search
January 28, 2014

Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

 */

#include "Binary_Search.h"
#include "selection_sort.h"




using namespace std;



int main() {

    list<int> aux;

    aux.push_back(-14);
    aux.push_back(-15);
    aux.push_back(-5);
    aux.push_back(1);
    aux.push_back(9);
    aux.push_back(8);
    aux.push_back(7);
    aux.push_back(6);
    aux.push_back(5);

    selection_sort(aux);




    return 0;
}


