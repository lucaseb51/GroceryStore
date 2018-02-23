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


while(tf==0){

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

if(input=='q'||input=='Q')
    {
        tf=1;
    }

if(input=='a'||input=='A')
{
    if(size<5)
    {
    cout<<"Name an item you would like to add to your list."<<endl;
    cin>>item;
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
