// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class Human
class Human{
    private:
        // Atribut private
        string NIK;
        string nama;
        string jenis_kelamin;
        
    public:
        // Constructor
        Human();
        Human(string NIK, string nama, string jenis_kelamin);
        
        // Setter dan Getter
        void setNIK(string NIK);
        string getNIK();
        
        void setNama(string nama);
        string getNama();
        
        void setJenisKelamin(string jenis_kelamin);
        string getJenisKelamin();

        // Destructor
        ~Human();
};

// Class SivitasAkademik child dari Human
class SivitasAkademik : public Human{
    private:
        // Atribut private
        string asal_universitas;
        string email_edu;
        
    public:
        // Constructor
        SivitasAkademik();
        SivitasAkademik(string NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu);
        
        // Setter dan getter
        void setUniversitas(string asal_universitas);
        string getUniversitas();
        
        void setEmail_edu(string email_edu);
        string getEmail_edu();

        // Destructor
        ~SivitasAkademik();
};

// Class Mahasiswa child dari SivitasAkademik
class Mahasiswa : public SivitasAkademik{
    private:
        // Atribut private
        string NIM;
        string fakultas;
    public:
        // Constructor
        Mahasiswa();
        Mahasiswa(string NIK, string NIM, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas);
        
        // Setter dan getter
        void setNIM(string NIM);
        string getNIM();
        
        void setFakultas(string fakultas);
        string getFakultas();

        // Destructor
        ~Mahasiswa();
};

// Class Dosen child dari SivitasAkademik
class Dosen: public SivitasAkademik{
    private:
        // Atribut private
        string NIP;
        string fakultas;
        string pend_terakhir;
        string keahlian;
        
    public:
        // Constructor
        Dosen();
        Dosen(string NIK, string NIP, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string pend_terakhir, string keahlian);
        
        // Setter dan getter
        void setNIP(string NIP);
        string getNIP();
        
        void setFakultas(string fakultas);
        string getFakultas();
        
        void setPendidikanTerakhir(string pend_terakhir);
        string getPendidikanTerakhir();
        
        void setKeahlian(string keahlian);
        string getKeahlian();

        // Destructor
        ~Dosen();
};

// Class ProgramStudi
class ProgramStudi{
    private:
        // Atribut private
        string nama_prodi;
        string kode;
        string course;
        
    public:
        // Constructor
        ProgramStudi();
        ProgramStudi(string nama_prodi, string kode, string course);
        
        // Setter dan getter
        void setNamaProdi(string nama_prodi);
        string getNamaProdi();
        
        void setKode(string kode);
        string getKode();
        
        void setCourse(string course);
        string getCourse();
        
        // Destructor
        ~ProgramStudi();
};

// Class Course
class Course{
private:
    // Atribut private
    string nama_matakuliah;
    vector<Mahasiswa> Mhsiswa;
    vector<Dosen> Dos;
    
public:
    // Constructor
    Course();
    Course(string nama_matakuliah);
    
    // Setter dan getter
    void setNamaMataKuliah(string nama_matakuliah);
    string getNamaMataKuliah();
    
    void addMahasiswa(Mahasiswa mahasiswa);
    vector<Mahasiswa> getMhsiswa();
    
    void addDosen(Dosen dosen);
    vector<Dosen> getDos();

    // Destructor
    ~Course();
};