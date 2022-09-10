
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
class PhanSo{
	private :
		ll tu,mau;
	public :
		PhanSo(ll tu,ll mau);
		friend ostream& operator << (ostream&,PhanSo);
		friend istream& operator >> (istream&,PhanSo&);
		void rutgon();
		friend PhanSo operator + (PhanSo,PhanSo);
};
PhanSo :: PhanSo(ll tu, ll mau){
	this->tu = tu;
	this->mau = mau;
}
ostream& operator << (ostream& out ,PhanSo a){
	out << a.tu << '/' << a.mau << endl;
	return out;
}
istream& operator >> (istream& in ,PhanSo &a ){
	in >> a.tu >> a.mau;
	return in;
}
PhanSo operator + (PhanSo a,PhanSo b){
	ll gcd = __gcd(a.mau,b.mau);
	ll lcm = a.mau *b.mau  / gcd;
	PhanSo tong(1,1);
	tong.tu = lcm / a.mau * a.tu + lcm / b.mau * b.tu;
	tong.mau = lcm;
	long long g = __gcd(tong.tu,tong.mau);
	tong.tu /=g;
	tong.mau/=g;
	return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
