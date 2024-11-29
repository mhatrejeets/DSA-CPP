#include<iostream>
#include<string>
using namespace std;
class boogie{
    public:
    string seat_name;
    string arr[9];
    boogie* next;
   
};

boogie * nil(boogie * b1){
     
        for(int i =0; i<=8;i++){
            b1->arr[i]="0";
        
    }
    return b1;
}

boogie * bogie(boogie*b1,boogie * b2,boogie * b3){
    boogie * bog;
            cout<<"\n Enter boogie number :";
            int num;
            cin>>num;
    switch(num){
                case 1 : 
                    bog=b1;
                    break;

                case 2 :
                    bog = b2;
                    break;

                case 3 :
                    bog = b3;
                    break;

                default :
                    cout<<" \nInvalid entry \n";
                    break;
            }
            return bog;
}

boogie * book_seat(boogie * b1,boogie* b_name,int comp,string p_name){
    comp--;
    boogie * bg = b1;
    while(bg!=b_name){
        bg=bg->next;
    }
     if(bg->arr[comp]=="0" || bg->arr[comp]=="1"){
    
        bg->arr[comp] = p_name;

    }

    else{
        cout<<"\n Sorry, The seat is already booked. \n ";
    }

    return b1;
}

boogie * cancel_seat (boogie * b1, boogie *b_name, int comp){
     boogie * bg = b_name;
     comp--;
    // while(bg!=b_name){
    //     bg=bg->next;
    // }
    
     if(bg->arr[comp]=="0" || bg->arr[comp]=="1"){
        cout<<" \n The seat is already available.  \n";
     }
     else{
        cout<<endl;
        string name=bg->arr[comp];
        bg->arr[comp]= "1";
            cout<<name;
            cout<< " The seat is successsfully cancelled \n";
     }
     return b1;
}

boogie* display(boogie * b1){
    boogie * bg = b1;
    int m=1;
    while(bg!=NULL){
        
    cout<<" \n \n Boogie "<<m<<endl<<endl;

    for(int i=0;i<=8;i++){
        if(bg->arr[i]!="0" ||bg ->arr[i]!="1"){
            cout<<"b"<<m<<i+1<<" "<<bg->arr[i]<<" " <<endl;
        }
        else{
            cout<<"b"<<m<<i<<" " <<endl;
        }
    }
    bg=bg->next;
    m++;
    }

}

void display_cancel(boogie * b1){
    boogie * bg = b1;
    int m=1;
    while(bg!=NULL){
       
    cout<<"\n \n  Boogie "<<m<<endl<<endl;;

    for(int i=0;i<=8;i++){
        if(bg ->arr[i]=="1"){
            cout<<"b"<<m<<i+1<<" " <<endl;
        }
        
    }
     bg=bg->next;
    m++;
    }

}

int main (){
    boogie* b1 =new boogie;
    b1->seat_name="boogie1";
    b1 = nil(b1);
    boogie* b2 =new boogie;
    b2->seat_name="boogie2";
    b2 = nil(b2);
    boogie* b3 =new boogie;
    b3->seat_name="boogie3";
    b3= nil(b3);
    b1->next = b2;
    b2->next = b3;
    b3->next = NULL;
    cout<<"Enter :\n 1. To display the list. \n 2. To book a seat \n 3.To cancell a seat \n 4. To display cancellation record. \n 5. To exit\n ";
    int choice ;
    cout<<"\n Enter choice: ";
    cin>>choice;
    while(choice != 5){
        if (choice ==1){
            
                display(b1);
                
        }

            else if(choice ==2){
             boogie *bbog;
             bbog = bogie(b1,b2,b3) ;
            cout<<"\n  Enter the compartment number:";
            int comp;
            cin>>comp;
            
            

            cout<<"\n Enter passenger name :";
            string pname;
            cin>>pname;
                
                b1 = book_seat(b1,bbog,comp,pname);
                
            }

            
            else if (choice ==3){
                boogie * b_name = bogie(b1,b2,b3);
                cout<<"\n Enter the compartment number \n";
                int comp;
                cin>>comp;
                b1 = cancel_seat (b1,b_name,comp);
            }


            else if(choice == 4){
                display_cancel(b1);
            }

            else{
                cout<<"\n Invalid entry \n";
            }


             cout<<"Enter :\n 1. To display the list. \n 2. To book a seat \n 3.To cancell a seat \n 4. To display cancellation record. \n 5. To exit\n ";
            cin>>choice;

        }
        delete b1;
        delete b2;
        delete b3;
        cout<<" \nTHANK YOU\n";
         return 0;
    }



   

