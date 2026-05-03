#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

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

// User type
int userType = 0; // 1 = Admin, 2 = User

// Function declarations
void initializeData();
bool loginScreen();
void displayMenu();
bool processChoice(int choice);

void pauseScreen();

void addLostItem();
void addFoundItem();
void viewAllItems();
void searchItemByName();
void updateItem();
void deleteItem();
void claimItem();
void viewHistory();
void sortItemsByName();
void sortItemsByDate();
void viewItemsByStatus(string status, string title, string noMessage);
void clearHistory();

void swapItems(int index1, int index2);
void invalidChoice();
void invalidChoiceTryAgain();

int main()
{
    int choice = 0;

    initializeData();

    if (loginScreen() == false)
    {
        return 0;
    }

    while (true)
    {
        displayMenu();

        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        system("cls");

        if (processChoice(choice) == false)
        {
            break;
        }
    }

    return 0;
}

// Initialize pre-added data
void initializeData()
{
    itemName[0] = "Wallet";
    itemDescription[0] = "Black_Leather";
    itemLocation[0] = "Canteen";
    itemDate[0] = "15/03/2025";
    itemStatus[0] = "lost";

    itemName[1] = "iPhone";
    itemDescription[1] = "iPhone_13_Black";
    itemLocation[1] = "Library_2nd_Floor";
    itemDate[1] = "18/03/2025";
    itemStatus[1] = "found";

    itemName[2] = "Keys";
    itemDescription[2] = "Honda_Bike_Keys";
    itemLocation[2] = "Parking_Lot";
    itemDate[2] = "20/03/2025";
    itemStatus[2] = "found";

    itemName[3] = "Laptop_Bag";
    itemDescription[3] = "Dell_Backpack";
    itemLocation[3] = "Lab_301";
    itemDate[3] = "22/03/2025";
    itemStatus[3] = "lost";

    itemName[4] = "Watch";
    itemDescription[4] = "Casio_Silver";
    itemLocation[4] = "Playground";
    itemDate[4] = "25/03/2025";
    itemStatus[4] = "found";

    itemName[5] = "ID_Card";
    itemDescription[5] = "Ali_Ahmed_CNIC";
    itemLocation[5] = "Main_Gate";
    itemDate[5] = "26/03/2025";
    itemStatus[5] = "found";

    itemName[6] = "Water_Bottle";
    itemDescription[6] = "Blue_Milton";
    itemLocation[6] = "Classroom_204";
    itemDate[6] = "27/03/2025";
    itemStatus[6] = "claimed";

    itemName[7] = "Earphones";
    itemDescription[7] = "Boat_Airdopes";
    itemLocation[7] = "Cafeteria";
    itemDate[7] = "28/03/2025";
    itemStatus[7] = "lost";

    itemCount = 8;

    history[0] = "Added lost item: Wallet";
    history[1] = "Added found item: iPhone";
    history[2] = "Added found item: Keys";
    history[3] = "Added lost item: Laptop_Bag";
    history[4] = "Added found item: Watch";
    history[5] = "Added found item: ID_Card";
    history[6] = "Claimed item: Water_Bottle";
    history[7] = "Added lost item: Earphones";

    historyCount = 8;
}

// Login screen
bool loginScreen()
{
    int attempts = 0;
    int password = 0;

    cout << "============================================" << endl;
    cout << "    LOST AND FOUND MANAGEMENT SYSTEM" << endl;
    cout << "============================================" << endl;
    cout << endl;
    cout << "Select User Type:" << endl;
    cout << "1. Admin" << endl;
    cout << "2. User" << endl;
    cout << "Enter choice: ";
    cin >> userType;

    if (userType == 1)
    {
        attempts = 0;

        while (attempts < 3)
        {
            cout << endl << "Enter Password: ";
            cin >> password;

            if (password == 1234)
            {
                cout << endl << "Login Successful!" << endl;
                cout << "Press any key to continue...";
                getch();
                system("cls");
                return true;
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
            return false;
        }
    }
    else
    {
        cout << "Press any key to continue...";
        getch();
        system("cls");
    }

    return true;
}

// Display menu
void displayMenu()
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

    cout << "1.  Add Lost Item" << endl;
    cout << "2.  Add Found Item" << endl;
    cout << "3.  View All Items" << endl;
    cout << "4.  Search Item by Name" << endl;
    cout << "5.  Update Item" << endl;

    if (userType == 1)
    {
        cout << "6.  Delete Item" << endl;
    }

    cout << "7.  Claim Item" << endl;

    if (userType == 1)
    {
        cout << "8.  View History" << endl;
    }

    if (userType == 1)
    {
        cout << "9.  Sort Items by Name (A-Z)" << endl;
    }

    if (userType == 1)
    {
        cout << "10. Sort Items by Date" << endl;
    }

    cout << "11. View Lost Items Only" << endl;
    cout << "12. View Found Items Only" << endl;
    cout << "13. View Claimed Items Only" << endl;

    if (userType == 1)
    {
        cout << "14. Clear History (Admin Only)" << endl;
        cout << "15. Exit" << endl;
    }
    else
    {
        cout << "14. Exit" << endl;
    }
}

