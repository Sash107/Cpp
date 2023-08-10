#include <iostream>
#include "header.h"
#include "number.h"
using namespace std;
int main(){
    num lol;
    Animal lmao;
    cout<<"A program to know the sound of the animal and its count"<<endl<<endl;
    cout<<"Enter the count of dog, cat and lion respectively: ";
    int temp1,temp2,temp3;
    cin>>temp1>>temp2>>temp3;
    lol.dog(temp1);
    lol.cat(temp2);
    lol.lion(temp3);
    lmao.Dog();
    lol.display_dog();
    lmao.Cat();
    lol.display_cat();
    lmao.Lion();
    lol.display_lion();
}