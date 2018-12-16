#include<iostream>
using namespace std;
#include"items.h"
File fpt;
items m;
int i=1;
class menu 
{
  public:
  void insert(menu **start)
  {
    while(fpt.file("menu.txt",i)!="NULL")
    {
    menu *ptr = new menu;
    ptr->name=fpt.file("menu.txt",i);
    ptr->next=NULL;
    ptr->code=i;
    m.insert(ptr->name,&ptr->root);
    if(*start == NULL)
    {
      *start=ptr;
    }
    else
    {
        menu *curr=*start;
        while(curr->next!=NULL)
        {
          curr=curr->next;
        }
        curr->next=ptr;
    }
    i++;
    }
  }

  void print(menu *start)
  {
    if(start==NULL)
    {
      cout<<"List is empty"<<endl;
    }
    else
    {
      menu *curr=start;
      while(curr->next!=NULL)
      {
        cout<<curr->code<<"-"<<curr->name<<endl;
    //    m.print(curr->root);
        curr=curr->next;
      }
      cout<<curr->code<<"-"<<curr->name<<endl;
  //    m.print(curr->root);
    }
  }

  menu* search(int code,menu *start)
  {
    while(start->code!=code)
    {
      start=start->next;
    }
    return start;
  }

  void printitems(menu*node)
  {
    cout<<"************PRODUCTS*************"<<endl<<">>"<<node->name<<endl;
    string name=node->name;
    name+=".txt";
    int size=fptr.calclines(name);
    for(i=0 ; i<size ; i++)
    {
      cout<< (node->root->nodes[i])->name<<endl;
    }
    items * roo=node->root->nodes[0];
    cout<<endl<<endl<<"     "<<(roo->nodes[0])->name;
    cout<<endl;
  }


  private:
  menu* next;
  items *root=NULL;
  string name;
  int code;
};