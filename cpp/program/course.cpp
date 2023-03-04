// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor
Course::Course(){
    this->nama_matakuliah = "";
}

// Constructor
Course::Course(string nama_matakuliah){
    this->nama_matakuliah = nama_matakuliah;
}
        
// Setter dan Getter
void Course::setNamaMataKuliah(string nama_matakuliah){
    this->nama_matakuliah = nama_matakuliah;
}
        
string Course::getNamaMataKuliah(){
    return nama_matakuliah;
}
     
vector<Mahasiswa> Course::getMhsiswa(){
    return Mhsiswa;
}
        
vector<Dosen> Course::getDos(){
    return Dos;
}
        
// Tambah mahasiswa
void Course::addMahasiswa(Mahasiswa mahasiswa){
    Mhsiswa.push_back(mahasiswa);
}
        
// Tambah dosen
void Course::addDosen(Dosen dosen){
    Dos.push_back(dosen);
}

// Destructor
Course::~Course(){

}