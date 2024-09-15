#include <iostream>
using namespace std;
constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    cout <<"1-100 ertekek duplazasa"<<endl;
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        cout << "Ertek: " << b[i] << endl;
    }
    cout << "Atlag szamitasa: " << endl;
    int atlag;
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    cout << "Atlag: " << atlag << endl;

    cout << "Itt járt Cserók" << endl;
    return 0;
}
