#include <vector>
#include <iostream>

using namespace std;












void merge(vector<int> & vect,int l,int m,int r){
    vector<int> L,R;

    int auxd=m-l+1,auxup=r-m;

    int i,j,k;

    for(i=0;i<auxd;i++){
        L.push_back(vect[l+i]);
    }

    for(i=0;i<auxup;i++){
        R.push_back(vect[m+i+1]);
    }

    k=l;
    i=0;
    j=0;
    while(i<auxd && j<auxup){
        if(L[i]<=R[j]){
            vect[k]=L[i];
            i++;
        }else{
            vect[k]=R[j];
            j++;
        }
        k++;
    }


    while(i<auxd){
        vect[k]=L[i];
        i++;
        k++;
    }

    while(j<auxup){
        vect[k]=R[j];
        j++;
        k++;
    }

}

void merge_sortR(vector<int> & vect,int down, int up){
    if(down < up){
        int m=(down+up)/2;
        merge_sortR(vect, down, m);
        merge_sortR(vect, m+1, up);
        merge(vect,down,m,up);//merges the two arrays
    }
}

void merge_sort(vector<int> & vect){
    merge_sortR(vect, 0, vect.size());

}