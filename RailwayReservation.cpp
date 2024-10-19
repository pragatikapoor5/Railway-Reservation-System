#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class RailwayReservation{

private:
fstream info;
string name;
int age;
string gender;
string city;
int token = 0;
int trainno;

public:
void mainmenu();
void customer();
void reservation();
void eticket();
};

void RailwayReservation :: mainmenu()
{


int option;
    
cout<<"\n\t\t____________WELCOME TO OM EXPRESS RAILWAYS____________\t\t\n";
cout<<endl;
cout<<"\n\t\t______________________MAIN MENU_______________________\t\t\n";
cout<<endl;
cout<<"\n\t  |       Enter 1 to add customer details     |\t\n";
cout<<"\n\t  |       Enter 2 for Train Reservation       |\t\n";
cout<<"\n\t  |       Enter 3 to get E-Ticket             |\t\n";
cout<<"\n\t  |       Enter 4 to Exit                     |\t\n";
cout<<endl;
cout<<"\n\t\tPlease Select One Option!";
cin>>option;

    switch(option)
    {
        case 1:
        customer();
        break;

        case 2:
        reservation();
        break;

        case 3:
        eticket();
        break;

        case 4:
        cout<<"\n\t_____THANK YOU_____\t\n"<<endl;
        exit(0);
        break;

        default:
        cout<<"Invalid Option!"<<endl;
    }

}

void RailwayReservation :: customer()
{
    int option;
    cout<<"\n\t Enter 1 to add details\t\n";
    cout<<"\n\t Enter 2 to go back\t\n";
    cout<<"Please select from the given options!";
    cin>>option;

    switch(option)
    {
    case 1:
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Enter your gender: "<<endl;
    cin>>gender;
    cout<<"Enter your city: "<<endl;
    cin>>city;

cout<<"\tYour details are saved!\t"<<endl;
    token = 1;

    case 2:
    mainmenu();
    break;

    }

}

void RailwayReservation :: reservation()
{
    
    if(token == 0){
        cout<<"\n\tTo reserve your seat please add customer details\t\n";
        cout<<endl;
        mainmenu();
    }
    
    else if(token == 1){
    int n = 5;
    int back = 0;
    string boardingcity;
    int cityoption;
    string cities[n] = {"Ahemdabad","Banglore","Delhi","Mumbai","Pune"};
    cout<<"Enter the city from where you have to take the train: ";
    cin>>boardingcity;
    info.open("railwayinfo.txt",ios::out);
    info<<boardingcity<<endl;
    info.close();
    cout<<"\tEnter the number to reserve the ticket to your destination city: \t"<<endl;
    for(int i = 0; i<n; i++){
        cout<<i+1<<". "<<boardingcity<<" to "<<cities[i]<<endl;
    }
city:
    cout<<"Please select from the given options!";
    cin>>cityoption;

    switch(cityoption)
    {
        case 1:
        cout<<"Your Destination is Ahemdabad!"<<endl;
        cout<<"Following are the trains available: "<<endl;

        cout<<"1. ADI - 115"<<endl;
        cout<<__DATE__<<"9:00 AM | Rs 1510"<<endl;
        cout<<"2. ADI - 329"<<endl;
        cout<<__DATE__<<"10:00 PM | Rs 1400"<<endl;

        cout<<"Select the train you want to book!"<<endl;
        cin>>trainno;
        cout<<"Your booking has been done!"<<endl;
        cout<<"You can print the E-Ticket from main menu"<<endl;

        if(trainno == 1){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Ahemdabad"<<endl;
            info<<115<<endl;
            info<<9<<endl;
            info<<"AM"<<endl;
            info<<1510<<endl;
            info.close();
        }
        else if(trainno == 2){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Ahemdabad"<<endl;
            info<<329<<endl;
            info<<10<<endl;
            info<<"PM"<<endl;
            info<<1400<<endl;
            info.close();
        }

back1:
        cout<<"Press 1 to go the main menu: "<<endl;
        cin>>back;
        if(back == 1)
        {
            mainmenu();
        }
        else
        {
            cout<<"Invalid Option"<<endl;
goto back1;
        }
        break;

        case 2:
        cout<<"Your Destination is Banglore!"<<endl;
        cout<<"Following are the trains available: "<<endl;

        cout<<"1. SBC - 102"<<endl;
        cout<<__DATE__<<" 6:00 PM | Rs 3500"<<endl;
        cout<<"2. SBC - 523"<<endl;
        cout<<__DATE__<<" 11:00 PM | Rs 3400"<<endl;

        cout<<"Select the train you want to book!"<<endl;
        cin>>trainno;
        cout<<"Your booking has been done!"<<endl;
        cout<<"You can print the E-Ticket from main menu"<<endl;

        if(trainno == 1){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Banglore"<<endl;
            info<<102<<endl;
            info<<6<<endl;
            info<<"PM"<<endl;
            info<<3500<<endl;
            info.close();
        }
        else if(trainno == 2){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Banglore"<<endl;
            info<<523<<endl;
            info<<11<<endl;
            info<<"PM"<<endl;
            info<<3400<<endl;
            info.close();
        }
back2:
        cout<<"Press 1 to go the main menu: "<<endl;
        cin>>back;
        if(back == 1)
        {
            mainmenu();
        }
        else
        {
            cout<<"Invalid Option"<<endl;
goto back2;
        }
        break;

        case 3:
        cout<<"Your Destination is Delhi!"<<endl;
        cout<<"Following are the trains available: "<<endl;

        cout<<"1. DLI - 403"<<endl;
        cout<<__DATE__<<" 6:00 AM | Rs 540"<<endl;
        cout<<"2. DLI - 555"<<endl;
        cout<<__DATE__<<" 1:00 AM | Rs 320"<<endl;

        cout<<"Select the train you want to book!"<<endl;
        cin>>trainno;
        cout<<"Your booking has been done!"<<endl;
        cout<<"You can print the E-Ticket from main menu"<<endl;

        if(trainno == 1){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Delhi"<<endl;
            info<<403<<endl;
            info<<6<<endl;
            info<<"AM"<<endl;
            info<<540<<endl;
            info.close();
        }
        else if(trainno == 2){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Delhi"<<endl;
            info<<555<<endl;
            info<<1<<endl;
            info<<"AM"<<endl;
            info<<320<<endl;
            info.close();
        }
back3:
        cout<<"Press 1 to go the main menu: "<<endl;
        cin>>back;
        if(back == 1)
        {
            mainmenu();
        }
        else
        {
            cout<<"Invalid Option"<<endl;
goto back3;
        }
        break;

        case 4:
        cout<<"Your Destination is Mumbai!"<<endl;
        cout<<"Following are the trains available: "<<endl;

        cout<<"1. MMCT - 956"<<endl;
        cout<<__DATE__<<" 11:00 AM | Rs 740"<<endl;
        cout<<"2. MMCT - 741"<<endl;
        cout<<__DATE__<<" 6:00 PM | Rs 670"<<endl;

        cout<<"Select the train you want to book!"<<endl;
        cin>>trainno;
        cout<<"Your booking has been done!"<<endl;
        cout<<"You can print the E-Ticket from main menu"<<endl;

        if(trainno == 1){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Mumbai"<<endl;
            info<<956<<endl;
            info<<11<<endl;
            info<<"AM"<<endl;
            info<<740<<endl;
            info.close();
        }
        else if(trainno == 2){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Mumbai"<<endl;
            info<<741<<endl;
            info<<6<<endl;
            info<<"PM"<<endl;
            info<<670<<endl;
            info.close();
        }
back4:
        cout<<"Press 1 to go the main menu: "<<endl;
        cin>>back;
        if(back == 1)
        {
            mainmenu();
        }
        else
        {
            cout<<"Invalid Option"<<endl;
goto back4;
        }
        break;

        case 5:
        cout<<"Your Destination is Pune!"<<endl;
        cout<<"Following are the trains available: "<<endl;

        cout<<"1. PUNE - 325"<<endl;
        cout<<__DATE__<<" 5:00 AM | Rs 2700"<<endl;
        cout<<"2. PUNE - 958"<<endl;
        cout<<__DATE__<<" 3:00 PM | Rs 3200"<<endl;

        cout<<"Select the train you want to book!"<<endl;
        cin>>trainno;
        cout<<"Your booking has been done!"<<endl;
        cout<<"You can print the E-Ticket from main menu"<<endl;

        if(trainno == 1){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Pune"<<endl;
            info<<325<<endl;
            info<<5<<endl;
            info<<"AM"<<endl;
            info<<2700<<endl;
            info.close();
        }
        else if(trainno == 2){
            info.open("railwayinfo.txt", ios::app| ios::out);
            info<<"Pune"<<endl;
            info<<958<<endl;
            info<<3<<endl;
            info<<"PM"<<endl;
            info<<3200<<endl;
            info.close();
        }
back5:
        cout<<"Press 1 to go the main menu: "<<endl;
        cin>>back;
        if(back == 1)
        {
            mainmenu();
        }
        else
        {
            cout<<"Invalid Option!"<<endl;
goto back5;
        }
        break;

        default:
        cout<<"Invalid Option!"<<endl;
        cout<<"Please try again"<<endl;
goto city;
        break;
    }


    }

    }


