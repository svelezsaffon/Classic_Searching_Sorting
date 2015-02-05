#include <iostream>




/*

Binary Search
January 28, 2014

Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

 */

#include <vector>
#include <iostream>
#include <bits/stl_algo.h>
using namespace std;

int binary_search(vector<int> vec, int search,int init,int final) {


    if(search >= vec[0] && search <= vec[vec.size()-1]) {


        int half = 1 + (final - init) / 2;


        if (search == vec[half]) {
            return half;
        } else if (search > vec[half]) {
            return binary_search(vec, search, half+1, final);
        } else {
            return binary_search(vec, search, init, half-1);
        }



    }else{
        return -1;
    }

}


