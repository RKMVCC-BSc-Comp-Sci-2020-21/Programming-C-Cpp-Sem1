#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<stdio.h>

using namespace std;
class Student
{
	int roll;
	char name[10];
	public:
		void AddRecord();
		void DisplayRecord();
		void SearchRecord();
		void DeleteRecord();
		void ModifyRecord();
};

void Student :: AddRecord()
{
	fstream file;
	file.open("STUDENT.TXT", ios::app); // TO APPEND NEW DATA TO THE FILE
	if(file.fail()) // fail() FUNCTION RETURNS TRUE ON FAILURE OF OPENING THE	// FILE
	{
		cout<<"\n\tCannot open the new file.";
		getch();
		return;
	}
	cout<<"\n\tEnter roll : ";
	cin>>roll;
	cout<<"\n\tEnter name : ";
	cin>>name;
	file.write((char *)this, sizeof(Student));
	// THIS FUNTION WRITES THE DATA INTO THE OPENED FILE
	file.close(); // THIS FUCNTION CLOSES AN OPENED FILE
}
void Student :: DisplayRecord()
{
	fstream file;
	file.open("STUDENT.TXT", ios::in | ios::nocreate);
	// TO READ DATA FROM THE FILE, WITH ios::nocreate OPTION
	if(file.fail())
	// fail() FUNCTION RETURNS TRUE IF THE FILE IS NOT ALREADY EXISTING
	// BECAUSE ios::nocreate WILL PREVENT THE FILE FROM GETTING CREATED
	{
		cout<<"\n\tFile contains no record. Please input some record first.";
		getch();
		return;
	}
	while(!file.eof())
	// eof() FUNTION RETURNS TRUE ONLY WHEN THE FILE POINTER REACHES THE END OF	 FILE
	{
		file.read((char *)this, sizeof(Student));
		// THIS FUNTION READS THE CURRENT DATA FROM THE FILE
		cout<<"\n\tROLL : "<<roll;
		cout<<"\n\tNAME : "<<name;
	}
	file.close();
}
void Student :: SearchRecord()
{
	int roll_no;
	char found = 'F';
	fstream file;
	file.open("STUDENT.TXT", ios::in | ios::nocreate );
	if(file.fail())
	{
		cout<<"\n\tFile contains no record. Please input some record first.";
		getch();
		return;
	}
	cout<<"\n\tEnter the roll number you want to search : ";
	cin>>roll_no;
	while(!file.eof())
	{
		file.read((char *)this, sizeof(Student));
		if(roll == roll_no)
	{
	found = 'T';
	cout<<"\n\tROLL : "<<roll;
	cout<<"\n\tNAME : "<<name;
	break;
	}
	}
	file.close();
	
	if(found == 'F')
	cout<<"\n\tRoll number "<<roll_no<<" not found.";
}
void Student :: DeleteRecord()
{
/*
THE THEORY OF DELETE:
WE HAVE TO USE A TEMPORARY FILE WHERE WE HAVE TO INSERT ALL THE
RECORDS EXCEPT THE ONE THAT WE WANT TO DELETE. AFTER THIS IS DONE
THE ORIGINAL FILE IS TO BE DELETED AND THE TEMPORARY FILE SHOULD
BE RENAMED INTO THE ORIGINAL FILE NAME. ANYBODY OPENING THIS FILE
AGAIN WILL NOT SEE THAT RECORD AGAIN, AFFECTING THE DELETION OF
THAT RECORD.
*/
	int roll_no;
	char found = 'F';
	fstream file1, file2;
	file1.open("STUDENT.TXT", ios::in | ios::nocreate );
	file2.open("TEMP.TXT", ios::out);
	if(file1.fail())
	{
		cout<<"\n\tFile contains no record. Please input some record first.";
		getch();
		return;
	}
	cout<<"\n\tEnter the roll number you want to delete : ";
	cin>>roll_no;
	while(!file1.eof())
	{
		file1.read((char *)this, sizeof(Student));
		if(roll == roll_no)
			found = 'T';
		else // INSERTING ALL THE NON MATCHING RECORDS TO THE TEMPORARY FILE
			file2.write((char *)this, sizeof(Student));
	}
	file1.close();
	file2.close();
	if(found == 'F')
		cout<<"\n\tRoll number "<<roll_no<<" not found.";
	remove("STUDENT.TXT"); // DELETING THE ORIGNAL FILE
	rename("TEMP.TXT", "STUDENT.TXT");
	// RENAMING THE TEMPORARY FILE TO THE ORIGINAL NAME
}
void Student :: ModifyRecord()
{
/*
THE THEORY OF MODIFICATION:
WE HAVE TO USE A TEMPORARY FILE WHERE WE HAVE TO INSERT ALL THE
RECORDS AS THEY ARE. WHEN WE HAVE FOUND THE RECORD TO BE MODIFIED
THE NEW CONTENTS OF THE RECORD TO BE MODIFIED ARE INPUT, AND THE
MODIFIED RECORD IS INSERTED INTO THE TEMPORARY FILE. AFTER THIS
THE ORIGINAL FILE IS TO BE DELETED AND THE TEMPORARY FILE SHOULD
BE RENAMED INTO THE ORIGINAL FILE NAME. ANYBODY OPENING THIS FILE
AGAIN WILL SEE THE MODIFIED RECORD.
*/
	int roll_no;
	char found = 'F';
	fstream file1, file2;
	file1.open("STUDENT.TXT", ios::in | ios::nocreate );
	file2.open("TEMP.TXT", ios::out);
	if(file1.fail())
	{
		cout<<"\n\tFile contains no record. Please input some record first.";
		getch();
		return;
	}
	cout<<"\n\tEnter the roll number you want to modify : ";
	cin>>roll_no;

	while(!file1.eof())
	{
		file1.read((char *)this, sizeof(Student));
		if(roll == roll_no)
		// THE CONTENT OF THE MATCHING RECORD IS INPUT FROM THE KEYBOARD
	{
	found = 'T';
	cout<<"\n\tEnter new roll : ";
	cin>>roll;
	cout<<"\n\tEnter new name : ";
	cin>>name;
	}
	file2.write((char *)this, sizeof(Student));
	// THE RECORDS ARE INSERTED INTO THE TEMPORARY FILE
	}
	file1.close();
	file2.close();
	if(found == 'F')
		cout<<"\n\tRoll number "<<roll_no<<" not found.";
	remove("STUDENT.TXT"); // DELETING THE ORIGNAL FILE
	rename("TEMP.TXT", "STUDENT.TXT");
	// RENAMING THE TEMPORARY FILE TO THE ORIGINAL NAME
	}
int main(void)
{
	Student obj;
	int choice;
	while(1)
	{
		clrscr();
		cout<<"\n\tFile Management program";
		cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\t\t1. Add Record";
		cout<<"\n\t\t2. Display Record";
		cout<<"\n\t\t3. Search Record";
		cout<<"\n\t\t4. Delete Record";
		cout<<"\n\t\t5. Modify Record";
		cout<<"\n\t\t6. Exit Program.";
		cout<<"\n\n\t\t\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : obj.AddRecord();
				break;
			case 2 : obj.DisplayRecord();
				break;
			case 3 : obj.SearchRecord();
				break;
			case 4 : obj.DeleteRecord();
				break;
			case 5 : obj.ModifyRecord();
				break;
			case 6 : exit(0);
			default: cout<<"\n\tInvalid choice.";
		}
	getch();
	}
	return 0;
}
