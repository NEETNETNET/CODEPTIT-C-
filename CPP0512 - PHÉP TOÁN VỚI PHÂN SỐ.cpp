
#include<bits/stdc++.h>

using namespace std;

struct  PhanSo{
	long long tu,mau;
};
void rutgon(PhanSo &p){
	long long n = __gcd(p.tu,p.mau);
	p.tu /=n;
	p.mau/=n;
}
PhanSo tong(PhanSo a,PhanSo b){
    long long gcd=__gcd(a.mau,b.mau);
	long long lcm= a.mau*b.mau / gcd;
	a.tu=lcm / a.mau * a.tu;
	b.tu = lcm / b.mau * b.tu;
	a.tu+=b.tu;
	a.mau=lcm;
	rutgon(a);
	return a;
}
PhanSo bp(PhanSo a){
    a.tu= pow(a.tu,2);
    a.mau = pow(a.mau,2);
    rutgon(a);
    return a;
}
PhanSo nhan(PhanSo a, PhanSo b,PhanSo c){
    a.tu*=b.tu*c.tu;
    a.mau*=b.mau*c.mau;
    rutgon(a);
    return a;
}
void process(PhanSo a,PhanSo b){
	PhanSo c = bp(tong(a,b));
	PhanSo d = nhan(a,b,c);
	cout << c.tu << '/' << c.mau << " " << d.tu << '/' << d.mau <<endl;

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
