#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  string file (string filename,int line)
  {
    index=0;
    ifstream quest(filename);
    while(getline(quest , temp))
    {
      index++;
      if(index==line)
      {
      break;
      }
    }
    if(index >= line)
    {
      return temp;
    }
    else
    {
      return "NULL";
    }
  }

int calclines(string filename)
{
    index=0;
    ifstream quest(filename);
    while(getline(quest , temp))
    {
      index++;
    }
    return index;
}
  private:
  string temp;
  int index;
};