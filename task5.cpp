#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(){
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
