#include<iostream>
#include<string>
using namespace std;

class node{
    public :
    string name;
    int roll;
    int year;
    node * next; 
    node *prev;
};

void display( node * admin , node * secretary){
    node * ptr = admin;
    int i=1;
    cout<<"The members are :"<<endl;
    while(ptr !=NULL){
        cout<<"Member "<<i<<" :"<<endl;
        cout<<"Name : "<<ptr->name<<".\n";
        cout<<"Roll No : "<<ptr->roll<<".\n";
        cout<<"Year : "<<ptr->year <<".\n"<<endl;
        i++;
        ptr = ptr->next;
    }

}

int count( node * admin , node * secretary){
    node * ptr = admin;
    int i=1;
    while(ptr -> next !=NULL){
        i++;
        ptr = ptr->next;
    }

    return i;
}

void display_reverse( node * admin , node * secretary){
    node * ptr = secretary;
    int i=1;
    cout<<"The members in reverse order are : "<<endl;
    while(ptr !=NULL){
        cout<<"Member "<<i<<" :"<<endl;
        cout<<"Name : "<<ptr->name<<".\n";
        cout<<"Roll No : "<<ptr->roll<<".\n";
        cout<<"Year : "<<ptr->year <<".\n"<<endl;
        i++;
        ptr = ptr->prev;
    }

}

node * add_admin(node * admin,node * secretary){

    cout<<"\n \n Enter the name of admin :";
    string a_name;
    cin>>a_name;
    cout<<"\n Enter roll no : ";
    int a_roll;
    cin>>a_roll;
    int a_year;
    cout<<" \n Enter year : ";
    cin>>a_year;

    admin -> name = a_name;
    admin -> roll = a_roll;
    admin -> year = a_year;
    admin -> next = secretary;
    admin -> prev = NULL;

     cout<<"\n Enter the name of secratory :";
    string s_name;
    cin>>s_name;
    cout<<"\n Enter roll no : ";
    int s_roll;
    cin>>s_roll;
    int s_year;
    cout<<" \n Enter year : ";
    cin>>s_year;
    
    secretary -> name = s_name;
    secretary -> roll = s_roll;
    secretary -> year = s_year;
    secretary -> next = NULL;
    secretary ->prev = admin;

    return admin;


}

node * insert_member( node * admin, node * secretary ){
    cout<<"\n Enter your name : ";
    string m_name;
    cin>>m_name;
    cout<<"\n Enter your roll no ";
    int m_roll;
    cin>>m_roll;
    cout<<" \nEnter your year ";
    int m_year;
    cin>>m_year;

    if(m_year<=1){
        cout<<"\n Students of FY are not allowed \n";
        return admin;
    }
    
    node * new_member = new node;
    node *ptr = admin;
    while(ptr ->next != secretary){
        ptr = ptr -> next;
    }

    new_member -> name = m_name;
    new_member -> roll = m_roll;
    new_member -> year = m_year;
    ptr -> next = new_member;
    new_member -> prev = ptr;
    new_member -> next = secretary;
    secretary -> prev = new_member;  
    return admin; 
}

node * delete_member (node * admin , node * secretary){
    cout<<"\n Enter the name of member to be deleted : ";
    string m_name;
    cin>>m_name;
    node *ptr = admin->next;
    node *previous = ptr ->prev;
    node * nptr = ptr-> next;
    int flag = 0;
    while(ptr != secretary){
        if (nptr -> name == m_name){
                ptr->next= nptr -> next;
                
                cout<<"\n The member "<<m_name <<" has been removed from the club. \n";
                flag = 1;
            }
        previous = ptr;
        //node * a =ptr;
        ptr = ptr -> next;
        ptr->prev = previous;
        nptr = ptr->next;
        

    }

    if (flag == 0){
        cout<<"\n There is no member named : "<< m_name <<" registered in the club \n";
    }

    

    return admin;
}


int main(){
    cout<<" >>>>>>>>> Welcome to the Pinnacle club. <<<<<<<<";
    node * admin = new node;
    node * secretary = new node;
     admin = add_admin(admin,secretary);
    
    
    int choice;
    cout<<"\n Enter 1. To Display Members of the Club. \n Enter 2. To add a new member. \n Enter 3. To delete a member . \n Enter 4. To Display the list in reverse order. \n Enter 5 . To Display the count of Members \n Enter 6 . To exit. \n  ";
        cin>>choice; 
    while (choice != 6){
        
        switch (choice){
            
            case 1 : 
                display(admin,secretary);
                break;

            case 2: 
                admin = insert_member(admin,secretary);
                break;

            case 3:
                admin = delete_member(admin,secretary);
                break;

            case 4:
                display_reverse(admin, secretary);
                break;

            case 5:
                int coun;
                coun = count(admin,secretary);
                cout<<" \n The number of members are : "<<coun<<endl;
                break;

            default :
                cout<<"\n Invalid Entry.\n";


        }
        cout<<"\n Enter 1. To Display Members of the Club. \n Enter 2. To add a new member. \n Enter 3. To delete a member . \n Enter 4. To Display the list in reverse order. \n Enter 5 . To Display the count of Members \n Enter 6 . To exit. \n Enter choice : ";
        cin>>choice; 
    }
    cout<<"\n Thank You.\n ";
}