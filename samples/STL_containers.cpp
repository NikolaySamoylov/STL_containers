#include <iostream>
#include <set>
#include <deque>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    /* Ассоциативные контейнеры */

    // set - шаблонный контейнер, представляющий собой
    // бинарное дерево, хранящее уникальные элементы в упорядоченном порядке
    cout << "Пример ассоциативного контейнера" << endl << "Контейнер set" << endl;
    set<int> mySet = { 1, 1, 44, -2, 18, 4, -5, 8 }; // такая инициализация допускается

    // insert - добавление элемента,
    mySet.insert(5);  // 5 отсутствует в изначальной инициализации, потому она добавится в set
    mySet.insert(4); // 4 же присутствует, потому ничего не изменится
    cout << "Элементы mySet:" << endl;
    // range-based цикл, позволяющий вывести все элементы "коллекции" (set в нашем случае)
    for (auto &Elem : mySet) // Используем auto для краткости записи
    {
        cout << Elem << endl;
    }

    set<int> tenSet;
    cout << "Упорядоченные уникальные числа от 0 до 9:" << endl;
    for (int i = 0; i < 20; i++) // хотя у нас 20 итераций чисел будет <= 10, 
                                   // так как некоторые могут повторяться 
    {
        tenSet.insert(rand() % 10); // берём остатки от деления на 10
    }
    for (auto& Elem : tenSet) // Используем auto для краткости записи
    {
        cout << Elem << endl;
    }

    cout << "Введите число, которое необходимо найти в mySet:" << endl;
    int value;
    cin >> value;
    //find - поиск конкретного элемента в set, возвращает итератор на определённый элемент
    if (mySet.find(value) != mySet.end()) // если полученный итератор не указывает в "никуда",
                                                          // то элемент содержится в set
    {
        cout << "Число " << value << " найдено";
    }
    else // если мы получили нулевой указатель, то элемент не содержится в set
    {
        cout << "Число " << value << " не найдено";
    }
    cout << endl;

    //erase - удаление элемента
    mySet.erase(-2);
    mySet.erase(-5);
    cout << "mySet без отрицательных элементов:" << endl;
    for (auto& Elem : mySet)
    {
        cout << Elem << endl;
    }
    cout << endl;

    /* последовательные контейнеры */

    // deque - шаблонный контейнер, представляющий собой двустороннюю очередь
    cout << "Пример последовательного контейнера" << endl << "Контейнер deque" << endl;
    deque<int> myDeque = { 2, 3, 4 }; //Такая инициализация также допустима 

    myDeque.push_front(1); // добавление элемента в начало дека
    myDeque.push_back(5); // добавление элемента в конец дека
    cout << "Элементы myDeque:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }

    myDeque.pop_front(); // удаление элемента из начала дека
    myDeque.pop_back(); // удаление элемента из конца дека
    cout << "Изначальные элементы myDeque:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }

    myDeque.insert(myDeque.begin(), 1); // добавление элемента в произвольное место дека 
    myDeque.erase(myDeque.begin() + 3);
    cout << "Числа от 1 до 3:" << endl;
    for (auto& Elem : myDeque)
    {
        cout << Elem << endl;
    }
  return 0;
}