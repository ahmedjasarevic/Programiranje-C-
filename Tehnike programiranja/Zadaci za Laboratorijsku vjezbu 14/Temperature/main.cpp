#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <limits.h>

using namespace std;


int main()
{
    string s;
    ifstream novifajl("TEMPERATURE.txt");

    if(novifajl.fail())
    {
        cerr << "Gteska" << endl;
    }
    string linija;
    int tempBroj,brojac = 0,suma = 0;
    double prosjecnaTemp;
    char znak;
    int minTemp = INT_MAX;
    int maxTemp = INT_MIN;
    vector<string> datumi;
    vector<string> nazivi;
    int brojacLinija = 0,brojacProsjeka = 0;
    int broj = 0;
    while(getline(novifajl,linija))
    {
        if(brojac == 1)
        {
            nazivi.push_back(linija);
            brojac++;
        }
        else if(brojac == 0)
        {
            datumi.push_back(linija);
            brojac++;
        }
        else if(brojac == 2)
        {
          cout << linija << " " <<endl;
            brojac = 0;
        }
        brojacLinija++;
    }





    fstream drugifajl("IZVJESTAJ.txt", ios::out);
    for(auto i = 0; i < brojacLinija-1; i++)
    {
        drugifajl << nazivi[i] << endl;
        drugifajl << "--------------------" <<endl;
        drugifajl << "Datum mjerenja : " << datumi[i] << endl;
        drugifajl << "Temperature mjerenja : "  << endl;
        drugifajl << endl;

    }




    return 0;
}
