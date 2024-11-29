#include<iostream>
using namespace std;
class cinema
{
    public:
    int seats[10][7];
    int n,m;
    void assign()
    {
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<7; j++)
        {
            seats[i][j]=0;
        }
    }
    }

    void tobook()
    {
        cout<<"please enter the row number: ";
        cin>>n;
        cout<<"please enter the column number: ";
        cin>>m;
        seats[n][m]=1;
        cout<<"your seat at ["<<n<<","<<m<<"] is booked."<<endl;
    }

    void available()
    {
        cout<<"List of available seats: "<<endl;
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(seats[i][j]==0 || seats[i][j]==2)
                {
                    cout<<"["<<i<<","<<j<<"]";
                    
                }
                cout<<"\t";
            }
             cout<<endl;
        }
    }

    void booked()
    {
        cout<<"List of booked seats: "<<endl;
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(seats[i][j]==1)
                {
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
                //cout<<"\t";
            }
            //cout<<endl;
        }
    }

    void cancle()
    {
        cout<<"for cancellation:"<<endl;
        cout<<"please enter row number: ";
        cin>>n;
        cout<<"please enter column number: ";
        cin>>m;
        if(seats[n][m]==1)
        {
        seats[n][m]=2;
        cout<<"your cancelation was successful:"<<endl;
        cout<<"List of cancelled seates are: "<<endl;
        }
        else
        cout<<"seat was not booked"<<endl;

        
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(seats[i][j]==2)
                {
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
            }
        }

    }
};
int main()
{
    cinema c1;
    int choice;
    c1.assign();
    cout<<"Welcome to Cinema Ticket Booking \n Please choose one of the options given below: \n";
    
    while(1)
    {
        cout<<endl<<"1. Book a seat"<<endl;
        cout<<"2. See the List of Available Seats."<<endl;
        cout<<"3. See the list of booked seats. "<<endl;
        cout<<"4. cancle a seat and see the list of cancelled seats"<<endl; 
        cout<<"5. exit"<<endl;
        cout<<"Enter Your choice ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case 1:
            {
                cout<<"for booking the seat: "<<endl;
                c1.tobook();
                break;
            }
            case 2:
            {
                
                c1.available();
                break;
            }
            case 3:
            {
                
                c1.booked();
                break;
            }
            case 4:
            {
                
                c1.cancle();
                break;
            }
            case 5:
            {
                
               exit(0);
               break;
            }
        }
    }
    return 0;
}