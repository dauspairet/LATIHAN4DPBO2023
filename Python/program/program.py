# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

class ProgramStudi():
    # Constructor
    def __init__(self, nama_prodi, kode, course):
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.course = course
    
    # Setter dan getter
    def setNamaProdi(self, nama_prodi):
        self.nama_prodi = nama_prodi
    
    def getNamaProdi(self):
        return self.nama_prodi
    
    def setKode(self, kode):
        self.kode = kode
         
    def getKode(self):
        return self.kode
    
    def setCourse(self, course):
        self.course = course
         
    def getCourse(self):
        return self.course