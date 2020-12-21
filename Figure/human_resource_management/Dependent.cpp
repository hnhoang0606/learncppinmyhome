#include "Dependent.h"
#include<iostream>
using namespace std;
Dependent::Dependent(){}
Dependent::Dependent(long eSSN,std::string dependentName,char sex,std::string bDate,std::string relationShip){
    ESSN=eSSN;
    DependentName=dependentName;
    Sex=sex;
    BDate=bDate;
    Relationship=relationShip;
}

void Dependent::ReadTable()
    {   cout<<"ESSN       "<<"DependentName       "<<"Sex       "<<"BDate       "<<"Relationship"<<endl;
        
        cout<<this->ESSN<<"       "<<this->DependentName<<"       "<<this->Sex<<"       "<<this->BDate<<"       "<<this->Relationship<<endl;
    }

void Dependent:: Add()
{ 
    cout<< " Enter information "<<endl;
    cout<<" Enter ESSN: "<<endl;
    cin>> this->ESSN;
    cout<<" Enter DependentName: "<<endl;
    cin>>this->DependentName;
    cout<<" Enter Sex: "<<endl;
    cin>>this->Sex;
    cout<<" Enter Relationship: "<<endl;
    cin>>this->Relationship;
   
}

/*
void Dependent::ReadTable(Dependent a[], int amount)
    {   cout<<"ESSN       "<<"DependentName       "<<"Sex       "<<"BDate       "<<"Relationship"<<endl;
        for(int i=0; i< amount; i++)
        {
            cout<<a[i].ESSN<<"       "<<a[i].DependentName<<"       "<<a[i].Sex<<"       "<<a[i].BDate<<"       "<<a[i].Relationship<<endl;
        }
    }


void Dependent:: Add(Dependent a[], int amount)
{ 
    cout<< " Enter information "<<endl;
    cout<<" Enter ESSN: "<<endl;
    cin>> a[amount].ESSN;
    cout<<" Enter DependentName: "<<endl;
    cin>>a[amount].DependentName;
    cout<<" Enter Sex: "<<endl;
    cin>>a[amount].Sex;
    cout<<" Enter Relationship: "<<endl;
    cin>>a[amount].Relationship;
   
}
*/