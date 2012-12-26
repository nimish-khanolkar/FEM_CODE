#ifndef ID_H
#define ID_H
#include <iostream>
//This represents the declaration of the class ID.h
//v1.0 2012.12.04 NP
//ID.h is a container class for storing integers

class ID
{
    public:
        // default Constructor
        ID();

        //Initiates the object to size Sz and the Contents array
        ID(int Sz, int Contents[]);

        //Initiates the object to size Sz and zero Contents array
        ID(int Sz);

        //Copy constructor
        ID(ID& ID_OBJECT);

        //Utility functions
        void Zero();                          //to zero out an ID Object
        void SetContent(int iPos, int iVal);  //to set content at specific location
        int GetPos(int iVal);                 //to find position of value iVal, if it exists
        int GetVal(int iPos);                 //to find value at position iPos, if it exists
        bool ID_Is_Same(ID const &ID_OBJECT);       //Compare two ID Objects
        void showID();                        //display items in ID in console

        //overloaded operators
        int operator[](int index);
        void operator= (ID const &ID_OBJECT);
        bool operator!= (ID const &ID_OBJECT);
        bool operator== (ID const &ID_OBJECT);

        //Destructor
        ~ID();

    protected:
    private:
        //iSize is size of the array
        int iSize;
        //int rgiContents is the contents array
        int *rgiContents;
};

#endif // ID_H
