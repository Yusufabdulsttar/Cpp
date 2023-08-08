/*
 * File:   Educational_Management_System.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 8, 2023, 2:52 PM
 */

#include "Teacher.h"
#include "Student.h"

int main()
{
    int choice_1,choice_2;

    while(1)
    {
        cout<<"************************************************************************************************";
        cout<<"\n\n\t\t\t Educational Management System\n\n";
        cout<<"************************************************************************************************";
        cout<<"\n\n\t\t\tMain Screen\n\n";
        cout<<"************************************************************************************************";
        cout<<"\n Enter your choice: \n"<<endl;
        cout<<" 1.Teachers \n"<<endl;
        cout<<" 2.Students \n"<<endl;
        cin>>choice_1;

        if (choice_1 == 1) {
            cout<<"\n Enter your choice: \n"<<endl;
            cout<<" 1.Teachers Information\n"<<endl;
            cout<<" 2.Add a New Teacher \n"<<endl;
            cin>>choice_2;
            if (choice_2 == 1){
                Teacher_Data();
            }
            else if (choice_2 == 2){
                New_Teacher();
            }
            else{cout << "Please Enter Correct Choice\n";}
        }
        else if(choice_1 == 2) {
            cout<<"\n Enter your choice: \n"<<endl;
            cout<<" 1.Students Information\n"<<endl;
            cout<<" 2.Add a New Student \n"<<endl;
            cout<<" 3.Calculate Your Fees \n"<<endl;
            cout<<" 4.Check your Grades \n"<<endl;
            cin>>choice_2;
            if (choice_2 == 1){
                Student_Data();
            }
            else if (choice_2 == 2){
                New_Student();
            }
            else if (choice_2 == 3){
                Fee_Calculator();
            }
            else if (choice_2 == 4){
                Grade_Calculator();
            }
            else{cout << "Please Enter Correct Choice\n";}
        }
        else {cout << "Please Enter Correct Choice\n";}
        } /*end of while loop*/
    return 0;
}




