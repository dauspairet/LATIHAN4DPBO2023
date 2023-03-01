# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

class Human:
    # Constructor
    def __init__(self, NIK, nama, jenis_kelamin):
        self.NIK = NIK
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin
    
    # Setter dan Getter
    def setNIK(self, NIK):
        self.NIK = NIK
        
    def getNIK(self):
        return self.NIK
        
    def setNama(self, nama):
        self.nama = nama
        
    def getNama(self):
        return self.nama
        
    def setJenisKelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin
        
    def getJenisKelamin(self):
        return self.jenis_kelamin

