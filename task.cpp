#include<iostream>
#include<string>
using namespace std;

//variables
int x, z;
static int i = 0;
int total = 0;
int roll[10000];
string name[10000];
double physicsScore[10000];
double chemistryScore[10000];
double mathsScore[10000];
double englishSore[10000];
double computerScienceScore[10000];
double average[10000];
char   grade[10000];

//functions
void intro()
{
	cout << "\n \t   STUDENT   MANGMENT   SYSTEM \n\n";
	cout << "MADE BY  :    Creative RSA;\n\n";
	cin.get();
	system("cls");
}

void set_roll_number() {

	cout << "Enter the roll number of student : ";
	cin >> roll[i];
	for (int j = 0; j < i; j++)
	{
		if (roll[i] != roll[j])
			x = 0;
		else
			x = 1;
	}
	if (x == 1)
	{
		cout << "wrong roll number, Enter acorrect one" << endl;
		system("pause");
		cin.get();
		system("cls");
		set_roll_number();
	}
}

void set_name() {
	cout << "Enter the name of student : ";
	cin >> name[i];
}

void set_physics() {
	cout << "Enter the marks in physics out of 100 : ";
	cin >> z;
	if (z >= 0 && z <= 100)
		physicsScore[i] = z;
	else
	{
		cout << "invalid mark" << endl;
		set_physics();
	}
}

void set_chemistry() {
	cout << "Enter the marks in chemistry out of 100 : ";
	cin >> z;
	if (z >= 0 && z <= 100)
		chemistryScore[i] = z;
	else
	{
		cout << "invalid mark" << endl;
		set_chemistry();
	}
}

void set_maths() {
	cout << "Enter the marks in maths out of 100 : ";
	cin >> z;
	if (z >= 0 && z <= 100)
		mathsScore[i] = z;
	else
	{
		cout << "invalid mark" << endl;
		set_maths();
	}
}

void set_english() {
	cout << "Enter the marks in english out of 100 : ";
	cin >> z;
	if (z >= 0 && z <= 100)
		englishSore[i] = z;
	else
	{
		cout << "invalid mark" << endl;
		set_english();
	}
}

void set_computerScience() {
	cout << "Enter the marks in computerScience out of 100 : ";
	cin >> z;
	if (z >= 0 && z <= 100)
		computerScienceScore[i] = z;
	else
	{
		cout << "invalid mark" << endl;
		set_computerScience();
	}
}

void create()
{

	while (true)
	{
		set_roll_number();
		set_name();
		set_physics();
		set_chemistry();
		set_maths();
		set_english();
		set_computerScience();

		cout << endl << "Student record has been created.." << endl;
		average[i] = ((physicsScore[i] + chemistryScore[i] + mathsScore[i] + englishSore[i] + computerScienceScore[i]) / 5);
		if (average[i] >= 85) {
			grade[i] = 'A';
		}
		else if (average[i] >= 75) {
			grade[i] = 'B';
		}
		else if (average[i] >= 65) {
			grade[i] = 'C';
		}
		else if (average[i] >= 50) {
			grade[i] = 'P';
		}
		else {
			grade[i] = 'F';
		}

		i++;
		total++;

		break;
	}
	system("pause");
}

void displayRecord() {
	if (total == 0)
	{
		cout << "There are no records" << endl;
	}
	for (int i = 0; i < total; i++) {
		cout << " the roll number of student : ";
		cout << roll[i] << endl;
		cout << " the name of student : " << name[i] << endl;
		cout << " the marks in physics out of 100 : " << physicsScore[i] << endl;
		cout << " the marks in chemistry out of 100 : " << chemistryScore[i] << endl;
		cout << " the marks in maths out of 100 : " << mathsScore[i] << endl;
		cout << " the marks in english out of 100 : " << englishSore[i] << endl;
		cout << " the marks in computerScience out of 100 : " << computerScienceScore[i] << endl;
		cout << " the percent by 100 : " << average[i] << " % " << endl;
		cout << " the grade : " << grade[i] << endl;
		cout << "                                     **************************************************" << endl;
		
	}
	system("pause");
}

