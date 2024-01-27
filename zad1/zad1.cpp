// zad1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <string>

void zad1(int n)
{
    int* num = new int[n];
    double sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++) {
        num[i] = rand() % 101;
        std::cout << num[i] << " " << std::endl;
    }
    for (int i = 0; i < n; i++)
    {
        sum += num[i];

    }
    sum = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > sum)
        {
            sum1++;
        }
    }
    std::cout << "Количество чисел, которые больше среднего арифметического всех чисел-" << sum1 << std::endl;
}
  
void zad2()
{
    const int n = 5;
    const int m = 4;
    int a;
    double sum = 0;
    int sum1 = 0;
    int num[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a = rand() % 100;
            num[i][j] = a;
            std::cout << num[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    for (int i = 0;i < n;i++)
    {
        sum = 0;
        sum1 = 0;
        for (int j = 0;j < m;j++)
        {
            sum += num[i][j];
        }
        sum /= m;
        std::cout << "среднее арифметичнеское строки " << i + 1 << ": " << sum << std::endl;
        for (int g = 0;g < m;g++)
        {
            if (num[i][g] > sum) sum1++;
        }
        std::cout << "кол-во чисел,больше среднего арифметического строки " << i + 1 << ": " << sum1 << std::endl;
        std::cout << std::endl;

       
   }
   
   // for (int i = 0; i < m; i++) {
    //        if (num[i][i] > sum) sum1++;
    //    std::cout << "row " << i + 1 << ": " << sum1 << std::endl;
   // }
    
   
}

struct Rectangle
{
    double width;
    double height;
};

void zad3(double a,double b)
{
    double P = (a + b) * 2;
    double S = a * b;
    std::cout << "Периметр прямоугольника-" << P << std::endl;
    std::cout << "Площадь прямоугольника-" << S << std::endl;
}
class String {
private:
    char symbols[26]= { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

public:
    void concerate(int n,int m)
    {
        int nn;
        std::string otv;
        for (int j = 0;j < m;j++)
        {
            for (int i = 0;i < n;i++)
            {
                int randomIndex = rand() % (sizeof(symbols) / sizeof(symbols[0]));
                std::cout << symbols[randomIndex];
                
            }
            std::cout << " ";
        }
        std::cout << std::endl;
       
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int z;
        int n;
        int a;
        int b;
        std::cout << "Введите номер задачи ";
        std::cin >> z;
        if (z == 1)
        {
            std::cout << "Введите размер массива: ";
            std::cin >> n;
            int* num = new int[n];
            zad1(n);
        }
        if (z == 2)
        {
            zad2();
        }
        if (z == 3)
        {
            std::cout << "Введите длину прямоугольника ";
            std::cin >> a;
            std::cout << "Введите ширину прямоугольника ";
            std::cin >> b;
            Rectangle rec;
            rec.width = a;
            rec.height = b;
            zad3(rec.height, rec.width);
        }
        if (z == 4)
        {
            int m;
            int n;
            std::cout << "Из скольки букв вы хотите вывести слово?" << std::endl;
            std::cin >> n;
            std::cout << "Сколько слов вы хотите вывести?" << std::endl;
            std::cin >> m;
            String s;
            s.concerate(n,m);
        }
    }
  
   
    
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
