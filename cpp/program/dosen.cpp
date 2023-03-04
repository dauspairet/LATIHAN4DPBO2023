// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor
Dosen::Dosen(){
    this->NIP = "";
    this->fakultas = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}

// Constructor
Dosen::Dosen(string NIK, string NIP, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string pend_terakhir, string keahlian)
    : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
    this->NIP = NIP;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// Setter dan Getter
void Dosen::setNIP(string NIP){
    this->NIP = NIP;
}

string Dosen::getNIP(){
    return this->NIP;
}

void Dosen::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
        
string Dosen::getFakultas(){
    return this->fakultas;
}
        
void Dosen::setPendidikanTerakhir(string pend_terakhir){
    this->pend_terakhir = pend_terakhir;
}
        
string Dosen::getPendidikanTerakhir(){
    return this->pend_terakhir;
}
        
void Dosen::setKeahlian(string keahlian){
    this->keahlian = keahlian;
}

string Dosen::getKeahlian(){
    return this->keahlian;
}

// Destructor
Dosen::~Dosen(){
    
}