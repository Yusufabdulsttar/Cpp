/*
 * File:   Student.h
 * Author: Yusuf Abdulsttar
 *
 * Created on August 8, 2023, 2:55 PM
 */

#ifndef STUDENT
#define	STUDENT

/* section : Includes   */
#include <iostream>
#include <conio.h>
#include <fstream>
/* section : Micro Declaration  */

/* section : Micro Function Declaration  */

/* section : Data Type Declaration  */
using namespace std;
/*to store New Student's Data */
struct Student_Information{
    string Full_name;
    string Class;
    string ID;
};

/* section : Function Declaration  */
void Student_Data();
void New_Student();
void Fee_Calculator();
void Grade_Calculator();

#endif	/* STUDENT */

