// Saya Muhamad Firdaus [2101995] mengerjakan
// soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan 
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

int main(){
    // Membuat objek mahasiswa
    Mahasiswa mhs1("1234", "19565", "Andi", "Laki-laki", "Universitas A", "andi@upi.edu", "Fakultas Teknik");
    Mahasiswa mhs2("2345", "19246", "Budi", "Laki-laki", "Universitas B", "budi@upi.edu", "Fakultas Teknik");
    Mahasiswa mhs3("3456", "19347", "Cindy", "Perempuan", "Universitas C", "cindy@upi.edu", "Fakultas Ekonomi");

    // List mahasiswa
    vector<Mahasiswa> listmhs;
    listmhs.push_back(mhs1);
    listmhs.push_back(mhs2);
    listmhs.push_back(mhs3);

    // Output
    cout << "#Data Mahasiswa" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "NIK              : " << listmhs[i].getNIK() << endl;
        cout << "NIM              : " << listmhs[i].getNIM() << endl;
        cout << "Nama             : " << listmhs[i].getNama() << endl;
        cout << "Jenis Kelamin    : " << listmhs[i].getJenisKelamin() << endl;
        cout << "Asal Universitas : " << listmhs[i].getUniversitas() << endl;
        cout << "Email            : " << listmhs[i].getEmail_edu() << endl;
        cout << "Fakultas         : " << listmhs[i].getFakultas() << endl << endl;
    }
    cout << "=====================================================\n" << endl;

    // Membuat objek dosen
    Dosen dosen1("4321", "123456", "Dian", "Perempuan", "Universitas A", "dian@upi.edu", "FPMIPA", "S2 Teknik Informatika", "Pemrograman Lanjut");
    Dosen dosen2("5432", "123457", "Eko", "Laki-laki", "Universitas B", "eko@upi.edu", "FPMIPA", "S3 Teknik Informatika", "Big Data");
    Dosen dosen3("6543", "123458", "Fajar", "Laki-laki", "Universitas C", "fajar@upi.edu", "FPMIPA", "S2 Manajemen", "Ekonomi Internasional");

    // List dosen
    vector <Dosen> listdsn;
    listdsn.push_back(dosen1);
    listdsn.push_back(dosen2);
    listdsn.push_back(dosen3);

    // Output
    cout << "#Data Dosen" << endl;
    for (int i = 0; i < 3; i++){
        cout << ">Dosen ke-" << i+1 << endl;
        cout << "NIK                : " << listdsn[i].getNIK() << endl;
        cout << "NIP                : " << listdsn[i].getNIP() << endl; 
        cout << "Nama               : " << listdsn[i].getNama() << endl;
        cout << "Jenis Kelamin      : " << listdsn[i].getJenisKelamin() << endl;
        cout << "Asal Universitas   : " << listdsn[i].getUniversitas() << endl;
        cout << "Email              : " << listdsn[i].getEmail_edu() << endl;
        cout << "Fakultas           : " << listdsn[i].getFakultas() << endl;
        cout << "Pendidikan Terakhir: " << listdsn[i].getPendidikanTerakhir() << endl;
        cout << "Fakultas           : " << listdsn[i].getKeahlian() << endl << endl;
    }
     cout << "=====================================================\n" << endl;

    // Membuat objek Course
    Course course1("Pemrograman Lanjut");
    Course course2("Big Data");
    Course course3("Ekonomi Internasional");

    // List Course
    vector <Course> listcrs;
    listcrs.push_back(course1);
    listcrs.push_back(course2);
    listcrs.push_back(course3);

    // Menambahkan mahasiswa ke course
    course1.addMahasiswa(mhs1);
    course1.addMahasiswa(mhs2);
    course2.addMahasiswa(mhs2);
    course2.addMahasiswa(mhs3);
    course3.addMahasiswa(mhs1);
    course3.addMahasiswa(mhs3);

    // Menambahkan dosen ke course
    course1.addDosen(dosen1);
    course2.addDosen(dosen2);
    course3.addDosen(dosen3);

    // Output course dan mahasiswa
    cout << "List Mahasiswa" << endl;
    cout << "Course " << course1.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs1 = course1.getMhsiswa();
    for (int i = 0; i < list_mhs1.size(); i++){
        cout << ">" << list_mhs1[i].getNama() << endl;
    }

    cout << "Course " << course2.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs2 = course2.getMhsiswa();
    for (int i = 0; i < list_mhs2.size(); i++){
        cout << ">" << list_mhs2[i].getNama() << endl;
    }

    cout << "Course " << course3.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs3 = course3.getMhsiswa();
    for (int i = 0; i < list_mhs3.size(); i++){
        cout << ">" << list_mhs3[i].getNama() << endl;
    }

    // Output course dan dosen pengajarnya
    cout << "\nList Dosen" << endl;
    cout << "Course " << course1.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn1 = course1.getDos();
    for (int i = 0; i < list_dsn1.size(); i++){
        cout << ">" << list_dsn1[i].getNama() << endl;
    }

    cout << "Course " << course2.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn2 = course2.getDos();
    for (int i = 0; i < list_dsn2.size(); i++){
        cout << ">" << list_dsn2[i].getNama() << endl;
    }

    cout << "Course " << course3.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn3 = course3.getDos();
    for (int i = 0; i < list_dsn3.size(); i++){
        cout << ">" << list_dsn3[i].getNama() << endl;
    }

    cout << "\n=====================================================" << endl;

    // Membuat objek program studi
    ProgramStudi ps("Ilmu Komputer", "123", "");

    // Output
    cout << "\n===Program Studi===" << endl;
    cout << "Program Studi  : " << ps.getNamaProdi() << endl;
    cout << "Kode           : " << ps.getKode() << endl;
    cout << "Mata Kuliah    :" << endl;
    for (int i = 0; i < listcrs.size(); i++){
    cout << "-" << listcrs[i].getNamaMataKuliah() << endl;
    }

    return 0;
};