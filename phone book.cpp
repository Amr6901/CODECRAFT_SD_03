#include<iostream>
#include<string>
using namespace std;
struct phone
{
	string contact_first_name;
	string contact_last_name;
	string contact_number;
	string contact_mail;
	string contact_address;
};
int add(phone contacts[], int size, int ref);
void display(phone contacts[], int size);
void searching(phone contacts[]);
void removing(phone contacts[]);
int main()
{
	phone contacts[20];
	int ref = 0;
	while(true)
	{ 
		int choice;
		int num;
		//int ref;
		cout << "######################## PHONE BOOK ############################" << endl;
		cout << "Select One of The Phone Book Operations:" << endl;
		cout << "1- Add Contact/s." << endl;
		cout << "2- Display Contact/s." << endl;
		cout << "3- Searching about Contact." << endl;
		cout << "4- Removing data of contact." << endl;
		cout<<"5-Exit."<<endl;
		cout << "*************************************\n";
		cout << "Enter you choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			do
			{ 
				cout << "Enter the number of contacts" << endl;
				cin >> num;
			}
			while (num < 0 || num > 20);
			//init = ref;
			if (num+ref < 20)
			{
				cout << "Ref " << ref << endl;
				ref = add(contacts, num, ref);
			}
				
			else
			{
				cout << "Out of size"<< endl;
			}
			break;
		case 2:
			do
			{
				cout << "Enter the number of contacts" << endl;
				cin >> num;
			}
			while (num < 0 || num > 20);
			display(contacts, num);
			break;
		case 3:
			searching(contacts);
			break;
		case 4:
			removing(contacts);
			break;
		case 5:
			exit(0);
		default:
			break;
		}		
	}
}
int add(phone contacts[], int size, int ref)
{// this function which called add this accepting data of contacts.
	int i;
	for (i = ref; i < size+ref ; i++)
	{
		cout << "enter the following information of contact number" << ":" << i + 1 << endl << endl;

		cout << "please enter contact's first name" << endl;
		cin >> ws;
		getline(cin, contacts[i].contact_first_name);
		cout << "please enter contact's last name" << endl;
		getline(cin, contacts[i].contact_last_name);
		cout << "please enter contact's number" << endl;
		getline(cin, contacts[i].contact_number);
		cout << "please enter contact's address" << endl;
		getline(cin, contacts[i].contact_address);
		cout << "please enter contact's mail" << endl;
		getline(cin, contacts[i].contact_mail);
		cout << "***************************************************************" << endl;
		cout << "***************************************************************" << endl;
	}
	return i;
}
void display(phone contacts[], int size)
{  //this function which called display this showing entered data of contacts.
	for (int i = 0; i < size; i++)
	{
		cout << "contact [" << i <<"] first name" << ":" << contacts[i].contact_first_name << endl;
		cout << "contact [" << i << "] last name" << ":" << contacts[i].contact_last_name << endl;
		cout << "contact [" << i << "]number" << ":" << contacts[i].contact_number << endl;
		cout << "contact [" << i << "] address" << ":" << contacts[i].contact_address << endl;
		cout << "contact [" << i << "] mail" << ":" << contacts[i].contact_mail << endl;
		cout << "****************************************************" << endl;
	}
}
void searching(phone contacts[])
{ //this function called searshing used for searching about number_contact if he found in data or not. 
	string searched_number;
	int flag;
	cout << "enter searched number" << endl;
	cin >> ws;
	getline(cin, searched_number);
	for (int i = 0; i < 20; i++)
	{
		flag = contacts[i].contact_number.compare(searched_number);
		if (flag == 0)
		{
			cout << "number is found" << endl;
			cout << "data of cotact are" << searched_number << endl;
			break;
		}
		if (i == 19 && flag != 0)
		{
			cout << "number isn't found" << endl;
		}
	}
	cout << "*********************************" << endl;

}
void removing(phone contacts[])
{ // this function called removing used for deleting data of contact.
	string contact_first_name,contact_last_name,contact_number,contact_mail,contact_address,recycle_bin,remover_number;
int x;
 cout<<"enter number which you want to delete it"<<endl;
 cin>>ws;
 getline(cin,remover_number);
 
 
 for (  int i=0 ; i < 20; i++)
	{
		x = contacts[i].contact_number.compare(remover_number);
		if (x == 0)
		{
			
			contacts[i].contact_first_name=recycle_bin;
		    contacts[i].contact_last_name=recycle_bin;
		    contacts[i].contact_number=recycle_bin;
			contacts[i].contact_mail=recycle_bin;
			contacts[i].contact_address=recycle_bin;
			cout<<"data removed successfully"<<endl;
			i--;
			break;
		}
		if (i == 19 && x != 0)
		{
			cout << " this contact isn't found in phone book please try again" << endl;
			break;
		}
	}
 
 
 
 }