void RailwayReservation :: eticket()
{
ticket:
int option;
cout<<"\n\tPress 1 to collect your E-Ticket"<<endl;
cout<<"\n\tPress 2 to go back"<<endl;
cin>>option;

switch(option){

    case 1:
    if(trainno == 1 || trainno == 2)
    {
        string bcity;
        string dcity;
        int traincode;
        int time;
        string ampm;
        int ticketcost;
        // --
        if(!info){
            cout<<"No File Found!";
        }
        // --
        info.open("railwayinfo.txt", ios::in);
        info>>bcity>>dcity>>traincode>>time>>ampm>>ticketcost;
        info.close();
        
    cout<<"This is your E-ticket!"<<endl;
    cout<<"-------------------------------------------------------------------\n";
    cout<<"\n\t_____OM EXPRESS RAILWAYS_____\t\n";
    cout<<"\n\t_____________________________\t\n";
    cout<<"\n\tCustomer name: "<<name<<endl;
    cout<<"\n\tCustomer age: "<<age<<endl;
    cout<<"\n\tCustomer Gender: "<<gender<<endl;
    cout<<"\n\t_____DESCRIPTION_____\t\n";
    cout<<"Your ticket is"<<endl;
    cout<<"From: "<<bcity<<endl;
    cout<<"To: "<<dcity<<endl;
    cout<<"Train Code: "<<traincode<<endl;
    cout<<"Departure Time: "<<time<<":00 "<<ampm<<endl;
    cout<<"Train Ticket Cost: Rs "<<ticketcost<<endl;
    cout<<endl;
    cout<<"\t--Thank you for choosing OM EXPRESS Railways--\t"<<endl;
    cout<<"-------------------------------------------------------------------\n";
    
        
    }

    else
    {
        cout<<"No E-Ticket Available"<<endl;
    }
    break;

    case 2:
    mainmenu();
    break;
    default:
    cout<<"Invalid option!"<<endl;
goto ticket;
}
}


int main(){
    RailwayReservation user;
    user.mainmenu();
   return 0;
}