void search()
{
	int  rollno, a = 0;
	//a ÚÔÇä ÇãíÒ åá ÇáØÇáÈ ãæÌæÏ æáÇ áÇ 
	cout << "Enter the roll no of student" << endl;
	cin >> rollno;
	for (int i = 0; i < total; i++)
	{
		if (rollno == roll[i])
		{
			cout << " the name of student : " << name[i] << endl;
			cout << " the marks in physics out of 100 : " << physicsScore[i] << endl;
			cout << " the marks in chemistry out of 100 : " << chemistryScore[i] << endl;
			cout << " the marks in maths out of 100 : " << mathsScore[i] << endl;
			cout << " the marks in english out of 100 : " << englishSore[i] << endl;
			cout << " the marks in computerScience out of 100 : " << computerScienceScore[i] << endl;
			cout << " the percent by 100 : " << average[i] << " % " << endl;
			cout << " the grade : " << grade[i] << endl;
			a = 1;
		}
	}
	if (a == 0)
	{
		cout << "This recorde dosen't exist" << endl;
	}
	system("pause");
}

void modify() {
	int  rollno, b = 0;
	//b ÚÔÇä ÇãíÒ åá ÇáØÇáÈ ãæÌæÏ æáÇ áÇ 
	int choise;
	cout << "Enter the roll number of the student you want to modify : ";
	cin >> rollno;
	for (int i = 0; i < total; i++) {
		if (rollno == roll[i]) {
			cout << "To modify the roll number of the student choose (1) : " << endl;
			cout << "To modify the name of the student choose (2) : " << endl;
			cout << "To modify the mark of the student in physics choose (3) : " << endl;
			cout << "To modify the mark of the student in chemistry choose (4) : " << endl;
			cout << "To modify the mark of the student in maths choose (5) : " << endl;
			cout << "To modify the mark of the student in english choose (6) : " << endl;
			cout << "To modify the mark of the student in computerScience choose (7) : " << endl;
			b = 1;
			cin >> choise;
			switch (choise)
			{
			case 1:
				cout << "Enter the new value : " << endl;
				cin >> roll[i];
				break;
			case 2:
				cout << "Enter the new value : " << endl;
				cin >> name[i];
				break;
			case 3:
				cout << "Enter the new value : " << endl;
				cin >> physicsScore[i];
				break;
			case 4:
				cout << "Enter the new value : " << endl;
				cin >> chemistryScore[i];
				break;
			case 5:
				cout << "Enter the new value : " << endl;
				cin >> mathsScore[i];
				break;
			case 6:
				cout << "Enter the new value : " << endl;
				cin >> englishSore[i];
				break;
			case 7:
				cout << "Enter the new value : " << endl;
				cin >> computerScienceScore[i];
				break;
			default:
				cout << "please enter correct choice";
				system("pause");
				modify();
			}
			average[i] = ((physicsScore[i] + chemistryScore[i] + mathsScore[i] + englishSore[i] + computerScienceScore[i]) / 5);
			if (average[i] >= 85) {
				grade[i] = 'A';
			}
			else if (average[i] >= 75) {
				grade[i] = 'B';
			}
			else if (average[i] >= 65) {
				grade[i] = 'C';
			}
			else if (average[i] >= 50) {
				grade[i] = 'P';
			}
			else {
				grade[i] = 'F';
			}
			system("pause");
		}
	}
	if (b == 0)
	{
		cout << "This recorde dosen't exist" << endl;
	}
	system("pause");
}

void Delete() {
	int deleted_rollnumber, c = 0;
	//c ÚÔÇä ÇãíÒ åá ÇáØÇáÈ ãæÌæÏ æáÇ áÇ 
	cout << "Enter the roll number of the student you want to delete : " << endl;
	cin >> deleted_rollnumber;
	for (int i = 0; i < total; i++) {
		if (deleted_rollnumber == roll[i]) {
			for (int j = i; j < total-1; j++) {
				roll[j] = roll[j + 1];
				name[j] = name[j + 1];
				physicsScore[j] = physicsScore[j + 1];
				chemistryScore[j] = chemistryScore[j + 1];
				mathsScore[j] = mathsScore[j + 1];
				englishSore[j] = englishSore[j + 1];
				computerScienceScore[j] = computerScienceScore[j + 1];
				average[j] = average[j + 1];
				grade[j] = grade[j + 1];
			}
			

			total--;
			c = 1;
			cout << "the record has been deleted " << endl;
		}
	}
	if (c == 0)
	{
		cout << "This recorde dosen't exist" << endl;
	}
	system("pause");
}

//main menu
void mainMenu()
{
	system("cls");
	cout << "     Main Menu" << endl << endl;
	cout << "1.result menu" << endl;
	cout << "2.edit menue" << endl;
	cout << "3.exist" << endl;
	cout << "please select your option(1/2/3) : " << endl;
	
}

