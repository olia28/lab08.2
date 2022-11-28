//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, Е, sn, Е.√рупи
//символ≥в, в≥докремлен≥ проб≥лами(одним або к≥лькома) ≥ €к≥ не м≥ст€ть проб≥л≥в, будемо
//називати словами.¬изначити, чи р€док м≥стить слово, €ке починаЇтьс€ з букви УaФ.

#include <iostream>
#include <string>
#include <sstream> 
using namespace std;


void FindA(string str, string word);

int main()
{   
    string str, word;
   
    cout << "String:\n";
    getline(cin, str);
    FindA(str, word);
    system("pause");
    return 0;
}


void FindA(string strinput, string wordinput)
{
    char a = 'a';
    int count = 0;
    stringstream words(strinput);
    while (words >> wordinput)
    {
        if (wordinput[0] == a) { count++; cout << "yes" << "\n"; }
    }
    if (count == 0) { cout << "no" << "\n"; }
}