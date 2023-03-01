# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

class Course():
    # Constructor
    def __init__(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah
        self.Mhsiswa = []
        self.Dos = []
        
    # Setter dan Getter
    def setNamaMataKuliah(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah
        
    def getNamaMataKuliah(self):
        return self.nama_matakuliah
    
    def getMhsiswa(self):
        return self.Mhsiswa
    
    def getDos(self):
        return self.Dos
    
    # Tambah mahasiswa
    def addMahasiswa(self, mahasiswa):
        self.Mhsiswa.append(mahasiswa)
    
    # Tambah dosen
    def addDosen(self, dosen):
        self.Dos.append(dosen)
