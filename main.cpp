//Author: Lucas Eastburn
#include<iostream>
#include<string>
using namespace std;

int main()
{
  int size=0;//where at in the array
  string list[5]; //array of 5 strings
  char input;
  int tf=0;
  string item;
  int i;

while(tf==0){

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

if(input=='q'||input=='Q')
    {
       cout<<"\n1 "<<list[0]<<endl;
       cout<<"2 "<<list[1]<<endl;
       cout<<"3 "<<list[2]<<endl;
       cout<<"4 "<<list[3]<<endl;
       cout<<"5 "<<list[4]<<endl;
        
        tf=1;
    }

if(input=='a'||input=='A')
{   
    cout<<"What is the item?"<<endl;
    cin>>item;
    if(size<5){
    list[size]=item;
    size++;
    }else
        {
        cout<<"You'll need a bigger list!"<<endl;
        }   



}
}
  return 0;
}
