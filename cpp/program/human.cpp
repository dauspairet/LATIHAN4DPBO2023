// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor
Human::Human(){
    this->NIK = "";
    this->nama = "";
    this->jenis_kelamin = "";
}

// Constructor
Human::Human(string NIK, string nama, string jenis_kelamin){
    this->NIK = NIK;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}
    
// Setter dan Getter
void Human::setNIK(string NIK){
    this->NIK = NIK;
}
    
string Human::getNIK(){
    return NIK;
}
    
void Human::setNama(string nama){
    this->nama = nama;
}
    
string Human::getNama(){
    return nama;
}
    
void Human::setJenisKelamin(string jenis_kelamin){
    this->jenis_kelamin = jenis_kelamin;
}
    
string Human::getJenisKelamin(){
    return jenis_kelamin;
}

// Destructor
Human::~Human(){

}