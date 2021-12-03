#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> can = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"}; // heavenly stems
    vector<string> chi = {"Than", "Dau", "Tuat", "Hoi", "Ti", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"}; // earthly branches

    vector<string> branch = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat"};

    int y;
    cout << "Enter a year: ";
    cin >> y;

    string vn = can[y % 10] + ' ' + chi[y % 12]; // Vietnamese
    string en = branch[y % 12]; // English

    cout << "Nam " << vn << endl;
    cout << "The year of " << en;

    return 0;
}