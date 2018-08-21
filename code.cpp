#include<iostream>
using namespace std;

class Ratio{
	private:
		int num,den;

	public:
		friend void print(Ratio);

		Ratio(int x, int y){
			num = x;
			den = y;
		}

		Ratio operator++(){
			num = num + den;
			return *this;
		}

		Ratio operator++(int){
			Ratio temp=*this;
			num=num+den;
			return temp;
		}

		Ratio operator=(const Ratio &r){
			num=r.num;
			den=r.den;
		}
		
};

void print(Ratio r){
cout<<r.num<<'/'<<r.den<<endl;
}


int main(){
	Ratio pre(5,3);
	Ratio past(3,5);
	
	print(++pre);
	print(past++);	
	print(past);

return 0;
}