// Process menu choice
bool processChoice(int choice)
{
    if (choice == 1)
    {
        addLostItem();
    }
    else if (choice == 2)
    {
        addFoundItem();
    }
    else if (choice == 3)
    {
        viewAllItems();
    }
    else if (choice == 4)
    {
        searchItemByName();
    }
    else if (choice == 5)
    {
        updateItem();
    }
    else if (choice == 6)
    {
        deleteItem();
    }
    else if (choice == 7)
    {
        claimItem();
    }
    else if (choice == 8)
    {
        viewHistory();
    }
    else if (choice == 9)
    {
        sortItemsByName();
    }
    else if (choice == 10)
    {
        sortItemsByDate();
    }
    else if (choice == 11)
    {
        viewItemsByStatus("lost", "LOST ITEMS", "No lost items.");
    }
    else if (choice == 12)
    {
        viewItemsByStatus("found", "FOUND ITEMS", "No found items.");
    }
    else if (choice == 13)
    {
        viewItemsByStatus("claimed", "CLAIMED ITEMS", "No claimed items.");
    }
    else if (choice == 14)
    {
        if (userType == 1)
        {
            clearHistory();
        }
        else
        {
            cout << "Exiting the system. Goodbye!" << endl;
            return false;
        }
    }
    else if (choice == 15)
    {
        if (userType == 1)
        {
            cout << "Exiting the system. Goodbye!" << endl;
            return false;
        }
        else
        {
            invalidChoiceTryAgain();
        }
    }
    else
    {
        invalidChoice();
    }

    return true;
}

// Pause and clear screen
void pauseScreen()
{
    cout << endl << "Press any key to continue...";
    getch();
    system("cls");
}

// Add lost item
void addLostItem()
{
    string tempName;
    string tempDesc;
    string tempLocation;
    string tempDate;

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

        cout << endl << "Lost item added successfully!" << endl;
    }

    pauseScreen();
}

// Add found item
void addFoundItem()
{
    string tempName;
    string tempDesc;
    string tempLocation;
    string tempDate;

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

        cout << endl << "Found item added successfully!" << endl;
    }

    pauseScreen();
}

// View all items
void viewAllItems()
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

        for (int i = 0; i < itemCount; i = i + 1)
        {
            cout << i + 1 << "   | "
                 << itemName[i] << " | "
                 << itemDescription[i] << " | "
                 << itemLocation[i] << " | "
                 << itemDate[i] << " | "
                 << itemStatus[i] << endl;
        }
    }

    pauseScreen();
}

// Search item by name
void searchItemByName()
{
    string tempName;
    bool found = false;

    cout << "=== SEARCH ITEM BY NAME ===" << endl;
    cout << endl;

    cout << "Enter item name to search: ";
    cin >> tempName;

    found = false;

    for (int i = 0; i < itemCount; i = i + 1)
    {
        if (itemName[i] == tempName)
        {
            cout << endl << "Item Found!" << endl;
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
        cout << endl << "Item not found!" << endl;
    }

    pauseScreen();
}

// Update item
void updateItem()
{
    string tempName;
    string tempDesc;
    string tempLocation;
    string tempDate;
    int tempIndex = 0;

    cout << "=== UPDATE ITEM ===" << endl;
    cout << endl;

    if (itemCount == 0)
    {
        cout << "No items to update." << endl;
    }
    else
    {
        for (int i = 0; i < itemCount; i = i + 1)
        {
            cout << i + 1 << ". " << itemName[i] << " (" << itemStatus[i] << ")" << endl;
        }

        cout << endl << "Enter item number to update: ";
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

            cout << endl << "Item updated successfully!" << endl;
        }
    }

    pauseScreen();
}

// Delete item
void deleteItem()
{
    int tempIndex = 0;

    if (userType != 1)
    {
        cout << "ACCESS DENIED! Only Admin can delete items." << endl;
        pauseScreen();
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
            for (int i = 0; i < itemCount; i = i + 1)
            {
                cout << i + 1 << ". " << itemName[i] << " (" << itemStatus[i] << ")" << endl;
            }

            cout << endl << "Enter item number to delete: ";
            cin >> tempIndex;

            if (tempIndex < 1 || tempIndex > itemCount)
            {
                cout << "Invalid item number!" << endl;
            }
            else
            {
                history[historyCount] = "Deleted item: " + itemName[tempIndex - 1];
                historyCount = historyCount + 1;

                for (int i = tempIndex - 1; i < itemCount - 1; i = i + 1)
                {
                    itemName[i] = itemName[i + 1];
                    itemDescription[i] = itemDescription[i + 1];
                    itemLocation[i] = itemLocation[i + 1];
                    itemDate[i] = itemDate[i + 1];
                    itemStatus[i] = itemStatus[i + 1];
                }

                itemCount = itemCount - 1;

                cout << endl << "Item deleted successfully!" << endl;
            }
        }

        pauseScreen();
    }
}

