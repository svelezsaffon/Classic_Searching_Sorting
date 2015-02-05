#include <list>
#include <iostream>



using namespace std;

void selection_sort(list<int> & vec){


    list<int>::iterator i=vec.begin();

        for(;i!=vec.end();i++){

            list<int>::iterator j=i;
            list<int>::iterator smallest=i;

            for(;j!=vec.end();j++){

                if((*j)<=(*smallest)){
                    smallest=j;
                }

            }
            int copy=(*smallest);
            (*smallest)=(*i);
            (*i)=copy;

        }

    i=vec.begin();

}

