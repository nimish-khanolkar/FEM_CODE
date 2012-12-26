#include <iostream>
#include "ID.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    int dummy[10] = {9,5,5,2,5,4,3,6,9,5};
    int a = 10;
    ID i(a,dummy);
    ID j(i);
    j.showID();
    std::cout<<j.ID_Is_Same(i)<<std::endl;
    std::cout<<"The position of 5 is "<<j.GetPos(5)<<std::endl;
    std::cout<<"The Value at 5 is "<<j.GetVal(5)<<std::endl;
    j.Zero();
    j.showID();
    std::cout<<j.ID_Is_Same(i)<<std::endl;
    j.SetContent(5,100);
    j.showID();
    cout<<j[5]<<"Overloading in action"<<endl;

    return 0;
}
