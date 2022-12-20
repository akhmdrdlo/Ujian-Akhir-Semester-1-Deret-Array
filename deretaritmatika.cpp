#include <iostream>

using namespace std;

void garis(){
	cout<<"---------------------"<<endl;
}

main(){
	int br,kl,x,y,z,i;
	cout<<"Inputkan berapa banyak baris yang diinginkan untuk array : ";
	baris:
	cin>>br;
	if(br>20){
		cout<<"Baris anda terlalu banyak!!"<<endl;
		goto baris;
	}
	cout<<"Inputkan berapa banyak kolom yang diinginkan untuk array : ";
	cin>>kl;
	if(kl>20){
		cout<<"Kolom anda terlalu banyak!!"<<endl;
		goto baris;
	}
	garis();
	
	int array[br][kl];
    cout<<"Berikan nilai pada array!"<<endl;
    garis();
    for (x=1; x<=br; x++){
    	for(y=1; y<=kl; y++){
    		cout<<"Array baris ke-"<<x<<" kolom ke-"<<y<<": \n";
    		cin>>array[x][y];
		}
		garis();
	}	
	
	cout<<"Array awal : \n";
	garis();
	for(x=1;x<=br;x++){
		for(y=1;y<=kl;y++){
				cout<<" "<<array[x][y];
		}
		cout<<endl;
	}
	garis();
	
	int hasil[x * y];
	int kali=0;
	for(x=1;x<=br;x++){
		for(y=1;y<=kl;y++){
			if(array[x][y]%3 != 0 && array[x][y]%5 != 0 && array[x][y]%7 != 0){
				hasil[kali]=array[x][y];
				kali++;
			}
		}
	}
	
	cout<<"\nHasilnya yang tidak bisa dibagi 3, 5, 7 adalah : ";
	for(int i = 0; i < kali; i++){
		cout<<hasil[i];
		if(i < kali -1){
			cout<<", ";
		}else{
			cout<<".";
		}
	}
}
