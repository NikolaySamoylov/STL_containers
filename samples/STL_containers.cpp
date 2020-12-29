#include <iostream>
#include <set>
#include <deque>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    /* ������������� ���������� */

    // set - ��������� ���������, �������������� �����
    // �������� ������, �������� ���������� �������� � ������������� �������
    cout << "������ �������������� ����������" << endl << "��������� set" << endl;
    set<int> mySet = { 1, 1, 44, -2, 18, 4, -5, 8 }; // ����� ������������� �����������

    // insert - ���������� ��������,
    mySet.insert(5);  // 5 ����������� � ����������� �������������, ������ ��� ��������� � set
    mySet.insert(4); // 4 �� ������������, ������ ������ �� ���������
    cout << "�������� mySet:" << endl;
    // range-based ����, ����������� ������� ��� �������� "���������" (set � ����� ������)
    for (auto &Elem : mySet) // ���������� auto ��� ��������� ������
    {
        cout << Elem << endl;
    }

    set<int> tenSet;
    cout << "������������� ���������� ����� �� 0 �� 9:" << endl;
    for (int i = 0; i < 20; i++) // ���� � ��� 20 �������� ����� ����� <= 10, 
                                   // ��� ��� ��������� ����� ����������� 
    {
        tenSet.insert(rand() % 10); // ���� ������� �� ������� �� 10
    }
    for (auto& Elem : tenSet) // ���������� auto ��� ��������� ������
    {
        cout << Elem << endl;
    }

    cout << "������� �����, ������� ���������� ����� � mySet:" << endl;
    int value;
    cin >> value;
    //find - ����� ����������� �������� � set, ���������� �������� �� ����������� �������
    if (mySet.find(value) != mySet.end()) // ���� ���������� �������� �� ��������� � "������",
                                                          // �� ������� ���������� � set
    {
        cout << "����� " << value << " �������";
    }
    else // ���� �� �������� ������� ���������, �� ������� �� ���������� � set
    {
        cout << "����� " << value << " �� �������";
    }
    cout << endl;

    //erase - �������� ��������
    mySet.erase(-2);
    mySet.erase(-5);
    cout << "mySet ��� ������������� ���������:" << endl;
    for (auto& Elem : mySet)
    {
        cout << Elem << endl;
    }
    cout << endl;

    /* ���������������� ���������� */

    // deque - ��������� ���������, �������������� ����� ������������ �������
    cout << "������ ����������������� ����������" << endl << "��������� deque" << endl;
    deque<int> myDeque = { 2, 3, 4 }; //����� ������������� ����� ��������� 

    myDeque.push_front(1); // ���������� �������� � ������ ����
    myDeque.push_back(5); // ���������� �������� � ����� ����
    cout << "�������� myDeque:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }

    myDeque.pop_front(); // �������� �������� �� ������ ����
    myDeque.pop_back(); // �������� �������� �� ����� ����
    cout << "����������� �������� myDeque:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }

    myDeque.insert(myDeque.begin(), 1); // ���������� �������� � ������������ ����� ���� 
    myDeque.erase(myDeque.begin() + 3);
    cout << "����� �� 1 �� 3:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }
  return 0;
}