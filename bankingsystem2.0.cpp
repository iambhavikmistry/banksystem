#include<iostream>
#include<string>
using namespace std;

class bank_details
{

public :
    string bank_name,branch_name,IFSE_CODE;
};

class banking_portal
{
public :
    string username,password;
    string acc_holder_name;
    int acc_number;
    float acc_balance=0;
    void setValue()
    {
        cout<<"Enter Account Holder Name : ";
        cin>>acc_holder_name;
        cout<<"Enter Account Number : ";
        cin>>acc_number;
    }
void showDetails()
    {
        cout<<"Account Holder Name : "<<acc_holder_name<<endl;
        cout<<"Account Number : "<<acc_number<<endl;
    }
};




main()
{
    bank_details bank;
    bank.bank_name="Kangaal Bank Of India";
    bank.branch_name="Chor-Bazar Branch";
    bank.IFSE_CODE="KBOI420CBB";

    banking_portal user[5];
user[0].setValue();
user[0].showDetails();



}
