# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

from sivitas import SivitasAkademik

class Dosen(SivitasAkademik):
    # Constructor
    def __init__(self, NIK, NIP, nama, jenis_kelamin, asal_universitas, email_edu, fakultas, pend_terakhir, keahlian):
        SivitasAkademik.__init__(self, NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.NIP = NIP
        self.fakultas = fakultas
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian
        
    # Setter dan Getter
    def setNIP(self, NIP):
        self.NIP = NIP
        
    def getNIP(self):
        return self.NIP
    
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
                
    def getFakultas(self):
        return self.fakultas
    
    def setPendidikanTerakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir
                
    def getPendidikanTerakhir(self):
        return self.pend_terakhir
    
    def setKeahlian(self, keahlian):
        self.keahlian = keahlian
                
    def getKeahlian(self):
        return self.keahlian
                
    
                
    
                
    

    