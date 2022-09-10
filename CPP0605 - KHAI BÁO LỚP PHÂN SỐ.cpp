
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
void PhanSo :: rutgon(){
	long long gcd=__gcd(tu,mau);
	tu/=gcd;
	mau/=gcd;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
