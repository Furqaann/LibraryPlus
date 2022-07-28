#include<iostream>
using namespace std;
class Login{
	public:
		string username;
		int pin;
	int signin(){
		cout<<" \t\t\t Welcome to SignIn Page\t\t\t"<<endl;
		cout<<"Please Enter your name"<<endl;
		string new_user;
		cin>>new_user;
		cout<<"Please Enter your secret pin"<<endl;
		int check_pin;
		cin>>check_pin;
		if(new_user==username && check_pin==pin){
		
		cout<<"Successfully Logged in!";
		
	} 	
		return 1;
		}
	void signup(){
		cout<<" \t\t\t Welcome to SignUp Page\t\t\t"<<endl;
		cout<<"Please Enter your name"<<endl;
		cin>>username;
		cout<<"Please Enter a secret pin"<<endl;
		cin>>pin;
		cout<<"User entered Successfully!";
		
	}
	
};

class MainMenu{
	public:
		
		void searchbook(string a){
			
			string book="nothing";
			if(book==a){
				cout<<"Book Found"<<endl;
			}
			else{
				cout<<"Book Not Found"<<endl;
			}
			
		}
		void returnbook(int date, int no, string name){
			cout<<"\t\t\tWelcome to Return Book Section\t\t\t"<<endl;
			int issue_date=25072022;
			int book_no=120;
			string borrower_name="Furqan";
			if(issue_date==date && book_no==no && borrower_name==name){
				cout<<"Person verified!"<<" "<<"Book Returned Successfully"<<endl;
			}
			else{
				cout<<"Person Not Verified!"<<" "<<"Please check your credentials again"<<endl;
			}
			
		}
		void issuebook(){
			cout<<"\t\t\tWelcome to Return Book Section\t\t\t"<<endl;
			int issue_date;
			cout<<"Enter Issue Date:"<<" "<<endl;
			cin>>issue_date;
			cout<<"Enter Book No: "<<" "<<endl;
			int book_no;
			cin>>book_no;
			cout<<"Enter Yout Name: "<<" "<<endl;
			string borrower_name;
			cin>>borrower_name;
			int return_date=issue_date+7;
			if(return_date>31){
				return_date=0;
			}
			cout<<"The Book must be returned on or before "<<" "<<return_date<<" "<<endl;
			cout<<"Book Issued successfully!"<<" "<<endl;
			cout<<"Your Credentials are as follows: "<<" "<<endl;
			cout<<" Borrower Name: "<<borrower_name<<endl;
			cout<<" Issue date: "<<issue_date<<endl;
			cout<<"Book No: "<<" "<<book_no<<" "<<endl;
					}
		
};

	int main(){
		cout<<"\t\t\tWelcome to Library Management System\t\t\t"<<endl;
		int login=0;
		cout<<"Are you a new user? "<<" Press 1  if yes "<<" "<<"Press 0 if no "<<endl;
		cin>>login;
		if(login==1){
			Login object1;
			object1.signup();
		}
		else{
			Login object1;
			object1.signin();
		}
		int operation=0;
		cout<<" "<<endl;
		cout<<"How can we Help you ?"<<" "<<endl;
		cout<<"Press following numbers for performing actions:-"<<endl;
		cout<<" 1- Search Book "<<endl;
		cout<<" 2- Return Book "<<endl;
		cout<<" 3- Issue Book "<<endl;
		cin>>operation;
		
		if(operation==1){
			cout<<"\t\t\tWelcome to Search Book Section\t\t\t"<<endl;
			string a;
			cout<<"Please Enter the name of the book"<<endl;
			cin>>a;
		MainMenu object2;
		object2.searchbook(a);		
		}
		else if(operation==2){
			MainMenu object3;
			int date;
			int no;
			string name;
			cout<<"\tEnter issuedate, book no and Borrower name respectivly!\t"<<endl;
			cin>>date;
			cin>>no;
			cin>>name;
			object3.returnbook(date, no, name);
		}
		else if(operation==3){
			MainMenu object4;
			object4.issuebook();
		}
		else{
			cout<<"Invalid Entry!!! "<<" "<<"Shutting Down Operation "<<endl;
		}
		
	}		
