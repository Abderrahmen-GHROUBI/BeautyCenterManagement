#include<fstream>
#include <iostream>
#include<istream>
#include<vector>
using namespace std;
#include "string"

template<typename T>
class tableau
{
    vector<T> tem;
    public:
        T operator[](int i){return tem[i];}
      void push(const T& item){tem.push_back(item);}
      void pop(){if(!empty())tem.erase(tem.begin());}
      T& front(){return tem.front();}
      T& back(){return tem.back();}
      bool empty() const{return tem.empty();}
      size_t size() const{return tem.size();}



};
