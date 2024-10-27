#include<iostream>
#include<string>
using namespace std;

class SavingsAccount {
    static int cnt  ;
    string holder_name;
   int account_number=0 ;
    int bank_balance;
    const float interest_rate=4;

public:

    SavingsAccount() {
        holder_name="";
        bank_balance=0;
    }
    static void starting_account_num(int acc){
        cnt=acc;
    }
    void set_bank_balance(int x){
        bank_balance=x;
    }

    void set_name(string s1){
        holder_name=s1;
    }

    float get_deposited_interest_balance(){
        float p=interest_rate/100*bank_balance;
        return p;
    }

    void display_total_amount()  {
        float val=get_deposited_interest_balance();
        cout<<"Total ammount in users account by the end of the year is : "<<bank_balance+val<<endl;
    }
 
void static set_bank_account_number(SavingsAccount &a){ 
    if(a.account_number == 0) // check if account number is not set
        a.account_number = ++cnt; 
}

    void display_info(){
        cout<<"here is the display of given information :\n";
        cout<<"Account holders name : "<<this->holder_name<<endl;
        cout<<"Account number : "<<this->account_number<<endl;
        cout<<"Account balance :"<<this->bank_balance<<endl;
    }
};
  int  SavingsAccount::cnt;

int main(){
    SavingsAccount member[100];
    cout<<"enter account of first person :\n";
    int acc;
    cin>>acc;
    member[0].starting_account_num(acc);
    for(int i=0;i<100;i++){
        string s;
        cout<<"enter account holders name : "<<endl;
        cin>>s;
        int p=0;
        
        cout<<"enter amount: ";
        
        while(!(cin>>p) || p<1000 || p>100000){
         cin.clear();
         cin.ignore(10000, '\n');
                 cout<<"Invalid input. Please enter a valid amount between 1000 and 100000: "<<endl;

        }
  
    member[i].set_bank_balance(p);
    member[i].set_name(s);
    member[i].set_bank_account_number(member[i]);
    }
    for(int i=0;i<100 ;i++){
        member[i].display_info();
        float val= member[i].get_deposited_interest_balance();
        cout<<"Money deposited by the end of the year : "<<val<<endl;
        member[i].display_total_amount();
    }
    return 0;
}
