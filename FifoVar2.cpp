// FIFOvar1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

#define MAX_E 5

using namespace std;


class FifoVar2
{
private:
    int count;
    int* bufferFIFO;

public:
    FifoVar2();
    ~FifoVar2();
    int pushedElement;
    int AddNewElement(int value);
};

FifoVar2::FifoVar2()
{
    count = 0;
    bufferFIFO = new int[MAX_E];
    for (int i = 0; i < MAX_E; i++)
    {
        bufferFIFO[i] = 0;
    }
}

FifoVar2::~FifoVar2()
{
    delete[] bufferFIFO;
}

int FifoVar2::AddNewElement(int value)
{
    //
    pushedElement = bufferFIFO[count % MAX_E];
    bufferFIFO[count % MAX_E] = value;
    count++;

    return pushedElement;
}

int main()
{
    //
    int element;
    int inputValue;
    FifoVar2 Buffer;

    while (1)
    {
        cin >> inputValue;

        element = Buffer.AddNewElement(inputValue);
            cout << element << endl;
    }
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
