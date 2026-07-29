#include <iostream>
using namespace std;

int main (){
    int marks[]={10,20,30,40,50};
    cout<<sizeof(marks)/sizeof(int)<<endl;
    //loops 
    for (int i =0; i<5 ;i++){
        cout<<marks[i]<<endl;
    }
   return 0;
}