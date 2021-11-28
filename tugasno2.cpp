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
    float sum;
    float ratarata;
    char grade;
    
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
    
    sum=nilai1+nilai2+nilai3;
    ratarata=sum/3;
    
    if((ratarata >= 80) && (ratarata <= 100))
    {
        grade = 'A';
    }
    else if ((ratarata >= 70) && (ratarata < 80))
    {
        grade = 'B';
    }
    else if ((ratarata >= 60) && (ratarata < 70))
    {
        grade = 'C';
    }
    else if ((ratarata >= 50) && (ratarata < 60))
    {
        grade = 'D';
    }
    else {
        grade = 'E';
    }
    
    cout<<"\nNilai Mahasiswa Atas Nama "<<nama;
    cout<<" Dengan NIM "<<nim;
    cout<<"\nRata-rata Adalah: "<<ratarata;
    cout<<"\nGrade: "<<grade;
    
    return 0;
}