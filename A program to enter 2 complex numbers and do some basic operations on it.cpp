#include <iostream>
using namespace std;
class Complex{
    double real,imag;
    public:
    Complex (double r,double i){
        real =r;
        imag=i;
    }
    Complex operator+(Complex const& obj){
        Complex temp(0,0);
        temp.real= real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    Complex operator-(Complex const& obj){
        Complex temp(0,0);
        temp.real= real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
    }
    Complex operator*(Complex const& obj){
        Complex temp(0,0);
        temp.real= (real*obj.real)-(imag*obj.imag);
        temp.imag= (real*obj.imag)+(imag*obj.real);
        return temp;
    }
    Complex operator/(Complex const& obj){
        Complex temp(0,0);
        temp.real= ((real*obj.real)+(imag*obj.imag))/((obj.real*obj.real)-(obj.imag*obj.imag)); 
        temp.imag= ((imag*obj.real)-(real*obj.imag))/((obj.real*obj.real)-(obj.imag*obj.imag));
        return temp;
    }
    void Display(){
        if (imag>=0){
        cout << real<<" + "<<imag<<"i"<<endl;
        }
        else {
        cout << real <<" - "<<(-1*imag)<<"i"<<endl;
        }
    }
       
};
int main(){
    while(1){
    int a;
    double r,i;
    cout <<"A program to do basic operations on the entered 2 complex numbers";
    cout <<endl<<endl<<endl;
    cout<<"Enter the Complex numbers: \n";
    cout<<"Real part of 1st complex number: ";
    cin>>r;
    cout<<"Imaginary part of 1st complex number: ";
    cin>>i;
    Complex c1(r,i);
    cout<<"Real part of 2nd complex number: ";
    cin>>r;
    cout<<"Imaginary part of 2nd complex number: ";
    cin>>i;
    cout<<endl<<endl;
    Complex c2(r,i);
    cout<<"Enter the desired operation: \n";
    cout<<"1. Addition two complex numbers."<<endl<<"2. Subtraction of two complex numbers."<<endl;
    cout<<"3. Multiplication of two complex numbers."<<endl<<"4. Division of two complex numbers."<<endl;
    cout<<"5. Display both the entered complex numbers."<<endl;
    cout<<"6. Re-enter the values of the Complex Numbers"<<endl;
    cout<<"7. Exit the program."<<endl;
    cin>>a;
    Complex c3(0,0);
    switch(a){
        case 1:
        c3= c1+c2;
        break;
        case 2:
        c3= c1-c2;
        break;
        case 3:
        c3= c1*c2;
        break;
        case 4:
        c3= c1/c2;
        break;
        case 5:
        cout<<"1st complex number is ";
        c1.Display();
        cout<<"2nd complex number is ";
        c2.Display();
        break;
        case 6:
        break;
        case 7:
        cout<<"Do you want to end the program?\n"<<"If 'yes' enter 1, else enter 0."<<endl;
        cin>>a;
        if (a==1){
        cout <<"\n---Program Finished---";
        cout<<endl<<"-----------------------------------------------------------"<<endl;
        return 0;
        }
        break;
        default:
        cout <<endl<<"-------Enter the correct option-------"<<endl;
        break;
    }
    if ((a>=1)&&(a<=4)){
        cout<<"\n Result: ";
        c3.Display();
    }
    char s;
        if ((a!=6)&&(a!=0)){
    cout<<"Do you want to continue the program ?"<<endl<<"Enter 'y' for yes and 'n' for no"<<endl;
    cin>>s;
    if (s=='n'){
        cout <<"\n---Program Finished---";
        cout<<endl<<"-----------------------------------------------------------"<<endl<<endl;
        break;
    }
        }
    cout<<endl<<"-----------------------------------------------------------"<<endl<<endl;
    }
    return 0;
}
