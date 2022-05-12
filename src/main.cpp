#include<iostream>
#include "swap.h"
using std::cout;
using std::endl;
 
int main(){
    int val1 = 10;
    int val2 = 20;  
    
    cout<<" Before swap :"<<endl;
    cout<<val1<<endl<<val2<<endl;
    swap(val1,val2);
    cout<<" After swap :"<<endl;
    cout<<val1<<endl<<val2<<endl;
}  