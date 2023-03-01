# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

from human import Human

class SivitasAkademik(Human):
    # Constructor
    def __init__(self, NIK, nama, jenis_kelamin, asal_universitas, email_edu):
        Human.__init__(self, NIK, nama, jenis_kelamin)
        self.asal_universitas = asal_universitas
        self.email_edu = email_edu

    # Setter dan Getter
    def setUniversitas(self, asal_universitas):
        self.asal_universitas = asal_universitas

    def getUniversitas(self):
        return self.asal_universitas

    def setEmail_edu(self, email_edu):
        self.email_edu = email_edu

    def getEmail_edu(self):
        return self.email_edu