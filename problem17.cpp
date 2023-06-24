#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sp,cp,amt;
    cout << "Enter Sell Price :";
    cin >> sp;

    cout << "Enter Cost Price :";
    cin >> cp;

    if (sp>cp)
    {
        amt = sp-cp;
        cout << "profit " << amt;
    }
    else if (cp>sp)
    {
        amt = cp-sp;
        cout << "Loss " << amt;
    }
    else
        cout << "No Profit , No Loss!";




    getch();
}
