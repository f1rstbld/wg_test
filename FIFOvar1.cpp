// FIFOvar1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

#define MAX_E 128

using namespace std;


class FifoVar1
{
private:
    int* bufferFIFO;
    
public:
    FifoVar1();
    ~FifoVar1();
    int pushedElement;
    int AddNewElement(int value);
};

FifoVar1::FifoVar1()
{
    bufferFIFO = new int[MAX_E];
    for (int i = 0; i < MAX_E; i++)
    {
        bufferFIFO[i] = 0;
    }
}

FifoVar1::~FifoVar1()
{
    delete[] bufferFIFO;
}

int FifoVar1::AddNewElement(int value)
{
    //
        pushedElement = bufferFIFO[0];
        
    for (int i = 0; i < MAX_E - 1; i++)
    {
        bufferFIFO[i] = bufferFIFO[i + 1];
    }

    bufferFIFO[MAX_E - 1] = value;

    return pushedElement;
}

int main()
{
    //
    int element;
    int inputValue;
    FifoVar1 Buffer;

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
