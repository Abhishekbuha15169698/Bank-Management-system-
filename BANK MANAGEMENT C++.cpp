#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
class bank
{
             char user_name[100];
             char Password[100];
             char Name_Of_Staff[300];
             char Acc_No_of_staff[3000];
             char Phone_no_of_staff[300];
             char Email_of_staff[100];
             int accutal_amount = 20000;
             int deposited_amount = 1000;
             int withdraw_amount = 2000;
             int transfer_amount = 5000;
             int Final_balance2 = accutal_amount - withdraw_amount;
             int Final_balance = accutal_amount + deposited_amount;
             int Final_balance3 = accutal_amount - transfer_amount;
public:
             void setdata()
             {
             fflush(stdin);
             cout<<"\t\tUsername:"; cin>>user_name;
             fflush(stdin);
             cout<<"\t\tPassword:"; cin>>Password;
             if(strcmp(user_name,"Abhishek")==0)
             {
                 if(strcmp(Password,"Buha")==0)
                 {
                     cout<<"\t\tLogin Successful....." << endl;
                 }
                 else
                    {
                        cout<<"\t\tPlease Enter Right details" << endl;
                        setdata();
                    }
             }
             }

             void staff_details()
             {
                 cout<<"\t\tEnter the Name of Staff:"; cin>>Name_Of_Staff;
                 cout<<"\t\tEnter the Account_No_of_staff:"; cin>>Acc_No_of_staff;
                 cout<<"\t\tEnter the Phone_no_of_staff:"; cin>>Phone_no_of_staff;
                 cout<<"\t\tEnter the Email_of_staff:"; cin>>Email_of_staff;
             }

             void print_staff_details()
             {
                 cout<<"\t\t---------------------------------------------------------------\t" <<  endl
                 << "\t\tName:" << Name_Of_Staff << endl << "\t\tAccount_number:" << Acc_No_of_staff << endl <<
                 "\t\tPhone_number:" << Phone_no_of_staff << endl << "\t\tEmail:" << Email_of_staff << endl <<
                 "\t\t---------------------------------------------------------------\t" <<  endl;
            }

            void deposite()
            {
                cout<<"Acutal amount:" <<  accutal_amount << endl;
                cout<<"Deposite The money:" << deposited_amount<< endl;
                cout<<"You have successfully deposite the amount." << endl;
                cout<<"Final Amount:"<<Final_balance<< endl ;
            }

            void withdraw()
            {
                cout<<"Acutal amount:" <<  accutal_amount << endl;
                cout<<"Withdraw The money:" << withdraw_amount<< endl;
                cout<<"You have successfully withdraw the amount." << endl;
                cout<<"Final Amount:"<<Final_balance2<< endl ;
            }

            void transfer()
            {
                cout<<"Acutal amount:" <<  accutal_amount << endl;
                cout<<"Transfer The money:" << withdraw_amount<< endl;
                cout<<"You have successfully transfer the amount." << endl;
                cout<<"Final Amount:"<<Final_balance3<< endl ;
            }
};
int main()
{
    char a;
    char A,S;
    cout<<"\t\t\t\t-:Bank Management System:-\t\t\t\t " << endl;
    cout<<"\t\t\t----------------------------------------------\t\t" << endl
        <<"\t\t\t\t......-:Design N Programed By:-.....\t\t\t\t " << endl ;
    cout<<"\t\t\t\t......Abhishek S. Buha.....\t\t\t\t " << endl << endl
        <<"\t\t\t----------------------------------------------\t\t" << endl
        <<"\t\t\t\t......-:Trainer:-.....\t\t\t\t " << endl
        << "\t\t\t\t......Milan Kathiriya.....\t\t\t\t " << endl ;

        cout<< "\t\t\t\tpress any key to continue:"; cin>>a;
        cout<< endl << endl << endl
            <<"\t\t---------------------------------------------------------------\t" << endl
            <<"\t\t-: Press A to Log in as administrater or S to login as staff :-" << endl
            <<"\t\t---------------------------------------------------------------\t" << endl;
            cin>>A;
             bank F;
             F.setdata();
              cout<<"\t\t---------------------------------------------------------------\t" << endl
            <<"\t\t\t\t-: Welcome as Staff :-" << endl
            <<"\t\t---------------------------------------------------------------\t" << endl;
            F.staff_details();
            F.print_staff_details();

            int choice;
            cout<<"Press  [1] to deposite the money:"<< endl << endl
                << "Press [2] to transfer the money:"<< endl << endl
                << "Press [3] to Withdraw the money:"<< endl << endl;
                cout<<"Enter Your Choice:"; cin>>choice;
            switch(choice)
            {
            case 1:
                    F.deposite();
                    break;
            case 2: F.transfer();
                    break;
            case 3:
                    F.withdraw();
                    break;
            default: cout<<"Please Enter correct choice:";
            }


        return 0;
}
