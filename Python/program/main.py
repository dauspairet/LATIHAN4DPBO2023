# Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

# import class
from mahasiswa import Mahasiswa
from dosen import Dosen
from course import Course
from program import ProgramStudi

# Membuat objek mahasiswa
mhs1 = Mahasiswa("1234", "19565", "Andi", "Laki-laki", "Universitas A", "andi@upi.edu", "Fakultas Teknik")
mhs2 = Mahasiswa("2345", "19246", "Budi", "Laki-laki", "Universitas B", "budi@upi.edu", "Fakultas Teknik")
mhs3 = Mahasiswa("3456", "19347", "Cindy", "Perempuan", "Universitas C", "cindy@upi.edu", "Fakultas Ekonomi")

# List mahasiswa
listmhs = []
listmhs.append(mhs1)
listmhs.append(mhs2)
listmhs.append(mhs3)

# Output
print("#Data Mahasiswa")
for i in range(len(listmhs)):
    print("Mahasiswa ke-", i+1)
    print("NIK              : ", listmhs[i].getNIK())
    print("NIM              : ", listmhs[i].getNIM())
    print("Nama             : ", listmhs[i].getNama())
    print("Jenis Kelamin    : ", listmhs[i].getJenisKelamin())
    print("Asal Universitas : ", listmhs[i].getUniversitas())
    print("Email            : ", listmhs[i].getEmail_edu())
    print("Fakultas         : ", listmhs[i].getFakultas()+ "\n")
print("=====================================================\n")

# Membuat objek dosen
dosen1 = Dosen("4321", "123456", "Dian", "Perempuan", "Universitas A", "dian@upi.edu", "FPMIPA", "S2 Teknik Informatika", "Pemrograman Lanjut")
dosen2 = Dosen("5432", "123457", "Eko", "Laki-laki", "Universitas B", "eko@upi.edu", "FPMIPA", "S3 Teknik Informatika", "Big Data")
dosen3 = Dosen("6543", "123458", "Fajar", "Laki-laki", "Universitas C", "fajar@upi.edu", "FPMIPA", "S2 Manajemen", "Ekonomi Internasional")

# List dosen
listdsn = []
listdsn.append(dosen1)
listdsn.append(dosen2)
listdsn.append(dosen3)

# Output
print("#Data Dosen")
for i in range(len(listdsn)):
    print(">Dosen ke-", i+1)
    print("NIK                  : ", listdsn[i].getNIK())
    print("NIP                  : ", listdsn[i].getNIP())
    print("Nama                 : ", listdsn[i].getNama())
    print("Jenis Kelamin        : ", listdsn[i].getJenisKelamin())
    print("Asal Universitas     : ", listdsn[i].getUniversitas())
    print("Email                : ", listdsn[i].getEmail_edu())
    print("Fakultas             : ", listdsn[i].getFakultas())
    print("Pendidikan Terakhir  : ", listdsn[i].getPendidikanTerakhir())
    print("Keahlian             : ", listdsn[i].getKeahlian()+ "\n")
print("=====================================================\n")

# Membuat objek dosen
course1 = Course("Pemrograman Lanjut")
course2 = Course("Big Data")
course3 = Course("Ekonomi Internasional")

# List Course
listcrs = []
listcrs.append(course1)
listcrs.append(course2)
listcrs.append(course3)

# Menambah mahasiswa
course1.addMahasiswa(mhs1)
course1.addMahasiswa(mhs2)
course2.addMahasiswa(mhs2)
course2.addMahasiswa(mhs3)
course3.addMahasiswa(mhs1)
course3.addMahasiswa(mhs3)

# Menambah dosen
course1.addDosen(dosen1)
course2.addDosen(dosen2)
course3.addDosen(dosen3)

# Mahasiswa
print("List Mahasiswa")
print("Course", course1.getNamaMataKuliah(), ":")
for mhs in course1.getMhsiswa():
    print(">" + mhs.getNama())
    
print("Course", course2.getNamaMataKuliah(), ":")
for mhs in course2.getMhsiswa():
    print(">" + mhs.getNama())
    
print("Course", course3.getNamaMataKuliah(), ":")
for mhs in course3.getMhsiswa():
    print(">" + mhs.getNama())

print("\n=====================================================\n")

# Dosen
print("List Dosen")
print("Course", course1.getNamaMataKuliah(), ":")
for dos in course1.getDos():
    print(">" + dos.getNama())
    
print("Course", course2.getNamaMataKuliah(), ":")
for dos in course2.getDos():
    print(">" + dos.getNama())
    
print("Course", course3.getNamaMataKuliah(), ":")
for dos in course3.getDos():
    print(">" + dos.getNama())

# Membuat objek program studi
ps = ProgramStudi("Ilmu Komputer", "123", "")

# Output
print("\n===Program Studi===")
print("Program Studi: " + ps.getNamaProdi())
print("Kode         : " + ps.getKode() + "\n")
print("Mata Kuliah:")
for i in range(len(listcrs)):
    print("-" + listcrs[i].getNamaMataKuliah())