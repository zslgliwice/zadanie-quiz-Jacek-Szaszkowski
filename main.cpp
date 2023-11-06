#include <iostream>

#include <windows.h>

#include <cstdlib>



using namespace std;



string imie;

string odp;



int main()

{

    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(uchwyt, 12);

    cout << "\aPodaj imie: ";

    cin >> imie;

    int pkt = 0;



    system("cls");

    cout << "3";

    Sleep(1000);

    system("cls");

    cout << "3..2";

    Sleep(1000);

    system("cls");

    cout << "3..2..1..";

    Sleep(1000);

    system("cls");



    cout << imie << " Witaj w tescie o Cristiano Ronaldo\n";





    cout << "Pytanie 1: Kiedy urodzil sie Cristiano Ronaldo?" << endl;

    cout << "a) 1990" << endl;

    cout << "b) 1985" << endl;

    cout << "c) 1983" << endl;

    cout << "Twoja odpowiedz: ";

    cin >> odp;

    if (odp == "b") {

        cout << "Poprawna odpowiedz!";

        pkt++;

    }

    else {

        cout << "Zle!";

    }

    Sleep(3000);

    system("cls");





    cout << "Pytanie 2: Ile Lig Mistrzow zdobyl Cristiano Ronaldo?" << endl;

    cout << "a) 2" << endl;

    cout << "b) 3" << endl;

    cout << "c) 5" << endl;

    cout << "Twoja odpowiedz: ";

    cin >> odp;

    if (odp == "c") {

        cout << "Poprawna odpowiedz!";

        pkt++;

    }

    else {

        cout << "Zle!";

    }

    Sleep(3000);

    system("cls");





    cout << "Pytanie 3: W jakim klubie Cristiano rozpoczal kariere seniorska?" << endl;

    cout << "a) Real Madryt" << endl;

    cout << "b) Sporting Lisbona" << endl;

    cout << "c) Manchester United" << endl;

    cout << "Twoja odpowiedz: ";

    cin >> odp;

    if (odp == "b") {

        cout << "Poprawna odpowiedz!";

        pkt++;

    }

    else {

        cout << "Zle!";

    }

    Sleep(3000);

    system("cls");





    cout << "Pytanie 4: W ktorym roku Cristiano Ronaldo zdobyl mistrzostwo europy?" << endl;

    cout << "a) 2016" << endl;

    cout << "b) 2012" << endl;

    cout << "c) 2020" << endl;

    cout << "Twoja odpowiedz: ";

    cin >> odp;

    if (odp == "a") {

        cout << "Poprawna odpowiedz!";

        pkt++;

    }

    else {

        cout << "Zle!";

    }

    Sleep(3000);

    system("cls");





    SetConsoleTextAttribute(uchwyt, 7);

    cout << "Twoj wynik to: " << pkt << "/4." << endl;



    return 0;

}
