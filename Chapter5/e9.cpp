#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done):" << endl;
    string x;
    string target("done");
    int i = 0;
    while (x != target) {
        cin >> x;
        i++;
    }
    cout << "You entered a total of " << i - 1 << " words." << endl;
}