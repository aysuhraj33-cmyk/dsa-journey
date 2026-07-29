#include<iostream>
using namespace std;
int LinearSearch(int arr[],int sz,int target){
    for (int i=0;i<sz;i++){
        if (arr[i] == target){
            return i; //target found at index i 
            
        
    }
    
}
return -1;// target not found
}

int main(){
    int arr[]={1,23,45,23,2334,2243,2232,424235236,6236,2322};
    int sz=10;
    int target=2322;
    cout<<"target found at index: "<<LinearSearch(arr,sz,target)<<endl;
    return 0;
}

