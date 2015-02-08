#include <vector>
#include <list>


using namespace std;



template <typename VALUE>
int partition(vector<VALUE> & vector,int low,int upper){

    VALUE pivot=vector[upper];

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

template <typename VALUE>
void quick_sort(vector<VALUE> & vect,int low,int upper){
    if( low < upper){
        int small=partition(vect,low,upper);
        quick_sort(vect,low,small-1);
        quick_sort(vect,small+1,upper);
    }
}

template <typename VALUE>
void quick_sort(vector<VALUE> & vect){
    quick_sort(vect,0,vect.size()-1);
}







