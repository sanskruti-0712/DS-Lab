#include<iostream>
using namespace std;

int main(){
    cout<<"B24CE1078\n";

    int m = 0, n;
    char s;
    cout << "Enter the number of servers: ";
    cin >> n;

    int arr[n], h_val[n];

    while (true) {
        cout << "Enter 'y' to add clients and 'n' to Exit: ";
        cin >> s;

        if (s == 'y') {
            if (m >= n) {
                cout << "Server list is full.\n";
                break;
            }
            cout << "Enter the client id: ";
            cin >> arr[m];
            h_val[m] = arr[m] % n;
            cout << "Server number: " << h_val[m] 
                 << " Client id: " << arr[m] << endl;
            m++;
        }
        else if (s == 'n') {
            cout << "Exited\n";
            break;
        }
        else {
            cout << "Invalid Input\n";
            break;
        }
    }

    return 0;
}
