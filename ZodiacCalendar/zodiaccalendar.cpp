#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // heavenly stems
    vector<string> can = {"Canh", "Tân", "Nhâm", "Quý", "Giáp", "Ất", "Bính", "Đinh", "Mậu", "Kỷ"};

    // earthly branches
    vector<string> chi = {"Thân", "Dậu", "Tuất", "Hợi", "Tí", "Sửu", "Dần", "Mão", "Thìn", "Tỵ", "Ngọ", "Mùi"};

    vector<string> branch = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat"};

    int y;
    cout << "Enter a year: ";
    cin >> y;

    string vn = can[y % 10] + ' ' + chi[y % 12]; // Vietnamese
    string en = branch[y % 12]; // English

    cout << "Năm " << vn << endl;
    cout << "The year of " << en;

    return 0;
}