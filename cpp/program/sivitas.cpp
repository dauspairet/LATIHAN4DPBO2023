// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

// Constructor 
SivitasAkademik::SivitasAkademik(){
    this->asal_universitas = "";
    this->email_edu = "";
}

// Constructor
SivitasAkademik::SivitasAkademik(string NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu) : 
Human(NIK, nama, jenis_kelamin){
this->asal_universitas = asal_universitas;
this->email_edu = email_edu;
}
 
// Setter dan Getter
void SivitasAkademik::setUniversitas(string asal_universitas){
    this->asal_universitas = asal_universitas;
}
    
string SivitasAkademik::getUniversitas(){
    return asal_universitas;
}

void SivitasAkademik::setEmail_edu(string email_edu){
    this->email_edu = email_edu;
}

string SivitasAkademik::getEmail_edu(){
    return email_edu;
}

// Destructor
SivitasAkademik::~SivitasAkademik(){

}
