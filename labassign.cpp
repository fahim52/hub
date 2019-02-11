#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

class mystring
{
    int sizee;
    char *str;

public:

    mystring()
    {
        str=(char*)malloc(sizeof(char)*100);
        sizee= 100;
    }
    mystring(int a)
    {

        str=(char*)malloc(sizeof(char)*a);
        sizee= a;
    }
    bool setter(char *ptr)
    {
        int str_size=0;
        for(int i=0; ptr[i]!=NULL; i++)
        {
            str_size++;
        }

        if(str_size>sizee)
        {
            return false;
        }
        else
        {
            str=ptr;
            return true;
        }
    }

    void print_str()
    {
        cout<<str;
    }
};

/*int main()
{
    mystring ob1(7);
    bool a=ob1.setter("Hi ");
    if(a)
    {
        ob1.print_str();

    }
    else
    {
        cout<<"Allocation error";
    }
}*/
