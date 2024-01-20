#include <iostream>
using namespace std;

class firstsource
{
public :
        float a,b,c;
        int multiplication();
        int division();


        int addition()
{
        cout<<"\n---Addition Program---";
        cout<< "\nEnter the Value of A:";
        cin>>a;
        cout<< "Enter the Value of B:";
        cin>>b;
        c=a+b;

        cout<<"\nThe Added Value of " <<a <<" + " <<b<< " is:"<<c<<"\n";
}
        int subtraction()
{
        cout<<"\n---Subtraction Program---";
        cout<< "\nEnter the Value of A:";
        cin>>a;
        cout<< "Enter the Value of B:";
        cin>>b;
        c=a-b;
        cout<<"\nThe Subtracted Value of " <<a <<" - " <<b<< " is:"<<c<<"\n";
}
};
int firstsource :: multiplication()
{
    float a, b,c;
        cout<<"\n---Multiplication Program---";
        cout<< "\nEnter the Value of A:";
        cin>>a;
        cout<< "Enter the Value of B:";
        cin>>b;
        c=a*b;
        cout<<"\nThe Multiplied Value of " <<a <<" * " <<b<< " is:"<<c<<"\n";
}

int firstsource :: division()
{
    float a, b, c;
        cout<<"\n---Division Program---";
        cout<< "\nEnter the Value of A:";
        cin>>a;
        cout<< "Enter the Value of B:";
        cin>>b;
        c=a/b;
        cout<<"\nThe divided Value of " <<a <<" / " <<b<< " is:"<<c<<"\n";
}
int main()
{
 firstsource Ak,fs;
Ak.addition();
fs.subtraction();
Ak.multiplication();
fs.division();

    return 0;
}
