#include<iostream>
using namespace std;
int main(){
    int input{},temp{},temp2{},a;
    cout<<"Enter number to check for Armstrong"<<endl;
    cin>>input;
    temp2=input;
    while(temp2>0){
        a=temp2%10;
        temp=temp+(a*a*a);
        temp2=temp2/10;
    }
if(input==temp)
    cout<<"True";
else    
    cout<<"False";
}
