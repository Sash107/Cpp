#include <iostream>
using namespace std;
class Dogs{
public:
string name;
int weight;
};
int main(){
    int n;
    cout<<" Enter the number of Dogs: ";
    cin>>n;
    Dogs temp, d[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the name of Dog "<<i+1<< " : ";
        cin>>temp.name;
        cout<<"Enter the weight of Dog "<<i+1<< " : ";
        cin>>temp.weight;
        d[i]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<"----------------------------------------"<<endl;
        cout<< "Dog "<<i+1<<" : "<<endl;
        cout << "Name of the Dog : "<< d[i].name<<endl;
        cout << "Weight of the dog : "<<d[i].weight<<endl;
    }    cout<<"----------------------------------------"<<endl;
}