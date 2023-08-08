/*
 * File:   Student.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 8, 2023, 2:55 PM
 */
#include "Student.h"

/**
 * @brief  Scan and Store New Students Details in the file
 * @param  none
 * @return void
 */
void New_Student()
{
    system("cls"); /*clear the screen */
    char add_another_student;  /*to cheek if the user need to add another student */

    Student_Information Information; /*create a structure to store Student Information */
    ofstream writeData("Student_Information.txt",ios::app);  /*create file to store Student Information*/

    while(add_another_student != 'n' && add_another_student != 'N') /*to cheek if the user need to add another student */
    {
    cin.ignore();
    cout << "Enter Student's Full Name\n";
    getline(cin,Information.Full_name); /* scan the student name */
    cout << "Assign an ID\n";
    cin >> Information.ID;              /* assign an id to student */
    cout << "Enter class: \n";
    cin >> Information.Class;

    writeData << "\n ID ->" << Information.ID << " - Name -> " << Information.Full_name<< " - Class -> " << Information.Class;   /* write the data in the file */
    cout << "Do you want to add another student?(if no press n)\n";
    cin >> add_another_student;
    }
    writeData.close();
    system("cls");
}

/**
 * @brief  to print Student Data has entered before
 * @param  none
 * @return void
 */
void Student_Data()
{
    system("cls"); /*clear the screen */
    string Student_Data;
    ifstream Read_Student_Data("Student_Information.txt"); /* read the file (Student_Information.txt) */

    /* Displaying Student Data line by line */
    while(getline(Read_Student_Data, Student_Data))
    {
        cout << Student_Data << "\n";
    }
    Read_Student_Data.close(); /* close the file */

    cout << "Press any key to return to main menu\n";
    getch();
    system("cls");
}
/**
 * @brief  to calculate the fees of the program
 * @param  none
 * @return void
 */
void Fee_Calculator()
{
    system("cls");
    int Fee_Per_Credit_Hour = 100;
    int Credit_Hour = 0;
    int Total_Fees = 0;

    cout << "How many credit hours do you have to study in this semester?\n";
    cin >> Credit_Hour;

    Total_Fees = Fee_Per_Credit_Hour * Credit_Hour;

    cout << "Your fee for this semester would be = " << Total_Fees << "\n";

    cout << "Press any key to return to main menu\n";
    getch();
    system("cls");
}
/**
 * @brief  to calculate the grade
 * @param  none
 * @return void
 */
void Grade_Calculator()
{
    system("cls");
    int marks;
    cout << "Enter your marks\n";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Congratulations!!! You scored an [A+] \n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "You scored a [B+] \n";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "You scored a [B] \n";
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "You Scored a [C] , Please Study Well \n";
    }
    else if(marks < 60)
    {
        cout << "You Scored a [F] , Better luck next time\n";
    }
    else
    {
        cout << "Invalid Input\n";
    }

    cout << "Press any key to return to main menu\n";
    getch();
    system("cls");
}

