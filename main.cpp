/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 17, 2015, 12:43 PM
 */

#include <iostream>

using namespace std;
int &put (int n);
int vals[10];
int error=-1;

int main()
{
  put(0)=10;
  put(9)=20;
  cout<<vals[0]<<endl;
  cout<<vals[9]<<endl;
}

int & put(int n)
{
    if (n>=0 && n<=9)
    {
        return vals[n];
    }
    else
    {
        cout<<"error"<<endl;
        return error;
    }
}
