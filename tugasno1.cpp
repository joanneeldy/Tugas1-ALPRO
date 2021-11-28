#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int umur;
    string lahir;
    float berat;
    
    cout<<"Masukkan nama: "; 
    getline (cin, nama);
    
    cout<<"Masukkan umur: "; 
    cin>>umur;
    
    cout<<"Masukkan tempat lahir: "; 
    cin.ignore();
    getline (cin, lahir);
    
    cout<<"Masukkan berat badan: "; 
    cin>>berat;
    
    cout<<"\nNama Anda: "<<nama; 
    cout<<"\nUmur Anda: "<<umur<<"Tahun"; 
    cout<<"\nTempat Lahir: "<<lahir; 
    cout<<"\nBerat Badan: "<<berat<<"KG"; 
    
    return 0;
}

//Masukkan nama: Joanne Landy Tantreece
//Masukkan umur: 18
//Masukkan tempat lahir: Batam
//Masukkan berat badan: 48.5

//Nama Anda: Joanne Landy Tantreece
//Umur Anda: 18 Tahun
//Tempat Lahir: Batam
//Berat Badan: 48.5 KG 