#include <iostream>

using namespace std;

//Banking Variables
double deposit, withdrawal, balance;
double TransferAccount=0;
int cash;

//Constant Banking Variable
double const_original_amount=10000;
int ExitCode=6;

//Array Of Customer Name
string CustomerName[3]={"LIAM SMITH", "EMMA JOHNSON", "AVA JONES"};

//Array Of Account Number
int AccountNumber[3]={1234, 5678, 9012};

//Array Of Account PIN
int AccountPin[3]={9004, 6769, 4200};

//Array Of Account Balance
double AccountBalance[3]={6000, 8000, 10000};

void DepositAmount()
{
    cout<<"***************DEPOSIT**************"<<endl;

        cout<<""<<endl;

    cout<<"HOW MUCH WOULD YOU LIKE TO DEPOSIT IN YOUR ACCOUNT "<<endl;
    cin>>deposit;

        cout<<""<<endl;

    if ( deposit<0 )
        cout<<"YOU CAN NOT DEPOSIT THAT AMOUNT"<<endl;
    else
        {
            balance=balance + deposit;
            cout<<"DEPOSIT:R "<<deposit<<endl;
            cout<<"BALANCE:R "<<balance<<endl;

                cout<<""<<endl;

            cout<<"THANK YOU FOR DEPOSITING R "<<deposit<<" IN OUR BANK. "<<endl;}
}
void WithdrawalAmount()
{
    cout<<"***************WITHDRAWAL**************"<<endl;

        cout<<""<<endl;

    cout<<"HOW MUCH WOULD YOU LIKE TO WITHDRAW FROM YOUR ACCOUNT "<<endl;
    cin>>withdrawal;

        cout<<""<<endl;

if (withdrawal>balance)
    cout<<"YOUR WITHDRAWAL AMOUNT CAN'T EXCEED YOUR BALANCE IN YOUR ACCOUNT"<<endl;
else
    {
        balance=const_original_amount - withdrawal;
        cout<<"BALANCE:R "<<balance<<endl;

            cout<<""<<endl;

        cout<<"THANK YOU FOR WITHDRAWING FROM OUR BANK. "<<endl;}
}
void CashSending()
{
    cout<<"***************SEND CASH**************"<<endl;

        cout<<""<<endl;


    cout<<"HOW MUCH WOULD YOU LIKE TO SEND TO ANOTHER ACCOUNT "<<endl;
    cin>>cash;

        cout<<""<<endl;

if (cash>balance)
    cout<<"YOUR SEND AN AMOUNT FOR MONEY THAT EXCEED YOUR BALANCE IN YOUR ACCOUNT"<<endl;
else
    {
        balance=balance - cash;
        cout<<"BALANCE ON YOUR ACCOUNT:R "<<balance<<endl;

            cout<<""<<endl;

        TransferAccount=TransferAccount + cash;
        cout<<"BALANCE ON THE TRANSFER ACCOUNT:R "<<TransferAccount<<endl;

            cout<<""<<endl;

        cout<<"THANK YOU FOR SENDING TO ANOTHER ACCOUNT. "<<endl;

            cout<<""<<endl;}
}
void BalanceCheck()
{
    cout<<"***************CHECK BALANCE**************"<<endl;

        cout<<""<<endl;

    balance=balance;
    cout<<"BALANCE:R "<<balance<<endl;

        cout<<""<<endl;

}
void ArrayDisplay()
{
    //Displaying Customer names
    cout<<"1. CUSTOMER: "<<CustomerName[0]<<", "<<"ACCOUNT NUMBER: "<<AccountNumber[0]<<", "<<"PIN: "<<AccountPin[0]<<", "<<"BALANCE:R "<<AccountBalance[0]<<endl;

        cout<<""<<endl;

    cout<<"2. CUSTOMER: "<<CustomerName[1]<<", "<<"ACCOUNT NUMBER: "<<AccountNumber[1]<<", "<<"PIN: "<<AccountPin[1]<<", "<<"BALANCE:R "<<AccountBalance[1]<<endl;

        cout<<""<<endl;

    cout<<"3. CUSTOMER: "<<CustomerName[2]<<", "<<"ACCOUNT NUMBER: "<<AccountNumber[2]<<", "<<"PIN: "<<AccountPin[2]<<", "<<"BALANCE:R "<<AccountBalance[2]<<endl;

        cout<<""<<endl;
}
void ExitSystem()
{
    cout<<"***************EXIT/CONTIUNE SYSTEM**************"<<endl;

        cout<<""<<endl;

    cout<<"THANK YOU FOR USING OUR BANKING SYSTEM"<<endl;
}
void MeunDisplay()
{
    int BankingSystemOptions;

        balance=const_original_amount;

    do{
        cout<<"**************************************************"<<endl;
        cout<<" WELCOME TO THE ORION STAR BANK "<<endl;
        cout<<"**************************************************"<<endl;

            cout<<""<<endl;


        cout<<"1. DEPOSIT "<<endl;
        cout<<"2. WITHDRAW "<<endl;
        cout<<"3. SEND CASH "<<endl;
        cout<<"4. CHECK BALANCE "<<endl;
        cout<<"5. CUSTOMER INFORMATION "<<endl;
        cout<<"6. EXIT "<<endl;
        cin>>BankingSystemOptions;

            cout<<""<<endl;

        switch (BankingSystemOptions)
        {
        case 1:
            DepositAmount();
            break;

        case 2:
            WithdrawalAmount();
            break;

        case 3:
            CashSending();
            break;

        case 4:
            BalanceCheck();
            break;

        case 5:
            ArrayDisplay();
            break;

        case 6:
            ExitSystem();
            break;

        default:
            cout<<"OUR BANK NOR OUR BANKING SYSTEM DO NOT OFFER SUCH OPTIONS. "<<endl;
            break;
        }
    }
        while (BankingSystemOptions != ExitCode);
}
int main()
{
    MeunDisplay();
    return 0;
}
