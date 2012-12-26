#include "ID.h"
#include <iostream>

//This represents the implementation of the class ID.
//For description of class and member functions
//refer ID.h
//v1.0 2012.12.04 NP

ID::ID()
{
    iSize=0;
   // rgiContents=0;
    //ctor
}
void ID::showID()
{
    std::cout<<"The Size is "<<iSize<<std::endl;
         for(int count=0;count<iSize;count++)
            {
                std::cout<<rgiContents[count]<<std::endl;
                //rgiContents++;
            }

}
 ID::ID(int Sz, int Contents[]):iSize(Sz),rgiContents(new int [Sz])
 {
     for(int i=0;i<iSize;i++)
        rgiContents[i]=Contents[i];

 }
 ID::ID(int Sz):rgiContents(new int[Sz]), iSize(Sz)
 {
     for(int i=0;i<iSize;i++)
     {
         rgiContents[i]=0;
     }
     //code to allocate an array of size Sz at runtime.
 }

ID::ID(ID& ID_OBJECT)
{
    this->iSize=ID_OBJECT.iSize;
    this->rgiContents=new int [ID_OBJECT.iSize];

    if (this->iSize!=0)
    {
        for(int i=0;i<this->iSize;i++)
            rgiContents[i]=ID_OBJECT.rgiContents[i];
    }
}
void ID::Zero()
{
    for(int i=0;i<this->iSize;i++)
        this->rgiContents[i]=0;
}
void ID::SetContent(int iPos,int iVal)
{
    if ((iPos<=this->iSize)&&(iPos>=0))
        this->rgiContents[iPos]=iVal;
        else
            std::cerr<<"Index out of range"<<std::endl;
}
int ID::GetPos(int iVal)
{
    int iPos=-1;
    for(int i=0;i<this->iSize;i++)
    {
        if(this->rgiContents[i]==iVal)
        iPos = i;
    }
    return iPos;
}
int ID::GetVal(int iPos)
{
    int iVal=-1;
    if((iPos>=0)&&(iPos<this->iSize))
    {
        iVal=this->rgiContents[iPos];
    }
    else
        std::cerr<<"Index out of range"<<std::endl;
    return iVal;
}

bool ID::ID_Is_Same(ID const &ID_OBJECT)
{
    bool is_same=true;
    if(this->iSize!=ID_OBJECT.iSize)
        is_same=false;

    if (is_same==true)
    {
        for(int i=0;i<this->iSize;i++)
            if(rgiContents[i]!=ID_OBJECT.rgiContents[i])
                is_same=false;
    }
    return is_same;
}
ID::~ID()
{
    delete rgiContents;
    //destructor
}
int ID::operator[](int index)
{
    return this->GetVal(index);
}

void operator= (ID const &ID_OBJECT)
{
    this->iSize=ID_OBJECT.iSize;
    this->rgiContents=new int [ID_OBJECT.iSize];

    if (this->iSize!=0)
    {
        for(int i=0;i<this->iSize;i++)
            this->rgiContents[i]=ID_OBJECT.rgiContents[i];
    }
}