//edit menu
void editmenu()
{
	system("cls");
	
	cout << "\n\n\n\tEDIT MENUE";
	cout << "\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout << "\n\n\t1.CREATE STUDENT RECORD";
	cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout << "\n\n\t3.SEARCH STUDENT RECORD ";
	cout << "\n\n\t4.MODIFY STUDENT RECORD";
	cout << "\n\n\t5.DELETE STUDENT RECORD";
	cout << "\n\n\t6.Back to main menu";
	cout << "\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	

	}

void choice_Of_Edit_Menu(char x)
{
	system("cls");

	switch (x)
	{
	case '1':
		create();
		break;
	case '2':
		displayRecord();
		break;
	case '3':
		search();
		break;
	case '4':
		modify();
		break;
	case '5':
		Delete();
		break;
	case '6':
		mainMenu();
		break;
	default:
		cout << "please enter correct number";
		system("pause");

	}

}

//result menu
void resultMenu() {
	system("cls");
	cout << "\n\n\n\tRESULT  MENU" << endl << endl;
	cout << "\n\n\t1.class result" << endl;
	cout << "\n\n\t2.student report card" << endl;
	cout << "\n\n\t3.back to main menu" << endl;
	cout << "\n\n\tplease select your option(1-3) : " << endl;
	
}

void class_resulte()
{
	system("cls");
	cout << "      All Student Result   " << endl;
	if (total == 0) {
		cout << "There are no records" << endl;
	}
	else
	{
		cout << "============================================================================================\n";
		cout << "R.No \t    Name \t    P \t    C \t    M \t    E \t    CS \t    percent % \t    Grade" << endl;
		cout << "=============================================================================================\n";
		for (int i = 0; i < total; i++) {
			cout << roll[i] << " \t    ";
			cout << name[i] << " \t    ";
			cout << physicsScore[i] << " \t    ";
			cout << chemistryScore[i] << " \t    ";
			cout << mathsScore[i] << " \t    ";
			cout << englishSore[i] << " \t    ";
			cout << computerScienceScore[i] << " \t    " << average[i] << " \t           " << grade[i] << " \t    ";
			cout << endl;
			cout << "____________________________________________________________________________________________" << endl;
		}
	}
	system("pause");
}

void student_report_card()
{
	system("cls");
	int  rollno, d = 0;
	//d ÚÔÇä ÇãíÒ åá ÇáØÇáÈ ãæÌæÏ æáÇ áÇ 
	cout << "Enter the roll no of student" << endl;
	cin >> rollno;
	for (int i = 0; i < total; i++)
	{
		if (rollno == roll[i])
		{
			cout << " the name of student : " << name[i] << endl;
			cout << " the marks in physics out of 100 : " << physicsScore[i] << endl;
			cout << " the marks in chemistry out of 100 : " << chemistryScore[i] << endl;
			cout << " the marks in maths out of 100 : " << mathsScore[i] << endl;
			cout << " the marks in english out of 100 : " << englishSore[i] << endl;
			cout << " the marks in computerScience out of 100 : " << computerScienceScore[i] << endl;
			cout << " the percent by 100 : " << average[i] << " % " << endl;
			cout << " the grade : " << grade[i] << endl;
			cout << "*********************************************************************" << endl;
			d = 1;
		}
	}
	if (d == 0)
	{
		cout << "This recorde dosen't exist" << endl;
	}
	system("pause");
}

void choice_of_resultMenue(char x)
{
	system("cls");
	switch (x)
	{
	case '1':
		class_resulte();
	case '2':
		student_report_card();
	case '3':
		mainMenu();
		break;
	default:
		cout << "please enter correct number";
		system("pause");
	}
	system("pause");
}


//main
int main()
{
	char n, a;
	char x;
	intro();

	while (1)
	{
		system("cls");
		mainMenu();
		cin >> x;
		switch (x)
		{
		case '1':

			system("cls");
			resultMenu();
			cin >> a;
			choice_of_resultMenue(a);
			break;
		case '2':

			system("cls");
			editmenu();
			cout << "\n\n\tPlease Enter Your Choice (1-6): ";
			cin >> n;
			choice_Of_Edit_Menu(n);
			break;
		case '3':

			system("cls");
			return 0;
		default:
			cout << "Wrong Number, please enter the correct number";
			system("pause");
		}
	}
}