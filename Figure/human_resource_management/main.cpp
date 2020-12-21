#include<iostream>

#include"Dependent.h"
using namespace std;
int main()
{   int amount = 0;

    Dependent a[5];

    a[amount].Add();
    
    for (int i =0; i<1;i++)
    {
        a[i].ReadTable();
    }



    Dependent A;
    //A.ReadTable(a,12);
    //A.Add(a,amount);
    //amount ++;
    //A.ReadTable(a,amount);
    system("pause");
    return 1;

}