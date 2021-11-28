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


//OUTPUT

//Masukkan nama: Joanne Landy Tantreece
//Masukkan umur: 18
//Masukkan tempat lahir: Batam
//Masukkan berat badan: 48.5

//Nama Anda: Joanne Landy Tantreece
//Umur Anda: 18 Tahun
//Tempat Lahir: Batam
//Berat Badan: 48.5 KG 


//ANALISA PROGRAM

//#include <iostream> merupakan deklarasi header 
//file/preprocessor standar baru yang merupakan file berisi 
//fungsi yang mendukung eksekusi instruksi tertentu dalam C++ dan 
//telah dikompilasi sebelumnya.

//#include <string> merupakan deklarasi header untuk pemrosesan string 
//yang merupakan sederetan simbol yang tidak tertentu panjangnya.

//using namespace std; adalah instruksi terhadap compiler untuk menggunakan 
//semua fungsi yang terkait untuk kerangka yang sama, fungsinya untuk
//meminimalisir kesalahan akibat tidak dikenalinya fungsi cout dan cin.

//int main() harus ada dalam pemrograman C++, memiliki arti main program 
//atau fungsi utama mengembalikan nilai int secara default, 
//akan mengembalikan nilai 0.
//int main() harus diawali dengan { dan diakhiri dengan } 
//berisi instruksi yang akan dieksekusi berikut 
//deklarasi variabel (variabel lokal) yang diperlukan.

//string nama; string merepresentasikan data berupa karakter (char)

//int umur; int = integer merupakan tipe data yang menampung angka bulat
//positif maupun negatif

//string lahir; string merepresentasikan data berupa karakter (char)

//float berat; float = floating point untuk data bilangan yang mengandung
//angka di belakang koma

//cout<< - perintah cout merupakan sebuah objek dalam C++ yang digunakan 
//untuk mengarahkan data ke dalam standar output (cetak pada layar)

//getline() - digunakan untuk menginput lebih dari 1 kata atau yang 
//menggunakan spasi

//cin>> - perintah cin diguunakan untuk memasukkan data

//cin.ignore(); berguna untuk meng-ignore sebuah new line

//tanda \n digunakan untuk pindah baris

//tanda semicolon (;) digunakan untuk mengakhiri sebuah pernyataan.

//setiap pernyataan wajib diakhiri dengan sebuah tanda semicolon.

//return 0; untuk keluar dari function dan mengabaikan segala hal.
