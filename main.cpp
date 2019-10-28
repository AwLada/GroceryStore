#include<iostream>
#include<string>
using namespace std;

int main()
{

        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string item;

do
{
        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
        cin>>input;
      //  while (toupper (input) != 'Q'){
                if (toupper (input) == 'A' && numItems < 5)
                {
                        cout<<"What is the item?"<<endl;
                        cin>>item;
                        list[numItems] = item;
                        numItems = numItems + 1;
                }

                else if (toupper (input) == 'A' && numItems >= 5)
                {
                        cout<<"You'll need a bigger list!"<<endl;
                        input = 'Q';

                }

              /*  if (numItems != 5)
                {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                } */
        }
while ( toupper (input) != 'Q');
if ( toupper (input) == 'Q' )
{
cout<<"==ITEMS TO BUY=="<<endl;
cout<<"1 "<<list[0]<<endl;
cout<<"2 "<<list[1]<<endl;
cout<<"3 "<<list[2]<<endl;
cout<<"4 "<<list[3]<<endl;
cout<<"5 "<<list[4]<<endl;
}
        return 0;
}
