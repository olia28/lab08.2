//���� ������� �����, ���� ������ ����������� ������� s0, �, sn, �.�����
//�������, ���������� ��������(����� ��� �������) � �� �� ������ ������, ������
//�������� �������.���������, �� ����� ������ �����, ��� ���������� � ����� �a�.

#include <iostream>
#include <string>
#include <sstream> 
using namespace std;


void FindA(string str, string word, bool &isFound);

int main()
{   
    string str, word;
    bool isFound = true;
   
    cout << "String:\n";
    getline(cin, str);
    FindA(str, word, isFound);
    system("pause");
    return 0;
}


void FindA(string strinput, string wordinput, bool &isFound)
{
    char a = 'a';
    int count = 0;
    stringstream words(strinput);
    while (words >> wordinput)
    {
        if (wordinput[0] == a) { count++; cout << "yes" << "\n"; isFound = true; }
    }
    if (count == 0) { cout << "no" << "\n"; }
}