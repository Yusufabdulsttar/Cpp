
/*
 * File:   Teacher.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 8, 2023, 3:00 PM
 */
#include "Teacher.h"

/**
 * @brief  Scan and Store New Teacher Details in the file
 * @param  none
 * @return void
 */
void New_Teacher()
{
    system("cls"); /*clear the screen */
    char add_another_teacher;  /*to check if the user needs to add another Teacher */

    Teacher_Information Information; /*create a structure to store Teacher Information */
    ofstream writeData("Teacher_Information.txt",ios::app);  /*create file to store Teacher Information*/

    while(add_another_teacher != 'n' && add_another_teacher != 'N') /*to cheek if the user need to add another Teacher */
    {
    cin.ignore();
    cout << "Enter Teacher's Full Name\n";
    getline(cin,Information.Full_name);       /* scan the Teacher name */
    cout << "Subject That Teacher Teaches\n";
    cin >> Information.Subject;              /* subject that teacher teaches*/
    cout << "Enter Teacher Phone Number : \n";
    cin >> Information.phone;
    cout << "Enter Teacher Lecture per Week : \n";
    cin >> Information.Lecture;

    writeData << "\n Subject ->" << Information.Subject << " - Name -> " << Information.Full_name<< " - Phone Number -> " << Information.phone<< " - Lecture per Week-> " << Information.Lecture;;  /* write the data in the file */
    cout << "Do you want to add another Teacher?(if no press n)\n";
    cin >> add_another_teacher;
    }
    writeData.close();
    system("cls");
}

/**
 * @brief  to print Teacher Data has entered before
 * @param  none
 * @return void
 */
void Teacher_Data()
{
    system("cls"); /*clear the screen */
    string Teacher_Data;
    ifstream Read_Teacher_Data("Teacher_Information.txt"); /* read the file (Teacher_Information.txt) */

    /* Displaying Teacher Data line by line */
    while(getline(Read_Teacher_Data, Teacher_Data))
    {
        cout << Teacher_Data << "\n";
    }
    Read_Teacher_Data.close(); /* close the file */

    cout << "Press any key to return to main menu\n";
    getch();
    system("cls");
}
