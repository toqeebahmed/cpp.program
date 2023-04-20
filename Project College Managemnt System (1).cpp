#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
struct Student {
    string name,address,Class ;
    int age,rollNo,marks;
    double long contact;// we use double long data type because we value of contact 
						// is soo high which is not cover in 4 bits or 8 bits that why we use double long
};
int display(Student s) {
    cout<<"Name: "<<s.name<<endl<<"Address:  "<<s.address<<endl<<"Class: "<<s.Class<<endl;
    cout<<"Age: " <<s.age<<endl<<"Roll No. "<<s.rollNo<<endl<<"Marks: "<<s.marks<<endl;
    cout<<"Contact:"<<s.contact<<endl; 
    cout<<endl;
}
void line(){
	for(int i=0;i<=41;i++)
	cout<<"--";
	cout<<endl;
}
int Fee(string name, int amount) {
	cout<<"Your amount for this Session is: "<<amount<<endl;
	cout<<"Press Enter if you want to deposit fee: "<<endl;
	getch();
	system("CLS");
    cout<<"\n\t\t\t[Dear "<< name <<"]"<< " Your fee of " << amount << " PKR Submitted Sucessfully.....\n " << endl;
}

void displayTimeTable() {
	line();
    cout<<setw(45) << "| Time Table |" << endl;			//setw() is munpilature , it is use for adding space. we can use it instead of '\t'
    line();
    cout<<"Days \t\t\t  Time \t\t\t\tSubjects"<<endl;
    cout << "Monday: \t\t9:00am - 11:00am \t\t Math/Chemistry" << endl;
    cout << "Tuesday: \t\t10:00am - 12:00pm \t\t English" << endl;
    cout << "Wednesday: \t\t11:00am - 1:00pm \t\t Bio/Comp" << endl;
    cout << "Thursday: \t\t12:00pm - 2:00pm \t\t Urdu" << endl;
    cout << "Friday: \t\t1:00pm - 3:00pm \t\t Physics" << endl;
    line();
}

int main(){
	int choice, num1 , marks;
	double long num;
	char ch,ads[20];
	string name, fname, em,bld;
	cout<<"\n\n\n\n\n\n\n"<<setw(65)<<"Welcome to\n"<<setw(70)<<"College Management System"<<endl;
	cout<<"\n\nThis Project Made by: Toqeeb Ahmed ";
	cout<<"\n\n\n\nPress Enter to Start a Program";
	getch();
	system("CLS");			// for clear screen
		start1:										// use goto function 
		line();
		cout <<"\t\t\t\t| MAIN MENU  |"<<endl;
		line();	
		cout <<"\t\t\t  1. Addmission"<<endl;
		cout <<"\t\t\t  2. Show Student Records"<<endl;
		cout <<"\t\t\t  3. Time Table"<<endl;
		cout <<"\t\t\t  4. Fee Deposit"<< endl;
		cout <<"\t\t\t  5. Exit"<<endl<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		system("CLS");
		switch(choice) {
		
		case 1:{
		line();
		cout<<setw(49)<<"|Addmission Potrol|"<<endl;
		line();
		 start:
   		cout << "Enter your  full name: ";
  		cin>> name;
   		cout<< "\nEnter your father name : ";
   		cin>> fname;
   		cout<<"\nEnter your Address: ";
   		cin.ignore();
	  	gets(ads); 
   		cout<<"\nEnter your Phone No. ";
   		cin>>num;
   		cout<<"\nEnter your Email_ID: ";
   		cin>>em;
   		cout<<"\nEnter your Blood Group: ";
   		cin>>bld;
   		cout<<"\nEnter your Obtained Marks in Matric: ";
   		cin>>marks;
		label:
   		cout<<setw(10)<<"Select your Level where you want to take admission: "<<endl;
   		cout<<" 1. Pre Medical \n 2. Pre Engineering \n 3. ICS \n 4.ICom \n 5. FA"<<endl;
   		cin>>num1;
   		if(num1==1){
   			cout<<"Select (Medical) "<<endl;
		   }
		else if(num1==2){
			cout<<"Select (Engineering) "<<endl;
		}
		else if(num1==3){
			cout<<"Select (ICS) "<<endl;
		}
		else if(num1==4){
			cout<<"Select (ICom) "<<endl;
		}
		else if(num1==5){
			cout<<"Select (FA) "<<endl;
		}
		else{
			cout<<"Please Enter valid Number b/w 1-5"<<endl;
			goto label;
		}
   		cout<<"Do you want to Submit this Application (y/n):"<<endl;
   		cin>>ch;
   		if(ch=='y')
   		cout<<setw(10)<<"Your Application is Submit Sucessfully....."<<endl;

		else{
		cout<<"You may need to review your application....."<<endl;
		cout<<setw(10)<<"Press Enter if you want to review your application"<<endl;
		getch();
		system("CLS");
		goto start;
		}
			
			break;
		}
	case 2:{
		Student students[7] = { 
        {"Mubashar","Kotli", "1st Year",19,05, 790},
        {"Toqeeb","Nakyal" ,"1st Year",21,06, 900},
        {"Shoaib","Dungi" ,"1st Year",20,01, 650}
    };
    
    for(int i=0;i<3;i++) {
        display(students[i]);
    }
		break;
		system("CLS");
	}	
	case 3:{
    displayTimeTable();
		break;
	}			
	case 4:{
    Fee("Toqeeb Ahmed", 5000);
	
		break;
	}	
	case 5:{
		exit(0);		// exit use for terminate program
		break;
	}
	default:
		exit(0);
	}
	cout<<"Do you want to check more Press (y) and for quite Press (n or any other key expect y): "<<endl;
	cin>>ch;
	if(ch=='y'){
	system("CLS");
	goto start1;
	}
	else
	exit(0);
		return 0;
}
