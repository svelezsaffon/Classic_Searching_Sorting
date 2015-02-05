#include <list>
#include <iostream>

#include <bits/stl_tree.h>


using namespace std;

/*
This is the simplest algorithm of sorting algorithms, what it does is simply
test adjacent numbers and swap them if they are incorrect.
 */

void bubble_sort(list<int> & vec){

    list<int>::iterator i=vec.begin();
    list<int>::iterator j=vec.begin();
    i++;


    bool out=false;
    bool changes=false;
    for(;!out;i++,j++){

        if(*(j)>(*i)){
            changes=true;
            int copy=(*j);
            (*j)=(*i);
            (*i)=copy;
        }

        if(i==vec.end()){

            if(!changes){
                out=true;
            }
            changes=false;
            i=vec.begin();
            j=vec.begin();
            i++;
        }
    }
}