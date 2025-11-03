#include <iostream> 
#include <iomanip> 
using namespace std; 
 
void showMenu() { 
    cout << "\n==============================\n"; 
    cout << "       CURRENCY CONVERTER      \n"; 
    cout << "==============================\n"; 
    cout << "1. INR to USD\n"; 
    cout << "2. INR to EUR\n"; 
    cout << "3. INR to GBP\n"; 
    cout << "4. INR to JPY\n"; 
    cout << "5. USD to INR\n"; 
    cout << "6. Exit\n"; 
    cout << "------------------------------\n"; 
} 
 
int main() { 
    int choice; 
    double amount, convertedAmount; 
    const double USD = 0.012, EUR = 0.011, GBP = 0.0095, JPY = 1.77, INR = 83.0; 
 
    do { 
        showMenu(); 
        cout << "Enter your choice (1-6): "; 
        cin >> choice; 
 
        switch (choice) { 
            case 1: 
                cout << "Enter amount in INR: "; 
                cin >> amount; 
                convertedAmount = amount * USD; 
                cout << fixed << setprecision(2); 
                cout << "USD = $" << convertedAmount << endl; 
                break; 
 
            case 2: 
                cout << "Enter amount in INR: "; 
                cin >> amount; 
                convertedAmount = amount * EUR; 
 
 cout << "EUR = €" << convertedAmount << endl; 
                break; 
 
            case 3: 
                cout << "Enter amount in INR: "; 
                cin >> amount; 
                convertedAmount = amount * GBP; 
                cout << "GBP = £" << convertedAmount << endl; 
                break; 
 
            case 4: 
                cout << "Enter amount in INR: "; 
                cin >> amount; 
                convertedAmount = amount * JPY; 
                cout << "JPY = ¥" << convertedAmount << endl; 
                break; 
 
            case 5: 
                cout << "Enter amount in USD: "; 
                cin >> amount; 
                convertedAmount = amount * INR; 
                cout << "INR = ₹" << convertedAmount << endl; 
                break; 
 
            case 6: 
                cout << "Exiting the program... Thank you!\n"; 
                break; 
 
            default: 
                cout << "Invalid choice! Please try again.\n"; 
        } 
    } while (choice != 6);
   return0;
}
