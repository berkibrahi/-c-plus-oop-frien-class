#include <iostream>

using namespace std;
class kisi{
	private:
		string ad;
		string soyad;
		int maas;
		public:
			kisi(string ad, string soyad,int maas){
				this->ad=ad;
				this->soyad=soyad;
				this->maas=maas;
			}
			friend class ogrenci;
		
};
class ogrenci{
	public:
		string ders;
		int notu;
		void yazdir(kisi a){
				cout<<a.ad<<" "<<a.soyad<<" "<<a.maas<<" "<<ders<<" "<<notu<<endl;
			}

};
	

int main(int argc, char** argv) {
		kisi k("ibrahim","berk",4000);
		ogrenci o;
		o.ders="yazilim";
		o.notu=85;
		o.yazdir(k);
	return 0;
}
