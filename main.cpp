#include <iostream>
#include <iomanip>
#include <cstring>

//1.Вам задані два числа (або вводить користувач, або константи в коді). Знайдіть суму всіх цілих парних чисел в діапазоні між цими заданими числами включно
void task1(){
    int min, max;
    std::cout<<"min = ";    std::cin>>min;
    std::cout<<"max = ";    std::cin>>max;

    int sum=0;
    for(int i=min;i<=max;i++)
    {
        if(i % 2 == 0)
        {
            sum=sum+i;
        }
    }
    std::cout<<"sum = "<<sum<<std::endl;
}


//2.Вам задане деяке число (або вводить користувач, або константа в коді). Необхідно перевірити чи воно від’ємне чи додатнє, результат перевірки вивести в консоль
void task2(){
    int a;
    std::cout<<"a = ";    std::cin>>a;

    if(a<0)
    {
        std::cout<<"a < 0";
    }
    else{
    std::cout<<"a > 0";
    }
}


//3.В коді задана строка типу const char *. Необхідно вивести в консоль довжину цієї строки
void task3(){
    const char* str = "pups";
    std::cout << strlen(str) << std::endl;
}


//4.Вам задане деяке число (або вводить користувач, або константа в коді). Перетворіть його в строку (std::string)
void task4(){
    int a = 21;
    std::string s0 = std::to_string(a);
    std::cout<< s0 << std::endl;
}


//5.Знайдіть всі “щасливі” квитки з номерами в діапазоні від 000000 до 999999. Щасливим зазивається квиток, у якого сума цифр першої половини рівна сумі цифр другої половини, наприклад: 526265, 145226
void task5(){
	std::setfill('0');

	int cnt = 0;
    for (int i=0;i<1000000;i++) {
        int d0,d1,d2,d3,d4,d5,n = i;
        d5 = n % 10;    n = n/10;
        d4 = n % 10;    n = n/10;
        d3 = n % 10;    n = n/10;
        d2 = n % 10;    n = n/10;
        d1 = n % 10;    n = n/10;
		d0 = n % 10;

		if (d0+d1+d2 == d3+d4+d5) {
			std::cout<<std::setw(6) << i << std::endl;
			cnt++;
		}
	}
	std::cout << "Total lucky tickets: " << cnt << std::endl;
}


int main() {

    task4();

	return 0;
}
