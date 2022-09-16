#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct User
{
    char name[50];
    int age;
    float salary;
};

template <typename T>
void PrintNumber(T n)
{
    T count = 100.5;
    cout << count;
}

template <typename T1, typename T2>
auto sum(T1 a, T2 b)
{
    //auto c = a + b;
    return a + b;
}



void PrintStars(int = 20);

void PrintUser(const User& user)
{
    PrintStars();
    cout << user.name << " " << user.age << " " << user.salary << "\n";
    PrintStars();
}

void myswap(int&, int&);

int main()
{
    auto n = 10;

    /*PrintStars(50);
    int x = 10;
    int y = 20;

    cout << x << " " << y << "\n";
    myswap(x, y);
    cout << x << " " << y << "\n";*/

    /*cout << sizeof(User) << "\n";

    User bob;

    strcpy(bob.name, "Bob");
    bob.age = 35;
    bob.salary = 45000.0;

    PrintUser(bob);

    bob.age = 54;*/

    //cout << sum(4.5, 8.2);

    /*int x = 10;
    PrintNumber<char>(x);*/


    int s = sum(10, 20);

    return 0;
}

void PrintStars(int count)
{
    for (int i = 0; i < count; i++)
        cout << "*";
    cout << "\n";
}

void myswap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
