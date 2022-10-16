#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"\n\n\t\t\tWELCOME TO   PARKING SYSTEM   BY ASHISH"<<endl;
    cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Parking number of limit  is 100"<<endl;
    int car=0;
    int rickshaw=0;
    int bus =0;
    int bike=0;
    int heavy=0;
    int input;
    int amount,count;
    amount=0;
    count=0;
    while(true)
    {
        cout<<"**********************************************************"<<endl;
    cout<<"Press 1 for rickshaw parking"<<endl;
    cout<<"press 2 for car parking"<<endl;
    cout<<"press 3 for bus parking"<<endl;
    cout<<"press 4 for bike/cycle parking"<<endl;
    cout<<"press 5 for heavy vehicle parking"<<endl;
    cout<<"press 6 to show the record parking"<<endl;
    cout<<"Press 7 to delete the record parking"<<endl;
    cout<<"press 8 for exit the program"<<endl;
    cout<<"**********************************************************"<<endl;
    cin>>input;
    {


    if(input==1)
    {
        system("cls");
        if(count<=100)
        {
        rickshaw ++;
        amount=amount+50;
        count=count+1;
        cout<<"congratulations your space for parking is confirm"<<endl;
        cout<<"now free space is : "<<100-(car+bus+bike+heavy+rickshaw)<<endl;
        }
        else{
            cout<<"NO MORE PARKING ,PARKING IS FULL"<<endl;
        }
    }
    else if(input==2)
    {
        system("cls");
        if(count<=100)
        {
            car++;
        amount=amount+50;
        count=count+1;
        cout<<"congratulations your space for parking is confirm"<<endl;
        cout<<"now free space is : "<<100-(car+bus+bike+heavy+rickshaw)<<endl;
        }
        else{
            cout<<"NO MORE PARKING ,PARKING IS FULL"<<endl;
        }
        amount=amount+100;
        count=count+1;
    }
    else if(input==3)
    {
        system("cls");
        if(count<=100)
        { bus++;
        amount=amount+50;
        count=count+1;
        cout<<"congratulations your space for parking is confirm"<<endl;
        cout<<"now free space is : "<<100-(car+bus+bike+heavy+rickshaw)<<endl;
        }
        else{
            cout<<"NO MORE PARKING ,PARKING IS FULL"<<endl;
        }
        amount=amount+200;
        count=count+1;
    }
    else if(input==4)
    {
        system("cls");
        if(count<=100)
        {
            bike++;
        amount=amount+50;
        count=count+1;
        cout<<"congratulations your space for parking is confirm"<<endl;
        cout<<"now free space is : "<<100-(car+bus+bike+heavy+rickshaw)<<endl;
        }
        else{
            cout<<"NO MORE PARKING ,PARKING IS FULL"<<endl;
        }
        amount=amount+30;
        count=count+1;
    }
    else if(input==5)
    {
        system("cls");
        if(count<=100)
        { heavy++;
        amount=amount+50;
        count=count+1;
        cout<<"congratulations your space for parking is confirm"<<endl;
        cout<<"now free space is : "<<100-(car+bus+bike+heavy+rickshaw)<<endl;
        }
        else{
            cout<<"NO MORE PARKING ,PARKING IS FULL"<<endl;
        }
        amount=amount+500;
        count=count+1;
    }
    else if(input==6)
    {
        system("cls");
        cout<<"*******************************************"<<endl;
        cout<<"The total amount ="<<amount<<endl;
        cout<<"The total number of vehicle parked="<<count<<endl;
        cout<<"The total number of rickshaw parked ="<<rickshaw<<endl;
        cout<<"The total number of car parked ="<<car<<endl;
        cout<<"The total number of bus parked ="<<bus<<endl;
        cout<<"The total number of bike/cycle parked ="<<bike<<endl;
        cout<<"The total number of heavy vehicle parked ="<<heavy<<endl;
         cout<<"*******************************************"<<endl<<endl;
    }
    else if(input==7)
    {
        system("cls");
        amount=0;
        count=0;
        rickshaw=0;
        car=0;
        bus=0;
        heavy=0;
        bike=0;

         cout<<"*******************************************"<<endl<<endl;
         cout<<"RECORD DELETED"<<endl;
          cout<<"*******************************************"<<endl<<endl;
    }
    else if(input==8)
    {
        cout<<"\n\n\t\t\t THANKS FOR VISITING "<<endl;
        cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~"<<endl;
        break;
    }
    else{
        cout<<"Invalid number"<<endl;
    }
    }
    }
    return 0;
}
