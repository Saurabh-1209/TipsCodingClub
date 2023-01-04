#include<iostream>
using namespace std;

int main(){int gold{},goldc{},silver{},silverc{};
cout<<"Enter grams of gold"<<endl;;
cin>>gold;
cout<<"Enter price of gold"<<endl;;
cin>>goldc;
cout<<"Enter grams of silver"<<endl;;
cin>>silver;
cout<<"Enter price of silver"<<endl;;
cin>>silverc;
if(gold*goldc>=silver*silverc)
cout<<"Gold";
else
cout<<"Silver";
}