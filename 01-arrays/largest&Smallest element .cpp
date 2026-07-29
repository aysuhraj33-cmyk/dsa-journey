#include <iostream>
using namespace std;
 int main(){
    int marks[]={10,20,30,40,50};
    int size=5;
    int largest= INT_MIN;
    int smallest= INT_MAX;
        for (int i=0;i<size;i++){
            if(marks[i]>largest){
                largest=marks[i];
            }
            if(marks[i]<smallest){
                smallest=marks[i];
            }
        }
        cout<<"Largest element: "<<largest<<endl;
        cout<<"Smallest element: "<<smallest<<endl;
    return 0;
 }