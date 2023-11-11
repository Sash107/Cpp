#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low],i=low-1,j=high+1;
    while(i<j){
        do{
            i++;
        }while (arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot && j>low);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}
void QS(int arr[],int low,int high){
    if(high-low < 1)return;
    int m=partition(arr,low,high);
    QS(arr,low,m);
    QS(arr,m+1,high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QS(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
