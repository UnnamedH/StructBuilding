﻿#include <iostream>
using namespace std;
struct Building {
	string adress;
	string typeBuilding;
	short numberFloors;
	short numberFlats;
	double lifeSpan;
	double termBeforeRepair;
};

void InitDataStruct(Building* building, int colElem) {
    int k = 1;
    for (int i = 0; i < colElem; i++) {
        cout << "Input data of " << k << " building\n";
        cout << "Input adress: ";
        cin.ignore(cin.rdbuf()->in_avail());
        cin >> building[i].adress;

        cout << "Input type building: ";
        cin.ignore(cin.rdbuf()->in_avail());
        cin >> building[i].typeBuilding;

        do {
            cout << "Input number floors: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!(cin >> building[i].numberFloors));

        do {
            cout << "Input number flats: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!(cin >> building[i].numberFlats));

        do {
            cout << "Input life span building: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!(cin >> building[i].lifeSpan));

        do {
            cout << "Input term before repair: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!(cin >> building[i].termBeforeRepair));
        k++;
    }
    
}

void DisplayArray(Building* building, int colElem) {
    int k = 1;
    for (int i = 0; i < colElem; i++) {
        cout << "\nData of " << k << " building";
        cout << "\nAdress: " << building[i].adress;
        cout << "\nType building: " << building[i].typeBuilding;
        cout << "\nNumber floors: " << building[i].numberFloors;
        cout << "\nNumber number flats: " << building[i].numberFlats;
        cout << "\nLife span: " << building[i].lifeSpan;
        cout << "\nTerm before repair: " << building[i].termBeforeRepair;
        k++;
    }
}



int main()
{
    int numberElem;
    cout << "Input number elements: ";
    while (!(cin >> numberElem)) {
        cout << "Input number elements: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    Building* building = new Building[numberElem];

    InitDataStruct(building, numberElem);
    DisplayArray(building, numberElem);
}

