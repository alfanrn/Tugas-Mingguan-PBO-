#include <iostream>
using namespace std;
// 12. Comment

int main(){//1. Main program


	// 3. Tipe data___________2. Variabel
	int a=1;
	float b=3.14;
	bool c;
	char d='d';
	string e="Ini Tipe String";
	struct Contoh{
		int k=6;
	};
	
	//8. Array 1D
	int f[5]={1,2,3,4,5};
	
	//9. Array 2D
	int g[2][2]={{1,2},{3,4}};
	int *h;
	int masuk1;
	string masuk2;
	
	//11. Output
	cout<<"Ini merupakan output tipe data \n";
	cout<<" - INT "<<a;
	cout<<"\n - FLOAT "<<b;
	cout<<"\n - CHAR "<<d;
	
	//5. IF
	if(c==true){
		cout<<"\n - Ini merupakan output karena tipe data BOOLEAN yang bernilai TRUE";
		c=false;
		if(c==false)
			cout<<"\n - Ini merupakan output karena tipe data BOOLEAN yang bernilai FALSE";
	}else{
	}
	
	cout<<"\n - STRING -> "<<e;
	cout<<"\n - POINTER -> "<<h;
	Contoh contoh;
	cout<<"\n - STRUCT "<<contoh.k<<endl;
	
	//4. FOR
	cout<<"\n Ini FOR ARRAY 1D"<<endl;
	for(int i=0;i<5;i++){
		cout<<" "<<f[i];
	}
	cout<<endl;
	cout<<"\n Ini FOR ARRAY 2D"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<" "<<g[i][j];
		}
		cout<<endl;
	}
	
	//10. INPUT
	cout<<"\n Ini meminta input INT : ";cin>>masuk1;
	cout<<"    Hasilnya -> "<<masuk1;
	cin.ignore();
	cout<<endl;
	cout<<"\n Ini meminta input String : ";getline(cin, masuk2);
	cout<<"    Hasilnya -> "<<masuk2;
	cout<<endl;
	//6. WHILE
	int l=0;
	while(l<3){
		cout<<"\n Ini WHILE";
		l++;
	}
	cout<<"\n";
	//7. DO WHILE
	l=0;
	do{
		cout<<"\n Ini DO WHILE"<<endl;
		l++;
	}while(l<3);
	return 0;
	
}
