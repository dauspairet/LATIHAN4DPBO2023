// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor 
ProgramStudi::ProgramStudi(){
    this->nama_prodi = "";
    this->kode = "";
    this->course = "";
}

// Constructor
ProgramStudi::ProgramStudi(string nama_prodi, string kode, string course){
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
}
        
// Setter and getter
void ProgramStudi::setNamaProdi(string nama_prodi){
    this->nama_prodi = nama_prodi;
}
        
string ProgramStudi::getNamaProdi(){
    return this->nama_prodi;
}

void ProgramStudi::setKode(string kode){
    this->kode = kode;
}

string ProgramStudi::getKode(){
    return this->kode;
}

void ProgramStudi::setCourse(string course){
    this->course = course;
}

string ProgramStudi::getCourse(){
    return this->course;
}

// Destructor
ProgramStudi::~ProgramStudi(){

}