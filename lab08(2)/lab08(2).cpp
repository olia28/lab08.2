//���� ������� �����, ���� ������ ����������� ������� s0, �, sn, �.�����
//�������, ���������� ��������(����� ��� �������) � �� �� ������ ������, ������
//�������� �������.���������, �� ����� ������ �����, ��� ���������� � ����� �a�.

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