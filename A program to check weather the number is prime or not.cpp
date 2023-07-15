#include <iostream>
int main(){
    int n,b=0;
    std::cin>> n;
    if (n==1){
       std:: cout<<n<<"is not prime number\n";
        return 0;
    }
    if ((n==3)||(n==2)){
        std:: cout<<n<<"is prime number\n";
        return 0;
    }
    if ((n%3==0)||(n%2==0)){
        std::cout<<n<< " is not prime number";
        return 0;
    }
    for (int i=5;i*i<=n;i=i+6){
        if ((n%i==0)||(n%(i+2)==0)){
        std::cout<<n<< " is not prime";
            b=1;
            break;
        }
    }
    if (b==0){
        std::cout<<n<<" is prime number";
    }
return 0;
}
