// Kosenko Anastasia, 0324
// https://github.com/nattakkoss/laba

#include <iostream>
using namespace std;
int main() {
// 1 задание

cout<<"int: "<<sizeof(int)<<"\n";
cout<<"short int: "<<sizeof(short int)<<"\n";
cout<<"long int: "<<sizeof(long int)<<"\n";
cout<<"float: "<<sizeof(float)<<"\n";
cout<<"double: "<<sizeof(double)<<"\n";
cout<<"long double: "<<sizeof(long double)<<"\n";
cout<<"char: "<<sizeof(char)<<"\n";
cout<<"bool: "<<sizeof(bool)<<"\n";


 // 2 задание
int a;
unsigned int mask = 1 << 31;
cout << "Вывод на экран двоичного представления в памяти целого числа , Введите число: ";
cin >> a;//Вводим целое число
cout << " Результат: ";
    for (int i = 0; i <= 31; i++) 
{
      if (i == 1) 
      {
         cout << " ";
      }
      putchar(a & mask ? '1' : '0');//если 1, то возвращается 1, иначе 0
      mask >>= 1;// побитовый сдвиг вправо на 1 бит
}
      cout << "\n";

// 3 задание

union  //посмотрим на float глазами int,  используя содержимое одной и той же области памяти
{
 int a;
float b;
};

 unsigned int maskfloat = 1 << 31;

cout << "Вывод на экран двоичного представления в памяти  числа типа float , Введите число: ";
cin >> b;//Вводим число типа float
for (int j = 0; j <= 31; j++)
{
   if (j == 1 || j == 9) //Визуально обозначаем знаковый разряд мантиссы, знаковый разряд порядка (если есть), мантиссу и порядок. Для float под мантиссу отводится 23 бита, под экспоненту – 8, под знак – 1.
     {
      cout << " ";
      }
  putchar(a & maskfloat ? '1' : '0');
  a<<= 1; // побитовый сдвиг влево на 1 бит
}
  cout << "\n";

// 4 задание

    union 
{
 int arr[2]; // Используем массив из двух int, под который будет отведено 8 байт.
double k;
};
unsigned int doublemask = 1 << 31;
 cout << "Вывод на экран двоичного представления в памяти  числа типа double , Введите число:  ";
cin >> k; // Вводим число типа double
   for (int l = 0; l<= 31; l++) 
{
     if (l== 1 || l== 12) // Визуально обозначаем знаковый разряд мантиссы, знаковый разряд порядка (если есть), мантиссу и порядок.  Для double под мантиссу отводится 52 бита, под экспоненту – 11, под знак – 1 
     {
      cout << " ";
      }
putchar(arr[1] & doublemask ? '1' : '0');
arr[1] <<= 1;
}
     for (int l = 0; l <= 31; l++) 
      { 
   putchar(arr[0] & doublemask? '1' : '0');
   arr[0] <<= 1;
     }
  cout << "\n";
}