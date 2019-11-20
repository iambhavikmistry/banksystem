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
        cout<<"Enter UserName : " ;
        cin>>username;
        cout<<"Enter PassWord : " ;
        cin>>password;
    }
void showDetails()
    {
        cout<<"Account Holder Name : "<<acc_holder_name<<endl;
        cout<<"Account Holder's UserName : "<<username<<endl;
        cout<<"Account Number : "<<acc_number<<endl;
        cout<<"Account Balance : "<<acc_balance<<endl;
    }
};




main()
{
    int i=1,j=1;
    string choise;
    bank_details bank;
    bank.bank_name="Kangaal Bank Of India";
    bank.branch_name="Chor-Bazar Branch";
    bank.IFSE_CODE="KBOI420CBB";

    banking_portal user[101];

    user[0].username="admin";
    user[0].password="admin";

do{
    user[i].setValue();
    i++;
    cout<<"Do you want to add new user (yes/no) : " ;
    cin>>choise;
    if(choise=="no" || choise=="No" || choise=="NO" || choise=="nO")
    {
        break;
    }
}
while(i<=100);

user[j].showDetails();



}
