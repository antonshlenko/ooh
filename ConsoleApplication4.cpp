#include <iostream>

double Sum(double& a, double& b);// прототипы функций суммы умножения и т д 
double Odds(double& a, double& b);
double Multip(double& a, double& b);
double Segmentat(double& a, double& b);

using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    double a = 0, b = 0, result = 0;
    int temp = 0;
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;

    double(*Psum)(double&, double&) = &Sum;//указатели на функции правильные ли они ? 
    double(*Podds)(double&, double&) = &Odds;
    double(*Pmultip)(double&, double&) = &Multip;
    double(*Psegmentat)(double&, double&) = &Segmentat;

    void* actions[4] = { *Psum, *Podds,*Pmultip, *Psegmentat }; // массив указателей на функции 

    cout << "Выберите действие 1-сложение\n2-вычитание \n3умножение \n4деление " << endl;
    cin >> temp;
    temp--;

    result = *(double*)actions[temp];// вот здесь должен запрос ити в массив указателей и доставаться нужная   //функция на исполнение, но что то идет не так */
    cout << result << endl;
    system("pause");
}

double Sum(double& a, double& b)// сами функции 
{
    double sum = a + b;
    return sum;
}
double Odds(double& a, double& b)
{
    double odds = a - b;
    return odds;
}
double Multip(double& a, double& b)
{
    double multip = a * b;
    return multip;
}
double Segmentat(double& a, double& b)
{
    double segment = a / b;
    return segment;
}





#include <iostream>
#include <conio.h>
using namespace std;
void sum(int* op1, int* op2, int* res, int n)
{
    *res = (*op1) + (*op2);
    --n;
    if (n > 0) sum(++op1, ++op2, ++res, n);
}
int main()
{
    int a1[] = { 5,12,6,4 };
    int a2[] = { 9,3,2,-1 };
    int a3[4];
    sum(a1, a2, a3, 4);
    for (int i = 0; i < 4; i++)cout << a3[i] << " ";
    cout << endl;
    getch();
    return 0;
}





#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str("123 gs sdg ");

    cout << str << endl;

    replace(str.begin(), str.end(), ' ', '\t');

    cout << str << endl;
}