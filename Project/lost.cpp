#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    // VARIABLE DECLARATIONS 

    // Maximum capacity
    int maxItems = 100;
    int maxHistory = 200;

    // 1D arrays for item data
    string itemName[100];
    string itemDescription[100];
    string itemLocation[100];
    string itemDate[100];
    string itemStatus[100]; // "lost", "found", "claimed"

    int itemCount = 0;

    // History array
    string history[200];
    int historyCount = 0;

    // Menu and control variables
    int choice = 0;
    int userType = 0; // 1 = Admin, 2 = User

    // Password variables
    int attempts = 0;
    int password = 0;

    // Temporary variables
    string tempName;
    string tempDesc;
    string tempLocation;
    string tempDate;
    int tempIndex = 0;
    string temp;
    bool found = false;

    // Loop counters
    int i = 0;
    int j = 0;

    // Item 1
    itemName[0] = "Wallet";
    itemDescription[0] = "Black_Leather";
    itemLocation[0] = "Canteen";
    itemDate[0] = "15/03/2025";
    itemStatus[0] = "lost";

    // Item 2
    itemName[1] = "iPhone";
    itemDescription[1] = "iPhone_13_Black";
    itemLocation[1] = "Library_2nd_Floor";
    itemDate[1] = "18/03/2025";
    itemStatus[1] = "found";

    // Item 3
    itemName[2] = "Keys";
    itemDescription[2] = "Honda_Bike_Keys";
    itemLocation[2] = "Parking_Lot";
    itemDate[2] = "20/03/2025";
    itemStatus[2] = "found";

    // Item 4
    itemName[3] = "Laptop_Bag";
    itemDescription[3] = "Dell_Backpack";
    itemLocation[3] = "Lab_301";
    itemDate[3] = "22/03/2025";
    itemStatus[3] = "lost";

    // Item 5
    itemName[4] = "Watch";
    itemDescription[4] = "Casio_Silver";
    itemLocation[4] = "Playground";
    itemDate[4] = "25/03/2025";
    itemStatus[4] = "found";

    // Item 6
    itemName[5] = "ID_Card";
    itemDescription[5] = "Ali_Ahmed_CNIC";
    itemLocation[5] = "Main_Gate";
    itemDate[5] = "26/03/2025";
    itemStatus[5] = "found";

    // Item 7
    itemName[6] = "Water_Bottle";
    itemDescription[6] = "Blue_Milton";
    itemLocation[6] = "Classroom_204";
    itemDate[6] = "27/03/2025";
    itemStatus[6] = "claimed";

    // Item 8
    itemName[7] = "Earphones";
    itemDescription[7] = "Boat_Airdopes";
    itemLocation[7] = "Cafeteria";
    itemDate[7] = "28/03/2025";
    itemStatus[7] = "lost";

    itemCount = 8; // 8 items added

    // Pre-added history logs
    history[0] = "Added lost item: Wallet";
    history[1] = "Added found item: iPhone";
    history[2] = "Added found item: Keys";
    history[3] = "Added lost item: Laptop_Bag";
    history[4] = "Added found item: Watch";
    history[5] = "Added found item: ID_Card";
    history[6] = "Claimed item: Water_Bottle";
    history[7] = "Added lost item: Earphones";

    historyCount = 8;

    // ---- LOGIN SCREEN ----
    cout << "============================================" << endl;
    cout << "    LOST AND FOUND MANAGEMENT SYSTEM" << endl;
    cout << "============================================" << endl;
    cout << endl;
    cout << "Select User Type:" << endl;
    cout << "1. Admin" << endl;
    cout << "2. User" << endl;
    cout << "Enter choice: ";
    cin >> userType;

    // Admin password check
    if (userType == 1)
    {
        attempts = 0;
        while (attempts < 3)
        {
            cout << endl
                 << "Enter Password: ";
            cin >> password;

            if (password == 1234)
            {
                cout << endl
                     << "Login Successful!" << endl;
                cout << "Press any key to continue...";
                getch();
                system("cls"); // Fixed for Windows
                break;
            }
            else
            {
                attempts = attempts + 1;
                cout << "Wrong Password! Attempts left: " << 3 - attempts << endl;
            }
        }

        if (attempts >= 3)
        {
            cout << "Too many failed attempts. Program will exit." << endl;
            return 0;
        }
    }
    else
    {
        // User login
        cout << "Press any key to continue...";
        getch();
        system("cls");
    }

    //MAIN MENU LOOP 
    while (true)
    {
        cout << "============================================" << endl;
        cout << "    LOST AND FOUND MANAGEMENT SYSTEM" << endl;
        cout << "============================================" << endl;
        cout << endl;

        if (userType == 1)
        {
            cout << "Logged in as: ADMIN" << endl;
        }
        else
        {
            cout << "Logged in as: USER" << endl;
        }

        cout << endl;

        // MENU DISPLAY
        // Options visible to everyone
        cout << "1.  Add Lost Item" << endl;
        cout << "2.  Add Found Item" << endl;
        cout << "3.  View All Items" << endl;
        cout << "4.  Search Item by Name" << endl;
        cout << "5.  Update Item" << endl;

        // OPTION 6: DELETE (Admin Only)
        if (userType == 1)
        {
            cout << "6.  Delete Item" << endl;
        }

        // Options visible to everyone
        cout << "7.  Claim Item" << endl;

        // OPTION 8: VIEW HISTORY (Admin Only)
        if (userType == 1)
        {
            cout << "8.  View History" << endl;
        }

        // OPTION 9: SORT BY NAME (Admin Only)
        if (userType == 1)
        {
            cout << "9.  Sort Items by Name (A-Z)" << endl;
        }

        // OPTION 10: SORT BY DATE (Admin Only)
        if (userType == 1)
        {
            cout << "10. Sort Items by Date" << endl;
        }

        // Options visible to everyone
        cout << "11. View Lost Items Only" << endl;
        cout << "12. View Found Items Only" << endl;
        cout << "13. View Claimed Items Only" << endl;

        // OPTION 14: CLEAR HISTORY (Admin Only)
        if (userType == 1)
        {
            cout << "14. Clear History (Admin Only)" << endl;
            cout << "15. Exit" << endl;
        }
        else
        {
            // User Exit is option 14
            cout << "14. Exit" << endl;
        }

        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        system("cls"); 

        // OPTION 1: ADD LOST ITEM
        if (choice == 1)
        {
            cout << "=== ADD LOST ITEM ===" << endl;
            cout << endl;

            if (itemCount >= maxItems)
            {
                cout << "Storage is full!" << endl;
            }
            else
            {
                cout << "Enter Item Name: ";
                cin >> tempName;
                cout << "Enter Description: ";
                cin >> tempDesc;
                cout << "Enter Location Lost: ";
                cin >> tempLocation;
                cout << "Enter Date (dd/mm/yyyy): ";
                cin >> tempDate;

                itemName[itemCount] = tempName;
                itemDescription[itemCount] = tempDesc;
                itemLocation[itemCount] = tempLocation;
                itemDate[itemCount] = tempDate;
                itemStatus[itemCount] = "lost";

                history[historyCount] = "Added lost item: " + tempName;
                historyCount = historyCount + 1;
                itemCount = itemCount + 1;

                cout << endl
                     << "Lost item added successfully!" << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 2: ADD FOUND ITEM
        else if (choice == 2)
        {
            cout << "=== ADD FOUND ITEM ===" << endl;
            cout << endl;

            if (itemCount >= maxItems)
            {
                cout << "Storage is full!" << endl;
            }
            else
            {
                cout << "Enter Item Name: ";
                cin >> tempName;
                cout << "Enter Description: ";
                cin >> tempDesc;
                cout << "Enter Location Found: ";
                cin >> tempLocation;
                cout << "Enter Date (dd/mm/yyyy): ";
                cin >> tempDate;

                itemName[itemCount] = tempName;
                itemDescription[itemCount] = tempDesc;
                itemLocation[itemCount] = tempLocation;
                itemDate[itemCount] = tempDate;
                itemStatus[itemCount] = "found";

                history[historyCount] = "Added found item: " + tempName;
                historyCount = historyCount + 1;
                itemCount = itemCount + 1;

                cout << endl
                     << "Found item added successfully!" << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 3: VIEW ALL ITEMS
        else if (choice == 3)
        {
            cout << "=== VIEW ALL ITEMS ===" << endl;
            cout << endl;

            if (itemCount == 0)
            {
                cout << "No items in the system." << endl;
            }
            else
            {
                cout << "No. | Name          | Description   | Location      | Date       | Status" << endl;
                cout << "----|---------------|---------------|---------------|------------|--------" << endl;

                for (i = 0; i < itemCount; i = i + 1)
                {
                    cout << i + 1 << "   | "
                         << itemName[i] << " | "
                         << itemDescription[i] << " | "
                         << itemLocation[i] << " | "
                         << itemDate[i] << " | "
                         << itemStatus[i] << endl;
                }
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 4: SEARCH ITEM
        else if (choice == 4)
        {
            cout << "=== SEARCH ITEM BY NAME ===" << endl;
            cout << endl;

            cout << "Enter item name to search: ";
            cin >> tempName;

            found = false;
            for (i = 0; i < itemCount; i = i + 1)
            {
                if (itemName[i] == tempName)
                {
                    cout << endl
                         << "Item Found!" << endl;
                    cout << "Name: " << itemName[i] << endl;
                    cout << "Description: " << itemDescription[i] << endl;
                    cout << "Location: " << itemLocation[i] << endl;
                    cout << "Date: " << itemDate[i] << endl;
                    cout << "Status: " << itemStatus[i] << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << endl
                     << "Item not found!" << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 5: UPDATE ITEM
        else if (choice == 5)
        {
            cout << "=== UPDATE ITEM ===" << endl;
            cout << endl;

            if (itemCount == 0)
            {
                cout << "No items to update." << endl;
            }
            else
            {
                for (i = 0; i < itemCount; i = i + 1)
                {
                    cout << i + 1 << ". " << itemName[i] << " (" << itemStatus[i] << ")" << endl;
                }

                cout << endl
                     << "Enter item number to update: ";
                cin >> tempIndex;

                if (tempIndex < 1 || tempIndex > itemCount)
                {
                    cout << "Invalid item number!" << endl;
                }
                else
                {
                    cout << "Enter new Name: ";
                    cin >> tempName;
                    cout << "Enter new Description: ";
                    cin >> tempDesc;
                    cout << "Enter new Location: ";
                    cin >> tempLocation;
                    cout << "Enter new Date (dd/mm/yyyy): ";
                    cin >> tempDate;

                    itemName[tempIndex - 1] = tempName;
                    itemDescription[tempIndex - 1] = tempDesc;
                    itemLocation[tempIndex - 1] = tempLocation;
                    itemDate[tempIndex - 1] = tempDate;

                    history[historyCount] = "Updated item: " + tempName;
                    historyCount = historyCount + 1;

                    cout << endl
                         << "Item updated successfully!" << endl;
                }
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }
        // OPTION 6: DELETE ITEM (ADMIN ONLY)
        else if (choice == 6)
        {
            // Access Check
            if (userType != 1)
            {
                cout << "ACCESS DENIED! Only Admin can delete items." << endl;
                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
            else
            {
                cout << "=== DELETE ITEM ===" << endl;
                cout << endl;

                if (itemCount == 0)
                {
                    cout << "No items to delete." << endl;
                }
                else
                {
                    for (i = 0; i < itemCount; i = i + 1)
                    {
                        cout << i + 1 << ". " << itemName[i] << " (" << itemStatus[i] << ")" << endl;
                    }

                    cout << endl
                         << "Enter item number to delete: ";
                    cin >> tempIndex;

                    if (tempIndex < 1 || tempIndex > itemCount)
                    {
                        cout << "Invalid item number!" << endl;
                    }
                    else
                    {
                        history[historyCount] = "Deleted item: " + itemName[tempIndex - 1];
                        historyCount = historyCount + 1;

                        for (i = tempIndex - 1; i < itemCount - 1; i = i + 1)
                        {
                            itemName[i] = itemName[i + 1];
                            itemDescription[i] = itemDescription[i + 1];
                            itemLocation[i] = itemLocation[i + 1];
                            itemDate[i] = itemDate[i + 1];
                            itemStatus[i] = itemStatus[i + 1];
                        }

                        itemCount = itemCount - 1;
                        cout << endl
                             << "Item deleted successfully!" << endl;
                    }
                }

                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
        }

        // OPTION 7: CLAIM ITEM
        else if (choice == 7)
        {
            cout << "=== CLAIM ITEM ===" << endl;
            cout << endl;

            if (itemCount == 0)
            {
                cout << "No items available." << endl;
            }
            else
            {
                found = false;
                for (i = 0; i < itemCount; i = i + 1)
                {
                    if (itemStatus[i] == "found")
                    {
                        cout << i + 1 << ". " << itemName[i]
                             << " - Found at: " << itemLocation[i] << endl;
                        found = true;
                    }
                }

                if (found == false)
                {
                    cout << "No found items available to claim." << endl;
                }
                else
                {
                    cout << endl
                         << "Enter item number to claim: ";
                    cin >> tempIndex;

                    if (tempIndex < 1 || tempIndex > itemCount)
                    {
                        cout << "Invalid item number!" << endl;
                    }
                    else if (itemStatus[tempIndex - 1] != "found")
                    {
                        cout << "This item is not available for claiming!" << endl;
                    }
                    else
                    {
                        itemStatus[tempIndex - 1] = "claimed";
                        history[historyCount] = "Claimed item: " + itemName[tempIndex - 1];
                        historyCount = historyCount + 1;
                        cout << endl
                             << "Item claimed successfully!" << endl;
                    }
                }
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 8: VIEW HISTORY (ADMIN ONLY)
        else if (choice == 8)
        {
            // Access Check
            if (userType != 1)
            {
                cout << "ACCESS DENIED! Only Admin can view history." << endl;
                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
            else
            {
                cout << "=== ACTIVITY HISTORY ===" << endl;
                cout << endl;

                if (historyCount == 0)
                {
                    cout << "No history available." << endl;
                }
                else
                {
                    for (i = 0; i < historyCount; i = i + 1)
                    {
                        cout << i + 1 << ". " << history[i] << endl;
                    }
                }

                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
        }

        // OPTION 9: SORT BY NAME (ADMIN ONLY)
        else if (choice == 9)
        {
            // Access Check
            if (userType != 1)
            {
                cout << "ACCESS DENIED! Only Admin can sort items." << endl;
                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
            else
            {
                cout << "=== SORT ITEMS BY NAME (A-Z) ===" << endl;
                cout << endl;

                if (itemCount == 0)
                {
                    cout << "No items to sort." << endl;
                }
                else
                {
                    for (i = 0; i < itemCount - 1; i = i + 1)
                    {
                        for (j = 0; j < itemCount - 1 - i; j = j + 1)
                        {
                            if (itemName[j] > itemName[j + 1])
                            {
                                temp = itemName[j];
                                itemName[j] = itemName[j + 1];
                                itemName[j + 1] = temp;

                                temp = itemDescription[j];
                                itemDescription[j] = itemDescription[j + 1];
                                itemDescription[j + 1] = temp;

                                temp = itemLocation[j];
                                itemLocation[j] = itemLocation[j + 1];
                                itemLocation[j + 1] = temp;

                                temp = itemDate[j];
                                itemDate[j] = itemDate[j + 1];
                                itemDate[j + 1] = temp;

                                temp = itemStatus[j];
                                itemStatus[j] = itemStatus[j + 1];
                                itemStatus[j + 1] = temp;
                            }
                        }
                    }

                    history[historyCount] = "Sorted items by name";
                    historyCount = historyCount + 1;

                    cout << "Items sorted by name successfully!" << endl;
                    cout << endl;

                    for (i = 0; i < itemCount; i = i + 1)
                    {
                        cout << i + 1 << ". " << itemName[i]
                             << " (" << itemStatus[i] << ")" << endl;
                    }
                }

                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
        }
        // OPTION 10: SORT BY DATE (ADMIN ONLY)
        else if (choice == 10)
        {
            // Access Check
            if (userType != 1)
            {
                cout << "ACCESS DENIED! Only Admin can sort items." << endl;
                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
            else
            {
                cout << "=== SORT ITEMS BY DATE ===" << endl;
                cout << endl;

                if (itemCount == 0)
                {
                    cout << "No items to sort." << endl;
                }
                else
                {
                    for (i = 0; i < itemCount - 1; i = i + 1)
                    {
                        for (j = 0; j < itemCount - 1 - i; j = j + 1)
                        {
                            if (itemDate[j] > itemDate[j + 1])
                            {
                                temp = itemName[j];
                                itemName[j] = itemName[j + 1];
                                itemName[j + 1] = temp;

                                temp = itemDescription[j];
                                itemDescription[j] = itemDescription[j + 1];
                                itemDescription[j + 1] = temp;

                                temp = itemLocation[j];
                                itemLocation[j] = itemLocation[j + 1];
                                itemLocation[j + 1] = temp;

                                temp = itemDate[j];
                                itemDate[j] = itemDate[j + 1];
                                itemDate[j + 1] = temp;

                                temp = itemStatus[j];
                                itemStatus[j] = itemStatus[j + 1];
                                itemStatus[j + 1] = temp;
                            }
                        }
                    }

                    history[historyCount] = "Sorted items by date";
                    historyCount = historyCount + 1;

                    cout << "Items sorted by date successfully!" << endl;
                    cout << endl;

                    for (i = 0; i < itemCount; i = i + 1)
                    {
                        cout << i + 1 << ". " << itemName[i]
                             << " | " << itemDate[i]
                             << " | " << itemStatus[i] << endl;
                    }
                }

                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
        }

        // OPTION 11: VIEW LOST ITEMS
        else if (choice == 11)
        {
            cout << "=== LOST ITEMS ===" << endl;
            cout << endl;

            found = false;
            for (i = 0; i < itemCount; i = i + 1)
            {
                if (itemStatus[i] == "lost")
                {
                    cout << i + 1 << ". " << itemName[i]
                         << " | " << itemDescription[i]
                         << " | " << itemLocation[i]
                         << " | " << itemDate[i] << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No lost items." << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }
        // OPTION 12: VIEW FOUND ITEMS
        else if (choice == 12)
        {
            cout << "=== FOUND ITEMS ===" << endl;
            cout << endl;

            found = false;
            for (i = 0; i < itemCount; i = i + 1)
            {
                if (itemStatus[i] == "found")
                {
                    cout << i + 1 << ". " << itemName[i]
                         << " | " << itemDescription[i]
                         << " | " << itemLocation[i]
                         << " | " << itemDate[i] << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No found items." << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 13: VIEW CLAIMED ITEMS
        else if (choice == 13)
        {
            cout << "=== CLAIMED ITEMS ===" << endl;
            cout << endl;

            found = false;
            for (i = 0; i < itemCount; i = i + 1)
            {
                if (itemStatus[i] == "claimed")
                {
                    cout << i + 1 << ". " << itemName[i]
                         << " | " << itemDescription[i]
                         << " | " << itemLocation[i]
                         << " | " << itemDate[i] << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No claimed items." << endl;
            }

            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }

        // OPTION 14: CLEAR HISTORY (ADMIN)
        else if (choice == 14)
        {
            if (userType == 1)
            {
                // Admin: Clear History
                cout << "=== CLEAR HISTORY ===" << endl;
                cout << endl;

                historyCount = 0;
                cout << "History cleared successfully!" << endl;

                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
            else
            {
                // User: Exit
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            }
        }

        // OPTION 15: EXIT
        else if (choice == 15)
        {
            if (userType == 1)
            {
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            }
            else
            {
                cout << "Invalid choice! Please try again." << endl;
                cout << endl
                     << "Press any key to continue...";
                getch();
                system("cls");
            }
        }
        // INVALID CHOICE
        else
        {
            cout << "Invalid choice! Please enter a valid option." << endl;
            cout << endl
                 << "Press any key to continue...";
            getch();
            system("cls");
        }
    }

    return 0;
}
