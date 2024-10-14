#include <iostream>

constexpr int N_ELEMENTS = 100;
using namespace std;  //ez amiatt, hogy ne kelljen minden sorba kiírni, hogy 'std::'

int main()
{
    int *b = new int[N_ELEMENTS];  //NELEMENTS helyett N_ELEMENTS
    cout << '1-100 ertekek duplazasa'; //'std::' törölve, sor végén ';' kirakva
    for (int i = 0;i <= N_ELEMENTS; i++)  //for ciklus hiányos, hiányzik hogy meddig menjen, hanyas lépésközzel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<= N_ELEMENTS; i++) //<=N_ELEMENTS hiányzott
    {
        cout << "Ertek: " << b[i] << endl;  //az értéket nem írja ki az 'Ertek: ' után, sor végén ';' hiányzott, 'std::' törölve
    }    
    cout << "Atlag szamitasa: " << endl;  //'std::' törölve
    
    int atlag;

    for (int i = 0; i <= N_ELEMENTS; i++)  // a for ciklusban nem megfelelő az elválasztó karakter
    {
        atlag += b[i];  //hiányzik a sor végi ';' záró karakter
    }
    atlag /= N_ELEMENTS;
    cout << "Atlag: " << atlag << endl;  //'std::' törölve
    cout << "Itt járt a cserók" << endl;
    return 0;
}
