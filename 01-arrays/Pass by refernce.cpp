#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout<<"Inside function"<<endl;
    for(int i=0;i<size;i++){
        arr[i] = arr[i]*2;
    }
} 

int main(){
    int arr[]={1,2,3,4,5};
    changeArr(arr,5);
    cout<<"Inside main function"<<endl;
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}