// Claim item
void claimItem()
{
    int tempIndex = 0;
    bool found = false;

    cout << "=== CLAIM ITEM ===" << endl;
    cout << endl;

    if (itemCount == 0)
    {
        cout << "No items available." << endl;
    }
    else
    {
        found = false;

        for (int i = 0; i < itemCount; i = i + 1)
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
            cout << endl << "Enter item number to claim: ";
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

                cout << endl << "Item claimed successfully!" << endl;
            }
        }
    }

    pauseScreen();
}

// View history
void viewHistory()
{
    if (userType != 1)
    {
        cout << "ACCESS DENIED! Only Admin can view history." << endl;
        pauseScreen();
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
            for (int i = 0; i < historyCount; i = i + 1)
            {
                cout << i + 1 << ". " << history[i] << endl;
            }
        }

        pauseScreen();
    }
}

// Sort items by name
void sortItemsByName()
{
    if (userType != 1)
    {
        cout << "ACCESS DENIED! Only Admin can sort items." << endl;
        pauseScreen();
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
            for (int i = 0; i < itemCount - 1; i = i + 1)
            {
                for (int j = 0; j < itemCount - 1 - i; j = j + 1)
                {
                    if (itemName[j] > itemName[j + 1])
                    {
                        swapItems(j, j + 1);
                    }
                }
            }

            history[historyCount] = "Sorted items by name";
            historyCount = historyCount + 1;

            cout << "Items sorted by name successfully!" << endl;
            cout << endl;

            for (int i = 0; i < itemCount; i = i + 1)
            {
                cout << i + 1 << ". " << itemName[i]
                     << " (" << itemStatus[i] << ")" << endl;
            }
        }

        pauseScreen();
    }
}

// Sort items by date
void sortItemsByDate()
{
    if (userType != 1)
    {
        cout << "ACCESS DENIED! Only Admin can sort items." << endl;
        pauseScreen();
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
            for (int i = 0; i < itemCount - 1; i = i + 1)
            {
                for (int j = 0; j < itemCount - 1 - i; j = j + 1)
                {
                    if (itemDate[j] > itemDate[j + 1])
                    {
                        swapItems(j, j + 1);
                    }
                }
            }

            history[historyCount] = "Sorted items by date";
            historyCount = historyCount + 1;

            cout << "Items sorted by date successfully!" << endl;
            cout << endl;

            for (int i = 0; i < itemCount; i = i + 1)
            {
                cout << i + 1 << ". " << itemName[i]
                     << " | " << itemDate[i]
                     << " | " << itemStatus[i] << endl;
            }
        }

        pauseScreen();
    }
}

// View lost/found/claimed items
void viewItemsByStatus(string status, string title, string noMessage)
{
    bool found = false;

    cout << "=== " << title << " ===" << endl;
    cout << endl;

    found = false;

    for (int i = 0; i < itemCount; i = i + 1)
    {
        if (itemStatus[i] == status)
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
        cout << noMessage << endl;
    }

    pauseScreen();
}

// Clear history
void clearHistory()
{
    cout << "=== CLEAR HISTORY ===" << endl;
    cout << endl;

    historyCount = 0;

    cout << "History cleared successfully!" << endl;

    pauseScreen();
}

// Swap complete item data
void swapItems(int index1, int index2)
{
    string temp;

    temp = itemName[index1];
    itemName[index1] = itemName[index2];
    itemName[index2] = temp;

    temp = itemDescription[index1];
    itemDescription[index1] = itemDescription[index2];
    itemDescription[index2] = temp;

    temp = itemLocation[index1];
    itemLocation[index1] = itemLocation[index2];
    itemLocation[index2] = temp;

    temp = itemDate[index1];
    itemDate[index1] = itemDate[index2];
    itemDate[index2] = temp;

    temp = itemStatus[index1];
    itemStatus[index1] = itemStatus[index2];
    itemStatus[index2] = temp;
}

// Invalid choice
void invalidChoice()
{
    cout << "Invalid choice! Please enter a valid option." << endl;
    pauseScreen();
}

// Invalid choice for user option 15
void invalidChoiceTryAgain()
{
    cout << "Invalid choice! Please try again." << endl;
    pauseScreen();
}
