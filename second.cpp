#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main()
{

        vector<string> list;
        int numItems = 0;
        char input;
        string deleted;
        string item;

        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if ( list.size () != 0 )
                {
                        cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                /*if ( list.size () != 0)
                  {
                  cout<<"\nYour choice (A/D/Q): ";
                  }*/
                
                        cout<<"\nYour choice (A/Q): ";

                        cin>>input;

                        if (toupper (input) == 'D' )
                        {
                                deleted = list[list.size () -1];
                                list.pop_back ();
                                cout<< deleted << "was deleted from the list." << endl;
                        }
                        if  (toupper (input) == 'A')
                        {

                                cout<<"What is the item?"<<endl;
                                cin>>item;

                                list.push_back (item);
                                numItems += 1;
                        }
                } while ( toupper (input) != 'Q');

                if ( toupper (input) == 'Q' && numItems == 0 )
                { 
                        cout<< "No items to buy!"<<endl;
                }
                else if ( toupper (input) == 'Q')
                {cout<<"=ITEMS TO BUY=="<<endl;
                        for (int i=0; i<= (list.size() -1); i++)

                        {
                                cout << i << " " << list[i] << endl;
                        }
                }
                return 0;
        }
