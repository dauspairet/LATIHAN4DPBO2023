// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor
Mahasiswa::Mahasiswa(){
    this->NIM = "";
    this->fakultas = "";
}

// Constructor
Mahasiswa::Mahasiswa(string NIK, string NIM, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas) : 
SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
    this->NIM = NIM;
    this->fakultas = fakultas;
}
        
// Setter dan Getter
void Mahasiswa::setNIM(string NIM){
    this->NIM = NIM;
}
        
string Mahasiswa::getNIM(){
    return this->NIM;
}
        
void Mahasiswa::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
        
string Mahasiswa::getFakultas(){
    return this->fakultas;
}

// Destructor
Mahasiswa::~Mahasiswa(){

}
