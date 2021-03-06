#include <iostream>
#include <fstream>
#include <cmath>
#include<math.h>
#include<iomanip>
#include<stdlib.h>


using namespace std;

//we will take the value of gamma as 1.4


float f(float x) //M2 function
{
    float a=pow(x,7);
    float b=(7*x*x)-1;
    float c=pow(b,2.5);
    float r = 1000*a/(6*c);
    return r;
}

int main()
{
    cout<<"We will take the value of gamma as 1.4"<<endl;
    float M1,r,Ans,M;
    M1=1;
    int i;
    cout <<"Enter the ratio of P02/P1"<<endl;
    cin>>r;
    ofstream myfile;
    myfile.open("M1_Iteration.csv");
    myfile <<"M1"<<","<<"f(M1)"<<endl;
    do
    {
      Ans=r-f(M1);
      M=M1;
      myfile <<M1<<","<<f(M1)<<endl;
      M1=M1+0.01;
      i+=1;
    }while (Ans>0);
    cout<<"Mach number ="<<M;
    return 0;
}
