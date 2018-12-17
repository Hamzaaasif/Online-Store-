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
      child->name = fptr.file(name,i+1);
      child->nodes=new items*[1];
      temp->nodes[i]=child;
      items *product=new items;
      product->name="PRODUCT CODES";
      product->nodes=NULL;
      child->nodes[0]=product;
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
  root=root->nodes[0];
  cout<<root->nodes[0]->name<<" ";
  //cout<<root->nodes[3]->name<<" ";
  //cout<<root->nodes[4]->name<<endl;
}


 // private:
  string name;
  //int code;
  items **nodes;
};