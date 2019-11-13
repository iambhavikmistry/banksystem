#include<iostream>
using namespace std;
main()
{

    int i,j,k,l,co,n;
    float balance=0,add,wid,temp;
    char us[6],ps[6],yn;
login:
    cout<<"Enter Username : \n";
    cin>>us;
    cout<<"Enter Password : \n";
    cin>>ps;
    for(l=0; l<5; l++)
    {

        switch(l)
        {
        case 0:
            if(us[0] != 'a' || ps[0] != 'a')
            {

                goto login;
            }
            break;
        case 1:
            if(us[1] != 'd' || ps[1] != 'd')
            {

                goto login;
            }
            break;
        case 2:
            if(us[2] != 'm' || ps[2] != 'm')
            {

                goto login;
            }
            break;
        case 3:
            if(us[3] != 'i' || ps[3] != 'i')
            {

                goto login;
            }
            break;
        case 4:
            if(us[4] != 'n' || ps[4] != 'n')
            {

                goto login;
            }
            break;

        default:
            cout<<"Invalid";
            break;
        }
    }
options:
    cout<<"\n\n\n\t\t\tWelcome to Kangal Bank\n\n\n";
    cout<<"\t\tSelect Options\n\n";
    cout<<"\t\t1.Deposit\n";
    cout<<"\t\t2.Withdraw\n";
    cout<<"\t\t3.Check available balance\n";
    cout<<"\t\t4.LogOut\n\n\n";

    cout<<"Choose Option : ";
    cin>>co;

    switch(co)
    {
    case 1:
        cout<<"\t\t\nHow much amount do you want to DEPOSIT : ";
        cin>>add;
        balance+=add;
        cout<<"\t\t\nAvailable Balance is"<<balance;
        goto options;
        break;

    case 2:
        cout<<"\t\t\nHow much amount do you want to WITHDRAW : ";
        cin>>wid;
        if(wid>balance)
        {
            cout<<"\n\t\tYou don't have enough money\n\t\tPlease choose correct option";
            goto options;
        }

        balance-=wid;
        cout<<"\t\t\nAvailable Balance is : "<<balance;
        goto options;
        break;
    case 3:
        cout<<"\t\t\n\nAvailable Balance is : "<<balance;
        goto options;
        break;
    case 4:
        cout<<"\n\t\tyou are logged out\n\n\ndo you want to login again? yes or no :";
        cin>>yn;
        if(yn=='y'||yn=='Y')
        {
            goto login;
        }
        else
        {
            cout<<"BYE SEE YOU SOON";
        }
    }

}
