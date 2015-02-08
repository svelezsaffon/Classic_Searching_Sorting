#include <vector>
#include <list>


using namespace std;




int partition(vector<int> & vector,int low,int upper){

    int pivot=vector[upper];

    int smallest=low-1;
    int aux;
    for(int j=low;j<=upper-1;j++){

        if(vector[j]<=pivot){
            smallest++;

            aux=vector[smallest];
            vector[smallest]=vector[j];
            vector[j]=aux;
        }
    }

    aux=vector[smallest+1];
    vector[smallest+1]=vector[upper];
    vector[upper]=aux;


    return smallest+1;
}


void quick_sort(vector<int> & vect,int low,int upper){
    if( low < upper){
        int small=partition(vect,low,upper);
        quick_sort(vect,low,small-1);
        quick_sort(vect,small+1,upper);
    }
}


void quick_sort(vector<int> & vect){
    quick_sort(vect,0,vect.size()-1);
}







