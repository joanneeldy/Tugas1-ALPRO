#include <iostream>
#include <string>

using namespace std;

int main()
{
    uint64_t nim;
    string nama;
    float nilai1;
    float nilai2;
    float nilai3;
    float jumlah;
    float rerata;
    char nilai;
    
    cout<<"Masukkan NIM: ";
    cin>>nim;
    
    cout<<"Masukkan Nama: ";
    cin.ignore();
    getline(cin,nama);
    
    cout<<"Masukkan Nilai 1: ";
    cin>>nilai1;
    
    cout<<"Masukkan Nilai 2: ";
    cin>>nilai2;
    
    cout<<"Masukkan Nilai 3: ";
    cin>>nilai3;
    
    jumlah = nilai1+nilai2+nilai3;
    rerata = jumlah/3;
    
    if((rerata >= 80) && (rerata <= 100))
    {
        nilai = 'A';
    }
    else if ((rerata >= 70) && (rerata < 80))
    {
        nilai = 'B';
    }
    else if ((rerata >= 60) && (rerata < 70))
    {
        nilai = 'C';
    }
    else if ((rerata >= 50) && (rerata < 60))
    {
        nilai = 'D';
    }
    else {
        nilai = 'E';
    }
    
    cout<<"\nNilai Mahasiswa Atas Nama "<<nama;
    cout<<" Dengan NIM "<<nim;
    cout<<"\nRata-rata Adalah: "<<rerata;
    cout<<"\nGrade: "<<nilai;
    
    return 0;
}


//OUTPUT

// Masukkan NIM: 210401010022
// Masukkan Nama: Joanne Landy Tantreece
// Masukkan Nilai 1: 95
// Masukkan Nilai 2: 98
// Masukkan Nilai 3: 99.5

// Nilai Mahasiswa Atas Nama Joanne Landy Tantreece Dengan NIM 210401010022
// Rata-rata Adalah: 97.5
// Grade: A 


// ANALISA PROGRAM

// #include <iostream> merupakan deklarasi header 
// file/preprocessor standar baru yang merupakan file berisi 
// fungsi yang mendukung eksekusi instruksi tertentu dalam C++ dan 
// telah dikompilasi sebelumnya.

// #include <string> merupakan deklarasi header untuk pemrosesan string 
// yang merupakan sederetan simbol yang tidak tertentu panjangnya.

// using namespace std; adalah instruksi terhadap compiler untuk menggunakan 
// semua fungsi yang terkait untuk kerangka yang sama, fungsinya untuk
// meminimalisir kesalahan akibat tidak dikenalinya fungsi cout dan cin.

// int main() harus ada dalam pemrograman C++, memiliki arti main program 
// atau fungsi utama mengembalikan nilai int secara default, 
// akan mengembalikan nilai 0.
// int main() harus diawali dengan { dan diakhiri dengan } 
// berisi instruksi yang akan dieksekusi berikut 
// deklarasi variabel (variabel lokal) yang diperlukan.

// uint64_t nim; merupakan deklarasi variabel untuk menampung unsigned integer berukuran hingga 64 bit

// string nama; merupakan deklarasi variabel untuk string (data karakter)

// float nilai1, nilai2, nilai3; merupakan deklarasi variabel float = floating point untuk 
// data bilangan yang mengandung
// angka di belakang koma

// char nilai; deklarasi variabel char - character untuk menampung 1 digit karakter
    
// cout<< - perintah cout merupakan sebuah objek dalam C++ yang digunakan 
// untuk mengarahkan data ke dalam standar output (cetak pada layar)

// cin.ignore(); berguna untuk meng-ignore sebuah new line
// cin>> - perintah cin diguunakan untuk memasukkan data

// getline(); - digunakan untuk menginput lebih dari 1 kata atau yang 
// menggunakan spasi

// jumlah = nilai1+nilai2+nilai3; merupakan pernyataan rumus
// rerata = jumlah/3; merupakan pernyataan rumus

// IF-ELSE bercabang atau multiple IF-ELSE merupakan perluasan dari struktur
// yang memiliki 2 kondisi yaitu dengan menyisipkan satu atau lebih kondisi
// ke dalamnya
// Operator logika && (AND) HANYA akan menghasilkan true jika kedua
// operand bernilai true
// Jika salah satu kondisi bernilai salah, maka akan dilanjutkan ke
// pernyataan selanjutnya.

// tanda \n digunakan untuk pindah baris

// tanda semicolon (;) digunakan untuk mengakhiri sebuah pernyataan.

// setiap pernyataan wajib diakhiri dengan sebuah tanda semicolon.

// return 0; untuk keluar dari function dan mengabaikan segala hal.