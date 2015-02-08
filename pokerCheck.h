#include <vector>
#include <iostream>

using namespace std;



class pokerHand{

private:
    int hand[5];

public:


    void insert(int card,int pos){
        this->hand[pos]=card;
    }




    unsigned int have_pair(){
           unsigned int ret=0;
          int check=0;

        for(int i=0;i<5;i++){

            if((check & (1<<this->hand[i]))){
                ret=1;
                break;
            }

            check |=1<<this->hand[i];


        }
        return ret;
    }








};

