#include <iostream>




/*

Binary Search
January 28, 2014

Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

 */

#include "Binary_Search.h"
#include "selection_sort.h"
#include "bubble_sort.h"
#include "merge_sort.h"
#include "pokerCheck.h"




using namespace std;



int main() {

  pokerHand hand;



    hand.insert(11, 0);
    hand.insert(11, 1);
    hand.insert(12, 2);
    hand.insert(12, 3);
    hand.insert(12, 4);

    cout<<hand.have_pair()<<endl;
    cout<<hand.have_triplet()<<endl;
    cout<<hand.full_house()<<endl;

    /*
    vector<int> aux;

    aux.push_back(-14);
    aux.push_back(-15);
    aux.push_back(-5);
    aux.push_back(1);
    aux.push_back(9);
    aux.push_back(8);
    aux.push_back(7);
    aux.push_back(6);
    aux.push_back(5);

    merge_sort(aux);

    vector<int>::iterator i=aux.begin();
    for(;i!=aux.end();i++){
        cout<<(*i)<<endl;
    }
*/

    return 0;
}


