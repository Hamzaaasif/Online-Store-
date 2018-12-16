#include<iostream>
using namespace std;
#include"menu.h"
int main()
{
  menu *start=NULL;
  menu m;
  m.insert(&start);
  cout<<endl<<"               ***WELCOME TO ONLINE SHOPING STORE***  "<<endl<<endl;
  m.print(start);
  cout<<endl<<"*********Choose 1-7********** : ";
  int choice;
  cin >> choice;
  cout<<endl;
  m.printitems(m.search(choice,start));
  system("pause");
}