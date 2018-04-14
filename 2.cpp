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
  string Nama[100];
  string Dicari;
  int Jumlah;
  bool ketemu = false;

  cout<<"masukan jumlah nama : ";
  cin>>Jumlah;

  for (int i = 0; i <Jumlah; i++)
  {
      cout<<i+1<<". ";
      cin>>Nama[i]; 
  }

  cout<<"Masukan Nama Yang dicari? ";
  cin>>Dicari;

  for (int i = 0; i < Jumlah; i++){
    if(Nama[i] == Dicari){
      ketemu = true;
    }
  }

  if(ketemu == true){
    cout<<"Data ditemukan !";
  }else{
    cout<<"Data tidak ditemukan !";
  }
  cout<<endl;
  
  return 0;
}