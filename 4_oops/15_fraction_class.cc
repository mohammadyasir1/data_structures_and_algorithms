#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>

using namespace std;

class Fraction {

	int numerator, denominator;
public:
	Fraction(int n, int d) {
		this->numerator = n;
		this->denominator = d;
	}

	void add(Fraction &f) {
		this->numerator = this->numerator * f.denominator + this->denominator * f.numerator;
		this->denominator = this->denominator * f.denominator;
	}

	void multiply(Fraction &f) {
		this->numerator = this->numerator * f.numerator;
		this->denominator = this->denominator * f.denominator;
	}

	void simplify() {
		int c = __gcd(numerator, denominator);
		numerator /= c;
		denominator /= c;
	}

	void print() {
		cout<<numerator<<"/"<<denominator<<endl;
	}
};


int main() {

	int numerator, denominator;
	cin>>numerator>>denominator;

	Fraction f(numerator, denominator);

	int n;
	cin>>n;

	while(n) {
		int operation;
		cin>>operation;

		switch(operation) {
			case 1 : {
				int a,b;
				cin>>a>>b;
				Fraction f1(a,b);
				f.add(f1);
				f.simplify();
				f.print();
				break;	
			}

			case 2 : {
				int a,b;
				cin>>a>>b;
				Fraction f1(a,b);
				f.multiply(f1);
				f.simplify();
				f.print();
				break;	
			}
		}
		n--;
	}
	return 0;
}