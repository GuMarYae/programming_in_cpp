#include <iostream>
using namespace std;

int main(){

int size;
cout<<"enter the array zize ";
cin>>size;
//the keyword 'new' is how you would enter an array size which respects the pointer "*"
//we cant do this while making a normal array.
//this is called making dynamiic arrays
int* myArray = new int[size];

for (int i = 0; i<size;i++){

    cout<<"array index["<<i<<"] ";
    cin>>myArray[i];
}
for (int i = 0; i<size;i++){
    cout<<myArray[i]<<" "<<endl;

    myArray[3]=77;
    cout<<myArray[i]<<" "<<endl;
}

system("pause>0");


};