#include <iostream>

using namespace std;

int main()
{
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
