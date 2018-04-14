/*

Search Data Structure
@Author : Alfin Andika Pratama
TWFrYXNpaCBiYW55YWsgbG9oIHlhIDopIA==
:)

*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string Nama;
  char huruf[0];
  int Ketemu = 0;
  cout << "Masukan Nama? ";
  getline (cin, Nama);
  cout << "Masukan huruf yang ingin dicari? ";
  cin>>huruf;
  for(int i =0; i <=100; i++){
  	if(Nama[i] == huruf[0]){
  		Ketemu +=1;
  	}
  }

  if(Ketemu != 0){
  	cout<<"Data Ketemu ada "<<Ketemu;
  }else{
  	cout<<"Data Tidak Ditemukan";
  }
  cout<<endl;
  return 0;
}