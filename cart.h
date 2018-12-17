#include<iostream>
using namespace std;
class cart
{
  public:
  void push(int quantity,string val,cart**top)
  {
    cart * ptr=new cart;
    ptr->data=val;
    ptr->quantity=quantity;
    if(*top==NULL)
    {
      ptr->next=NULL;
      *top=ptr;
    }
    else
    {
      ptr->next=*top;
      *top=ptr;
    }
  }


cart* top(cart * top)
  {
    if(top==NULL)
    {
      return NULL;
    }
    else
    {
     return top;
    }
  }

  void pop(cart ** top)
  {
    if(*top==NULL)
    {
      cout<<"Empty";
    }
    else
    {
    cart*curr=*top;
    *top=(*top)->next;
    string temp=curr->data;
    int quan=curr->quantity;
    free(curr);
    cout<< "Product : " << temp <<endl<< "Quantity : "<<quan<<endl<<endl;
    }
  }

  private:
  string data;
  int quantity;
  cart* next;
};
