#include<iostream>
#include<string>
using namespace std;

class user
{
public :

    string username;
    string password;
     string bank_name="Kangaal Bank Of India";
    string branch_name="Chor-Bazar Branch";
    string IFSE_CODE="KBOI420CBB";

};

class client : public user
{
public :


    string acc_holder_name;
    int acc_number=4207000;
    float acc_balance=0;
    void setUserName(string cuname)
    {
        username = cuname;
    }
    void setPassword(string cpass)
    {
        password = cpass;
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
        cout<<"\t\t\tUpdated Account Balance : "<<acc_balance;
    }
    void withdral(float x)
    {
        if(acc_balance>=x)
        {
            acc_balance-=x;
            cout<<"\t\t\tUpdated Account Balance : "<<acc_balance;
        }
        else
        {
            cout<<"\t\t\tYou Don't Have Enough Amount to Withdraw..."<<endl;
        }

    }
    void acc_info()
    {
        cout<<"\n\n"<<endl;
        cout<<"\t\tBank Name : "<<bank_name<<endl;
        cout<<"\t\tBank Branch Name : "<<branch_name<<endl;
        cout<<"\t\tBank's IFSC CODE : "<<IFSE_CODE<<endl;
        cout<<"\t\tUserName is : "<<username<<endl;
        cout<<"\t\tAccount Holder's Name : "<<acc_holder_name<<endl;
        cout<<"\t\tAccount Number : "<<acc_number<<endl;
        cout<<"\t\tAccount Balance : "<<acc_balance<<endl;
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
        bank_details();
    }
       void bank_details()
    {
        cout<<"\n\n"<<endl;
        cout<<"\t\tBank Name : "<<bank_name<<endl;
        cout<<"\t\tBank Branch Name : "<<branch_name<<endl;
        cout<<"\t\tBank's IFSC CODE : "<<IFSE_CODE<<endl;
    }
    void cases()
    {
        int flag=0;
        do
        {
            bank_details();
            char option;
            cout<<"\n\n\n";
            cout<<"\n\t\t1. Create new account \n\t\t2. Cash Deposit \n\t\t3. Cash withdrawl \n\t\t4. Account information \n\t\t5. Log out \n"<<endl;
            cout<<"\t\t\tselect an option : ";cin>>option;
            switch(option)
            {
            case '1':
                Create_new_account();
                break;
            case '2':
                Cash_Deposit();
                break;
            case '3':
                Cash_withdrawl();
                break;
            case '4':
                Account_information();
                break;
            case '5':
                cout<<"\t\t\tYou're Logged OUT...";
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
        string client_username,client_password;
        string ac_holdername;
        float ac_balance=0;
        cout<<"\t\t\tEnter username : ";
        cin>>client_username;
        cout<<"\t\t\tEnter password : ";
        cin>>client_password;
        cout<<"\t\t\tEnter Account Holder Name : ";
        cin>>ac_holdername;

        customer[clientCounter].setUserName(client_username);
        customer[clientCounter].setPassword(client_password);
        customer[clientCounter].setacnumber(clientCounter);
        customer[clientCounter].setacholdername(ac_holdername);
        customer[clientCounter].setbalance(ac_balance);
        cout<<"\t\t\tAccount Number : "<<customer[clientCounter].acc_number<<"\n"<<"\t\t\tAccount Balance : "<<ac_balance;
        clientCounter++;
    }
    void Cash_Deposit()
    {
        int acnum;
        float diposit_amount;
        cout<<"\t\t\tEnter Account Number : ";
        cin>>acnum;
        cout<<"\t\t\tAmount Of Deposit : ";
        cin>>diposit_amount;
        for(int i=0; i<=100; i++)
        {
            if(customer[i].acc_number==acnum)
            {
                customer[i].diposite(diposit_amount);
            }

        }
    }
    void Cash_withdrawl()
    {
        int acnum;
        float withdral_amount;
        cout<<"\t\t\tEnter Account Number : ";
        cin>>acnum;
        cout<<"\t\t\tAmount Of Deposit : ";
        cin>>withdral_amount;
        for(int i=0; i<=100; i++)
        {
            if(customer[i].acc_number==acnum)
            {
                customer[i].withdral(withdral_amount);
            }

        }
    }
    void Account_information()
    {
        int acnum;
        cout<<"\t\t\tEnter Account Number : ";
        cin>>acnum;
        for(int i=0; i<=100; i++)
        {
            if(customer[i].acc_number==acnum)
            {
                customer[i].acc_info();
            }

        }
    }

};
main()
{

   admin administrator;

    string admin_username,admin_password;
    cout<<"\n\t\t\tEnter UserName : ";cin>>admin_username;
    cout<<"\t\t\tEnter Password : ";cin>>admin_password;
    if(admin_username==admin_password&&admin_username=="admin")
    {
        administrator.cases();
    }

}
