#include<iostream>
#include<windows.h>  //for sleep function
#include<conio.h>
using namespace std;

struct emp{
    string id, name, address;
    long contact, salary;
};
emp e[100];
int total=0;
void empdata(){
    int choice;
    cout<<"how many data you want to make ?";
    cin>>choice;
    for(int i=total; i<total+choice; i++)
    {
      cout<<"Enter data of Employee : "<<endl<<i++<<endl;
      cout<<"Employee Name : "<<endl;
      cin>>e[i].name;
      cout<<"Enter ID number :  "<<endl;
      cin>>e[i].id;
      cout<<"Enter Address : "<<endl;
      cin>>e[i].address;
      cout<<"Enter contact No. : "<<endl;
      cin>>e[i].contact;
      cout<<"Enter salary : "<<endl;
      cin>>e[i].salary;
    }
    total=total+choice;
}
void show()
{
if (total!=0){
    for(int i=0;i<total;i++){
        cout<<"Data of Employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Address : "<<e[i].address<<endl;
        cout<<"salary : "<<e[i].salary<<endl;
        cout<<"contact : "<<e[i].contact<<endl;
    }
}
    else{
        cout<<"your record is empty"<<endl;
    }

}
void search(){
       if(total!=0){
       string id;
       cout<<"Enter id of data which you want to search"<<endl;
       cin>>id;
       for(int i=0; i<total; i++){
           if(id==e[i].id){
               cout<<"ID : "<<e[i].id<<endl;
               cout<<"Employee name: "<<e[i].name<<endl;
               cout<<"Address : "<<e[i].address<<endl;
               cout<<"salary : "<<e[i].salary<<endl;
               cout<<"contact : "<<e[i].contact<<endl;
               break;
           }
           if(i==total-1){
               cout<<"NO SUCHH RECORD FOUND "<<endl;
           }
           else 
       {
           cout<<"Your Record is Empty"<<endl;
       }
       }
    }
}
void update(){
    if(total!=0){
       string id;
       cout<<"Enter id of data which you want to update"<<endl;
       cin>>id;
       for(int i=0; i<total; i++){
           if(id==e[i].id)
           {
               cout<<"PREVIOUS DETAILS "<<endl;
               cout<<"ID : "<<e[i].id<<endl;
               cout<<"Employee name: "<<e[i].name<<endl;
               cout<<"Address : "<<e[i].address<<endl;
               cout<<"salary : "<<e[i].salary<<endl;
               cout<<"contact : "<<e[i].contact<<endl;
               cout<<"UPDATE NEW INFO"<<endl;
               cout<<"Enter data of Employee : "<<endl<<i+1<<endl;
               cout<<"Employee Name : "<<endl;
               cin>>e[i].name;
               cout<<"Enter ID number :  "<<endl;
               cin>>e[i].id;
               cout<<"Enter Address : "<<endl;
               cin>>e[i].address;
               cout<<"Enter contact No. : "<<endl;
               cin>>e[i].contact;
               cout<<"Enter salary : "<<endl;
               cin>>e[i].salary;
               break;
           }
           if(i==total-1){
               cout<<"NO SUCHH RECORD FOUND "<<endl;
           }
           else 
       {
           cout<<"Your Record is Empty"<<endl;
       }
       }
    }  
}
void del(){
    if(total!=0){
        char user;
        cout<<"press 1 to delete full records : "<<endl;
        cout<<"press 2 to delete specific record : "<<endl;
        user=getch();
        if(user=='1'){
            total=0;
           cout<<"all record is deleted.....!!!!"<<endl;
        }
        else if(user=='2'){
            string id;
            cout<<"Enter id of data which you want to delete";
            cin>>id;
            for(int i=0; i<total; i++){
                if(id==e[i].id){
                    for (int j=i; j<total;j++){
                        e[j].name=e[j+1].name;
                        e[j].id=e[j+1].id;
                        e[j].address=e[j+1].address;
                        e[j].contact=e[j+1].contact;
                        e[j].salary=e[j+1].salary;
                        total--;
                        break;
                }
                if (i==total-1){
                    cout<<"no such reecord found"<<endl;
                }
                    }
            }
        }   
    } 
    else {
        cout<<"your record is empty";
    }
}
int main(){
    cout<<"\n\n\n\t\tEmployee Management System"<<endl;
    cout<<"\n\n\t\tSign Up"<<endl;

    string username, password;
    cout<<"\n\n\t Enter Username"<<endl;
    cin>>username;
    cout<<"\n\n\t Enter Password"<<endl;
    cin>>password;
    cout<<"\n\n\t\tLoading.....";
    for(int i=0; i<8; i++){
        cout<<".";
        Sleep(1000); //1sec=1000miliseconds
    }
    cout<<"\n\n\t\t SUCCESSFUL";

     system("CLS"); //new page 
     cout<<"\n\n\n\t\tEmployee Management System"<<endl;
     cout<<"\n\n\t\tLogIn"<<endl;
     string username1, password1;
    start:
     cout<<"USERNAME :"<<endl;
     cin>>username1;
     cout<<"PASSWORD :"<<endl;
     cin>>password1;
     cout<<"logging please wait..";
    for (int j=0; j<6; j++){
        cout<<".";
        Sleep(1000);
    }
     if (username1==username&&password1==password)
     {
         cout<<"login successfully"<<endl;
         system("CLS");
         char user;
         while(1){
             cout<<"\n\n\tPress 1 to enter data"<<endl;
             cout<<"\n\n\tPress 2 to show data"<<endl;
             cout<<"\n\n\tPress 3 to search data"<<endl;
             cout<<"\n\n\tPress 4 to update data"<<endl;
             cout<<"\n\n\tPress 5 to delete data"<<endl;
             cout<<"\n\n\tPress 6 to logout"<<endl;
             cout<<"\n\n\tPress 7 to exit"<<endl;
             user=getch();
             switch(user){
                 case '1':
                 empdata();
                 break;
                 case '2':
                 show();
                 break;
                 case '3':
                 search();
                 break;
                 case '4':
                 update();
                 break;
                 case '5':
                 del();
                 break;
                 case '6':
                 goto start;
                 break;
                 default :
                 cout<<"\aINVALID INPUT";
                 break;
             }
         }
     }
     else {
         cout<<"login failed "<<endl;
         cout<<"\n\n\t\t please try again"<<endl;
         goto start;
     }
    return 0;
}