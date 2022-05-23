#include <iostream>
#include <vector>
#include <cstring>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done):" << endl;
    char x[20];
    char target[] = "done";
    int i = 0;
    while (strcmp(x, target) != 0) {
        cin >> x;
        i++;
    }
    cout << "You entered a total of " << i - 1 << " words." << endl;
}