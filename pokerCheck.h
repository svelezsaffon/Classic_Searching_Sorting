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





    unsigned int have_triplet(){
        unsigned int ret=0;
        int check2=0;
        int check=0;

        for(int i=0;i<5;i++){

            if((check & (1<<this->hand[i]))){
                if(check2 &(1<<this->hand[i])){

                    ret=1;
                    break;
                }

                check2 |=1<<this->hand[i];
            }
            check |=1<<this->hand[i];
        }
        return ret;
    }




    unsigned int full_house(){

        int checkp=0;
        int pair=0;
        for(int i=0;i<5;i++){
            if(this->hand[i]>=0) {

                if ((checkp & (1 << this->hand[i]))) {
                    pair = 1;
                    this->hand[i]=-1;
                    break;
                }

                checkp |= 1 << this->hand[i];
            }

        }


        int triplet=0;
        int check2=0;
        int check=0;

        for(int i=0;i<5;i++){

            if(this->hand[i]>=0) {
                if ((check & (1 << this->hand[i]))) {
                    if (check2 & (1 << this->hand[i])) {
                        triplet=1;
                        break;
                    }

                    check2 |= 1 << this->hand[i];
                }
                check |= 1 << this->hand[i];
            }
        }

        return pair & triplet;
    }





};

