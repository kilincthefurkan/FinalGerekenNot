#include <iostream>
#include <cmath>
using namespace std;
/*
double ortalama(int y1,int y2){
	return ((y1*0.4)+(y2*0.6));
}

main(){
	int yazili1,yazili2;
	cout<<"Vize not = ";
	cin>>yazili1;
	cout<<endl<<"Final Not = ";
	cin>>yazili2;
	cout<<endl;
	cout<<"----Ortalama---- = "<<ortalama(yazili1,yazili2)<<endl<<endl;
	cout<<"-------------------------------"<<endl<<endl;
	return main();
	}
	*/
	int vize(){
			double vize,sonuc;
		cout<<"Vizeni gir = ";
		cin>>vize;
		cout<<endl<<"Vize Notun = "<<vize<<endl;
		cout<<"Dersi gecmen icin gereken final notun = ";
		sonuc = (50-(vize*0.4))*100/60;
		cout<<sonuc<<endl<<endl;
	}
	
	main(){
		cout<<"-----FKFinalNot-----"<<endl<<endl;
	    vize();
		cout<<"--------------"<<endl<<endl;
		return vize();
		
	}
