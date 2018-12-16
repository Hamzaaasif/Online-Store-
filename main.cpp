#include<iostream>
using namespace std;
#include"menu.h"
#include"cart.h"
int main()
{
  cart *top=NULL;
  cart c;
  menu *start=NULL;
  menu m;
  m.insert(&start);
  cout<<endl<<"               ***WELCOME TO ONLINE SHOPING STORE***  "<<endl;
  cout<<endl<<"           *********MAIN MENU**********  "<<endl;
  m.print(start);
  cout<<endl<<"        *********Choose 1-7********** : ";
  int choice;
  cin >> choice;
  cout<<endl;
  system("cls");
  cout<<endl<<"               ***WELCOME TO ONLINE SHOPING STORE***  "<<endl;
  m.printitems(m.search(choice,start));
  int qua;
  label:
  cout<<"*********ADD TO CART**********"<<endl;
  fptr.printfile();
  cout<<"        *********Choose Product********** : ";
  cin>>choice;
  cout<<"        *********Enter Quantity********** : ";
  cin>>qua;
  c.push(qua,fptr.file("PRODUCTS.txt",choice),&top);
  cout<<"Press '1' to add more products "<<endl;
  cin>>choice;
  if(choice==1)
  {
    goto label;
  }
  else
  {
    system("cls");
    cout<<endl<<"               ***WELCOME TO ONLINE SHOPING STORE***  "<<endl;
    cout<<"     ******YOUR CART****** : "<<endl;
    while(c.top(top)!=NULL)
    {
      c.pop(&top);
    }
  }
  system("pause");
}