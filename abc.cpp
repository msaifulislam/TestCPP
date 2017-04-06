#include<iostream>
using namespace std;

int main(){
 int num, n, i;
 cout<<"How many times, You wanna check? ";
 cin>>n;
 for(i=0;i<n;i++){
   cout<<"Input your desire number: ";
   cin>>num;
     if(num%2 == 0){
        cout<<"This Number is EVEN: "<<num<<endl;
     }
    else{
        cout<<"This Number is ODD: "<<num<<endl;
    }
 }
}
