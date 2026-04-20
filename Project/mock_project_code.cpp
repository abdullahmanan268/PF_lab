#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "ahmed", "zain", "nida", "tariq"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 21, 22, 20, 23, 19};
    float matricArray[TOTAL_STUDENTS] = {1050, 890, 940, 960, 880, 910, 995};
    float interArray[TOTAL_STUDENTS] = {980, 850, 900, 870, 820, 840, 950};
    float ecatArray[TOTAL_STUDENTS] = {350, 280, 300, 330, 270, 310, 360};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "IT", "CS", "EE", "CS", "CE"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CE", "IT", "CS", "IT", "EE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "CS", "CS", "CE", "EE", "EE", "CS"};
    float aggriArray[TOTAL_STUDENTS];

    while (true)
    {
        // main header of ums
        system("cls");
        cout << endl;
        cout << "|---------------------------------------------------|" << endl;
        cout << "|------------UNIVERSITY MANAGEMENT SYSTEM-----------|" << endl;
        cout << "|---------------------------------------------------|" << endl;

        cout << endl;
        // menue bar
        cout << "User Menue " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. To Exit " << endl;
        string userOption;
        cout << "Choose Option : ";
        cin >> userOption;

        cout << "You Choose: " << userOption << endl;
        if (userOption == "1")
        {
            int countAttempt;
            // Write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login Attempt " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Successfully" << endl;
                    // getch();
                    // break;

                    while (true)
                    {

                        system("cls");
                        cout << "1. Show all Students " << endl;
                        cout << "2. Search Students  " << endl;
                        cout << "3. Update Student record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete record by name " << endl;
                        cout << "6. Logout " << endl;
                        cout << "Choose option: " << endl;
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            cout << "Name\t Age\t Matric\t FSC\t Ecat\t P1\t P2\t P3\t" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // search student by name fuction
                            cout << "Enter the name you want to search :" << endl;
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\t Age\t Matric\t FSC\t Ecat\t P1\t P2\t P3\t" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // Update student record
                            cout << "Enter the name you want to update record of :" << endl;
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-----OLD RECORD-----" << endl;

                                cout << "Name\t Age\t Matric\t FSC\t Ecat\t P1\t P2\t P3\t" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update :" << endl;
                                cout << "Enter your name :" << endl;
                                string name;
                                cin >> name;
                                cout << "Enter age : " << endl;
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks :" << endl;
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC marks : " << endl;
                                float fsc;
                                cin >> fsc;
                                cout << "Enter Ecat marks : " << endl;
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS , CE and EE as your preferences" << endl;
                                cout << "Enter your 1st preference : " << endl;
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd preference : " << endl;
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd preference : " << endl;
                                string pref3;
                                cin >> pref3;
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }

                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {

                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1200.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggriArray[i] = aggri;
                            }
                            // sorting on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {

                                        // swaping of names
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swaping matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swaping inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swaping ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swaping of p1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        // swaping of p2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        // swaping of p3
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swaping of aggregate
                                        float tempAggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAggri;
                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << "Name\t Age\t  Aggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }

                            // code to display sorted data
                        }
                        else if (adminOption == "5")
                        {
                            // delete record by name
                            cout << "Enter the name you want to delete record of :" << endl;
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }
                    cout << "Press any key to continue.." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "Press any key to continue..";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here student code
            system("cls");
            cout << "Welcome to UMS Student Menu" << endl;
            cout << "Enter your name :" << endl;
            string name;
            cin >> name;
            cout << "Enter age : " << endl;
            int age;
            cin >> age;
            cout << "Enter Matric Marks :" << endl;
            float matric;
            cin >> matric;
            cout << "Enter FSC marks : " << endl;
            float fsc;
            cin >> fsc;
            cout << "Enter Ecat marks : " << endl;
            float ecat;
            cin >> ecat;
            cout << "Enter CS , CE and EE as your preferences" << endl;
            cout << "Enter your 1st preference : " << endl;
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd preference : " << endl;
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd preference : " << endl;
            string pref3;
            cin >> pref3;
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << " Your data has been saved" << endl;
            cout << "Press any key to continue.." << endl;

            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of our main while loop
    cout << endl
         << "Thanks for using this software" << endl;
    return 0;
}
