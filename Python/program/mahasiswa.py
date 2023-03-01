from sivitas import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    # Constructor
    def __init__(self, NIK, NIM, nama, jenis_kelamin, asal_universitas, email_edu, fakultas):
        SivitasAkademik.__init__(self, NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.NIM = NIM
        self.fakultas = fakultas
    
    # Setter dan Getter
    def setNIM(self, NIM):
        self.NIM = NIM
        
    def getNIM(self):
        return self.NIM
        
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
        
    def getFakultas(self):
        return self.fakultas