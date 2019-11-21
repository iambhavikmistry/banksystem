#include<iostream>
#include<string>
using namespace std;
class user
{
public :

    string username;
    string password;

};

class client : public user
{
public :
    string acc_holder_name;
    int acc_number=4207000;
    float acc_balance=0;
    void setUserName(string name)
    {
        username = name;
    }
    void setPassword(string name)
    {
        password = name;
    }
    void setacnumber(int acnum)
    {
        acc_number += acnum+1;
    }
    void setacholdername(string acname)
    {
        acc_holder_name = acname;
    }
    void setbalance(float acbal)
    {
        acc_balance = acbal;
    }
    void diposite(float y)
    {
        acc_balance+=y;
        cout<<"Updated Account Balance : "<<acc_balance;
    }
};
class admin : public user
{
public :
    client customer[100];
    int clientCounter=0;
    admin()
    {
        username = "admin";
        password = "admin";
    }
    void cases()
    {
        int flag=0;
        do
        {

            char option;
            cout<<"\n1. Create new account \n2. Cash Deposit \n3. Cash withdrawl \n4. Account information \n5. Log out \n"<<endl;
            cout<<"select an option"<<endl;
            cin>>option;
            switch(option)
            {
            case '1':
                Create_new_account();
                break;
            case '2':
                Cash_Deposit();
                break;
//        case '3':
//            Cash_withdrawl();
//            break;
//        case '4':
//            Account_information();
//            break;
            case '5':
                flag=1;
                break;
            default :
                break;
            }

        }
        while(flag!=1);

    }
    void Create_new_account()
    {
        string uname1,pname1;
        string ac_holdername;
        float ac_balance=0;
        cout<<"Enter username : ";
        cin>>uname1;
        cout<<"Enter password : ";
        cin>>pname1;
        cout<<"Enter Account Holder Name : ";
        cin>>ac_holdername;

        customer[clientCounter].setUserName(uname1);
        customer[clientCounter].setPassword(pname1);
        customer[clientCounter].setacnumber(clientCounter);
        customer[clientCounter].setacholdername(ac_holdername);
        customer[clientCounter].setbalance(ac_balance);
        cout<<"Account Number : "<<customer[clientCounter].acc_number<<" "<<"Account Balance : "<<ac_balance;
        clientCounter++;
    }
    void Cash_Deposit()
    {
        int acnum;
        float diposit_amount;
        cout<<"Enter Account Number : ";
        cin>>acnum;
        cout<<"Amount Of Deposit : ";
        cin>>diposit_amount;
        for(int i=0; i<=100; i++)
        {
            if(customer[i].acc_number==acnum)
            {
                customer[i].diposite(diposit_amount);
            }

        }
    }
};
main()
{
    admin bhavik;
    string uname,pname;
    cout<<"enter username"<<endl;
    cin>>uname;
    cout<<"enter password"<<endl;
    cin>>pname;
    if(uname==pname&&uname=="admin")
    {
        bhavik.cases();
    }

}
