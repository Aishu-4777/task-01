/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

struct Detail{
    string Fname;
    string Lname;
    int date;
    int month;
    int year;

    Detail(string Fname,string Lname,int date,int month,int year){
        this->Lname = Lname;
        this->Fname = Fname;
        this->date = date;
        this->month = month;
        this->year = year;
    }
};

void showAll(vector<Detail> &list){
    for(int i=0;i<list.size();i++){
        cout<<list[i].Fname<<" "<<list[i].Lname<<" : "<<list[i].date<<"/"<<list[i].month<<"/"<<list[i].year<<endl;
    }
    cout<<endl;
}

void displayByName(vector<Detail> &list){
    string Fname,Lname;
    cout<<"Enter First Name of Person : ";
    cin>>Fname;

    cout<<"Enter last Name of Person : ";
    cin>>Lname;

    int flag = 1;
    int n = list.size();
    for(int i=0;i<n;i++){
        if(list[i].Fname == Fname && list[i].Lname == Lname){
            flag = 0;
            cout<<list[i].Fname<<" "<<list[i].Lname<<" ";
            cout<<"D.O.B is : "<<list[i].date<<"/"<<list[i].month<<"/"<<list[i].year<<endl<<endl;
        }
    }

    if(flag)
    cout<<"Not Found"<<endl<<endl;
}

void displayByMonth(vector<Detail> &list){
    int month;
    cout<<"Enter Month : ";
    cin>>month;

    for(int i=0;i<list.size();i++){
        if(list[i].month == month){
            cout<<list[i].Fname<<" "<<list[i].Lname<<" "<<list[i].date<<"/"<<list[i].month<<"/"<<list[i].year<<endl;
        }
    }

    cout<<endl;
}

void deleteByName(vector<Detail> &list){
    string Fname,Lname;

    cout<<"Enter First Name : ";
    cin>>Fname;

    cout<<"Enter Last Name : ";
    cin>>Lname;

    int flag = 1;
    for(int i=0;i<list.size();i++){
        if(list[i].Fname == Fname && list[i].Lname == Lname){
            list.erase(list.begin() + i);

            cout<<"Deleted Successfully"<<endl;
            flag = 0;
            break;
        }
    }

    if(flag)
        cout<<"Not Found"<<endl;
}

void create(vector<Detail> &list){

    string Fname,Lname;
    int date,month,year;

    cout<<"First Name : ";
    cin>>Fname;

    cout<<"Last Name : ";
    cin>>Lname;

    cout<<"Date : ";
    cin>>date;

    cout<<"Month : ";
    cin>>month;

    cout<<"Year : ";
    cin>>year;

    Detail d(Fname,Lname,date,month,year);
    list.push_back(d);
    cout<<"Successfully Created"<<endl<<endl;
}

int main()
{
    int t;
    vector<Detail> list;
     while(true){


        cout<<"Enter 1 to Create"<<endl;
        cout<<"Enter 2 to Display Date of Birth By Name"<<endl;
        cout<<"Enter 3 to Display Date of Birth By Month"<<endl;
        cout<<"Enter 4 to Delete person detail by Name"<<endl;
        cout<<"Enter 5 to Show all"<<endl;
        cin>>t;

        if(t == 0){
            break;
        }else if(t == 1){
            create(list);
        }else if(t == 2){
            displayByName(list);
        }else if(t == 3){
            displayByMonth(list);
        }else if(t == 4){
            deleteByName(list);
        }else if(t == 5){
            showAll(list);
        }else{
            cout<<"Enter valid input"<<endl;
        }
    }

    cout<<"Good Bye"<<endl;

    return 0;
}