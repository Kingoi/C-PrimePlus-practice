#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    struct car
    {
        car() : manufactor("test"), year(0) {};
        std::string manufactor;
        int year;
    };
    
    int i;
    cout << "How many cars do you wish to catalog? ";
    cin >> i;
    cin.get();
    
    vector<car*> user;
    for (int j = 0; j < i; j++) {
        cout << "j=" << j << endl;
        car *tmp = new car;
        user.push_back(tmp);
        cout << "Car #" << j + 1 << ":" << endl;
        cout << "Please enter the maker: " << endl;
        getline(cin, user[j]->manufactor);
        cout << "Please enter the year of manufacture: ";
        cin >> user[j]->year;
        cin.get();

    }

    cout << "Here is your collection:" << endl;
    for(int i = 0; i < user.size(); i++) {
        cout << user[i]->year << " " << user[i]->manufactor << endl;
        delete user[i];
    }
}