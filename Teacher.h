/*
 * File:   Teacher.h
 * Author: Yusuf Abdulsttar
 *
 * Created on August 8, 2023, 3:30 PM
 */

#ifndef TEATCHER
#define	TEATCHER

/* section : Includes   */
#include <iostream>
#include <conio.h>
#include <fstream>
/* section : Micro Declaration  */

/* section : Micro Function Declaration  */

/* section : Data Type Declaration  */
using namespace std;
/*to store New Student's Data */
struct Teacher_Information{
    string Full_name;
    string Subject;     /*subject that teacher teaches*/
    string phone;       /*phone number*/
    string Lecture;     /*Lecture per Week*/
};

/* section : Function Declaration  */
void Teacher_Data();
void New_Teacher();

#endif	/* TEATCHER */

