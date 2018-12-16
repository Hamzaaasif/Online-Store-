#include<iostream>
using namespace std;
#include"file.h"
File fptr;
class items
{
  public:
  void insert(string name,items**root)
  {
    int i;
    items *temp=new items;
    temp->name = name;
    name+=".txt";
    int size=fptr.calclines(name);
    temp->nodes = new items*[size];
    for(i=0;i<size;i++)
    {
      items* child=new items;
      //size=fptr.calclines("shoes.txt");
      child->name = fptr.file(name,i+1);
      child->nodes=NULL;
      temp->nodes[i]=child;
    }
    if(*root == NULL)
    {
      *root= temp;
    }
  }

void print(items * root)
{
  //cout<<root->name<<endl;
  cout<<root->nodes[0]->name<<" ";
  cout<<root->nodes[1]->name<<" ";
  cout<<root->nodes[2]->name<<endl<<endl;
  //cout<<root->nodes[3]->name<<" ";
  //cout<<root->nodes[4]->name<<endl;
}


 // private:
  string name;
  //int code;
  items **nodes;
};