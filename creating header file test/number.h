#ifndef number
#define number
#include <iostream>
#include "header.h"
class num{
    int d,c,l;
    public:
    int dog(int temp){
        d=temp;
    }
    int cat(int temp){
        c=temp;
    }
    int lion(int temp){
        l=temp;
    }
    void display_dog(){
        std::cout<<"The total number of dogs are: "<<d<<std::endl;
    }
    void display_cat(){
        std::cout<<"The total number of cats are: "<<c<<std::endl;
    }
    void display_lion(){
        std::cout<<"The total number of lions are: "<<l<<std::endl;
    }
};
#endif