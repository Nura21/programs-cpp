#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main (){
	string ulangi;
	int pilih, Mtk, Fsk;
	do{
		cout << "Mencari Mata Pelajaran" << endl;
		cout << "1. Matematika" << endl;
		cout << "2. Fisika" << endl;
		cout << "3. Menampilkan Kasus Sederhana" << endl;
		cout << "Pilih Mata kuliah : ";
		cin >> pilih; 
		cout << endl;
		//Pemilihan Matkul
		if (pilih==1){
			cout << "Pilihan Menu Matematika" << endl;
			cout << "1. Phytagoras" <<  endl;
			cout << "2. Kubus" << endl;
			cout << "3. Aritmatika" << endl;
			cout << "4. Menampilkan Jenis Bilangan" << endl;
			cout << "5. Kalkulator" << endl;
			cout << "6. Pertambahan Matriks" << endl;
			cout << "7. Perkalian Matriks" << endl;
			cout << "Pilih Materi : ";
			cin >> Mtk;
			if (Mtk==1){
				double Depan, Dekat, Miring, hasil;
				cout << "Sisi a : "; cin >> Depan;
				cout << "Sisi b : "; cin >> Dekat;
				Miring = pow(Depan,2)+pow(Dekat,2);
				hasil = sqrt(Miring);
				cout << "Maka sisi miringnya : " << hasil;
			}else if (Mtk==2){
				double sisi, hasil1, hasil2;
				cout << "Sisi kubus : "; cin >> sisi;
				hasil1 = sisi*sqrt(2);
				hasil2 = sisi*sqrt(3);
				cout << "Diagonal Sisi nya adalah : " << hasil1 << endl;
				cout << "Diagonal ruangnya adalah : " << hasil2;
			}else if (Mtk==3){
				int nilai[5];
				double hasil, Un;
				int data, beda;
				cout << "Banyak data : "; cin >> data;
				for (int i=0; i<data; i++){
					cout << "Nilai ke-" << i+1 << " : ";
					cin >> nilai[i];
				}beda = nilai[1]-nilai[0];
				Un = nilai[0]+(data-1)*beda;
				cout << "Un nya adalah : " << Un;	
			}else if (Mtk==4){
				int bilangan;
				cout << "1. Bilangan Fibonacci" << endl;
				cout << "2. Bilangan Prima" << endl;
				cout << "3. Bilangan Ganjil" << endl;
				cout << "4. Bilangan Genap" << endl;
				cout << "5. Bilangan Bulat" << endl;
				cout << "6. Bilangan Cacah" << endl;
				cout << "Masukkan pilihan : ";
				cin >> bilangan;
				
				if (bilangan==1)
				{
					int bil1=1, bil2=0, awal=0;
					int i, n;
					cout << "Masukkan n (batas akhir) : ";
					cin >> n;
					for (i=0; i<n; i++)
					{
						awal=bil1+bil2;
						bil1=bil2;
						bil2=awal;
						cout << " " << awal;
					}	
				}else if (bilangan==2)
				{
					int bil, n, i, j;
					cout << "Masukkan batas bilangan : ";
					cin >> n;
					
					for (i=1; i<=n; i++){
						bil=0;
						for (j=1; j<=i; j++){
							if (i%j==0){
								bil+=1;
							}
						}if (bil==2){
							cout << i << " ";
						}
					}								
				}else if (bilangan==3)
				{
					int ganjil, batas;
					cout << "Masukkan batas bilangan : ";
					cin >> batas;
					for (ganjil=1; ganjil<=batas; ganjil++)
					{
						if (ganjil%2!=0)
						{
							cout << ganjil << " ";
						}
					}
				}else if (bilangan==4)
				{
					int genap, batas;
					cout << "Masukkan batas bilangan : ";
					cin >> batas;
					for (genap=1; genap<=batas; genap++)
					{
						if (genap%2==0)
						{
							cout << genap << " ";
						}
					}
				}else if (bilangan==5){
					int bulat;
					cout << "1. Bilangan bulat positif" << endl;
					cout << "2. Bilangan bulat negatif" << endl;
					cout << "Masukkan pilihan : "; cin >> bulat;
					
					if (bulat==1){
						int asli, n;
						cout << "Masukkan batas bilangan : ";
						cin >> n;
						for (asli=1; asli<=n; asli++){
							cout << asli << " ";
						}					
					}else if (bulat==2){
						float i, awal, batas;
						cout << "Masukkan batas bilangan : "; cin >> batas;
						cout << "Masukkan awal bilangan : "; cin >> awal; 
						for (i=awal; i<=batas; i++){
							cout << i << " ";
						}					
					}
				}else if (bilangan==6)
				{
					int cacah, n;
					cout << "Masukkan bilangan : ";
					cin >> n;
					for (cacah=0;cacah<=n; cacah++){
						cout << cacah << " ";
					}
				}
			}else if(Mtk==5){
				int kalkulator;
				cout << "1. Penjumlahan" << endl;
				cout << "2. Pengurangan" << endl;
				cout << "3. Perkalian" << endl;
				cout << "4. Pembagian" << endl;
				cout << "Pilih menu kalkulator : ";
				cin >> kalkulator;
				
				float angka1, angka2, hasil;
				cout << "Masukkan bilangan pertama : ";
				cin >> angka1;
				cout << "Masukkan bilangan kedua : ";
				cin >> angka2;
				if (kalkulator==1){
					hasil = angka1+angka2;
					cout << "Hasil penjumlahan : " << hasil << endl;
				}else if (kalkulator==2){
					hasil = angka1-angka2;
					cout << "Hasil pengurangan : " << hasil << endl;
				}else if (kalkulator==2){
					hasil = angka1*angka2;
					cout << "Hasil perkalian : " << hasil << endl;
				}else if (kalkulator==2){
					hasil = angka1/angka2;
					cout << "Hasil pembagian : " << hasil << endl;
				}
			}else if (Mtk==6){
				//Penjumlahan Matriks
				int baris[10][10], kolom[10][10], hasil[10][10];
				int  x, y, jumlahBaris, jumlahKolom; //variabel untuk permisalan dalam baris dan kolom
				
				cout << "\nPenjumlahan Matriks\n";
				cout << "Masukkan banyaknya ordo (baris) : ";
				cin >> jumlahBaris;
				cout << "Masukkan banyaknya ordo (kolom) : ";
				cin >> jumlahKolom;
				
				cout << "INPUT" << endl;
				cout << "Masukkan elemen baris : " << endl;
				for (x=0; x<jumlahBaris; x++){
					for (y=0; y<jumlahKolom; y++){
						cout << "matriks A [ " << x << " ] [ " << y<< " ] : ";
						cin >> baris[x][y];
					}
				}
										
				cout << "Masukkan elemen kolom : " << endl;
				for (x=0; x<jumlahBaris; x++){
					for(y=0; y<jumlahKolom; y++){
						cout << "matriks B [ " << x << " ] [ " << y<< " ] : ";
						cin >> kolom[x][y];
					}
				}
				
				cout << "OUTPUT MATRIKS A" << endl;
				for (x=0; x<jumlahBaris; x++)
				{
					for(y=0; y<jumlahKolom; y++)
					{
						cout << baris[x][y] << "\t";
					}
					cout << endl;
				}
				cout << "OUTPUT MATRIKS B" << endl;
				for (x=0; x<jumlahBaris; x++)
				{
					for(y=0; y<jumlahKolom; y++)
					{
						cout << kolom[x][y] << "\t";
					}
					cout << endl;
				}
				
				cout << "Hasil penjumlahan matriks : " << endl;
				for (x=0; x<jumlahBaris; x++){
					for (y=0; y<jumlahKolom; y++) {
						hasil[x][y] = baris[x][y] + kolom[x][y]; //Rumus penjumlahan matriks hanya sesuai posisi
						cout << hasil[x][y] << "\t";
					}cout << endl;
				}								
			}else if (Mtk==7){
				//Perkalian matriks
				int bil;
				
				cout << "Masukkan ordo matriks : "; 			
				cin >> bil;
				
				int A[bil][bil]; //Variabel untuk menyimpan Matriks A
				int B[bil][bil]; //Variabel untuk menyimpan Matriks B
				int hasil[bil][bil]; //Varibael untuk menyimpan hasil Matriks A dan B
				int x, y, z;
				int jumlah=0;
				
				cout << "Input Matriks A" << endl;
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						cout << "Matriks A [" << x << "] [" << y << "] : ";
						cin >> A[x][y]; //Matriks A
					}
				}
				cout << "Input Matriks B" << endl;
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						cout << "Matriks B [" << x << "] [" << y << "] : ";
						cin >> B[x][y]; //Matriks B				
					}		
				}
							
				cout << "Output matriks A" << endl;
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						cout << A[x][y] << "\t";
					}
					cout << endl;
				}
				
				cout << "Output matriks B" << endl;
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						cout << B[x][y] << "\t";
					}
					cout << endl;
				}
						
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						for (z=0; z<bil; z++) {
							jumlah = jumlah + A[x][z]* B[z][y]; //Sesuai dengan caranya baris kali kolom dengan menyamkan ordo nya dan membaginya (Z)
																//Hasil perkalian baris kolom di jumlahkan
						}
						hasil[x][y] = jumlah;
						jumlah=0;				
					}							
				}
				cout << "Hasil perkalian matriks" << endl;	
				for (x=0; x<bil; x++){
					for (y=0; y<bil; y++){
						cout << hasil[x][y]  << "\t";
					}
					cout << endl;				
				}			
			}				
		}else if (pilih==2){
			cout << "1. Energi Kinetik" << endl;
			cout << "2. Energi Potensial" << endl;
			cout << "3. Menghitung Massa" << endl;
			cout << "Pilih materi : ";
			cin >> Fsk;
			
			double masa, kec, tinggi, EK, EP;
			
			if (Fsk==1){
				cout << "Input massa benda (kg) : ";
				cin >> masa;
				cout << "Input kecepatan benda (m/s2) : ";
				cin >> kec;
				EK = (0.5*masa)*pow(kec,2);
				cout << "Enenrgi kinetiknya adalah : " << EK;	
			}else if (Fsk==2){
				cout << "Input massa benda (kg) : ";
				cin >> masa;
				cout << "Input percepatan gravitasi (m/s2) : ";
				cin >> kec;
				cout << "Input tinggi benda dari permukaan tanah (m) : ";
				cin >> tinggi;
				EP = masa*kec*tinggi;
				cout << "Energi Kinetiknya adalah : " << EP;
			}else if (Fsk==3){
				double pilih;
				cout << "1. Hitung massa Energi Kinetik" << endl;
				cout << "2. Hitung massa Enenrgi Potensial"<< endl;
				cout << "Pilih : ";
				cin >> pilih;
				
				if (pilih==1){
					cout << "Diketahui Energi kinetik : ";
					cin >> EK;
					cout << "Diketahui Kecepatan benda : ";
					cin >> kec;
					masa = EK/pow(kec,2)*2;
					cout << "Massa pada benda adalah : " << masa;
				}else if (pilih==2){
					cout << "Diketahi Enenrgi potensial : ";
					cin >> EP;
					cout << "Diketahui percepatan benda : ";
					cin >> kec;
					cout << "Diketahui tinggi benda : ";
					cin >> tinggi;
					masa = EP/kec*tinggi;
					cout << "Massa pada benda adalah : " << masa;
				}
			}
		}else if (pilih==3){
			int pilihKasus;
			cout << "1. Menampilkan Kasus Jenis Angkot" << endl;
			cout << "2. Menampilkan Kasus Pengurutan Data" << endl;
			cout << "3. Menampilkan Kasus Pencarian Data" << endl;
			cout << "Masukkan pilihan : ";
			cin >> pilihKasus;
			
			if (pilihKasus==1){
				int nilai;
				cout << "Masukkan nilai : ";
				cin >> nilai;
				
				if (nilai<=5){
					cout << "Angkot baik baik saja";
				}
				else if (nilai>5){
					cout << "Angkot tidak baik baik saja";
				}				
			}else if (pilihKasus==2){
				int pilihUrut;
				cout << "1. Pengurutan secara Menurun" << endl;
				cout << "2. Pengurutan secara Menaik" << endl;
				cout << "Masukkan pilihan : ";
				cin >> pilihUrut;
				int banyakNilai,i,j;
				int nilai[5];
				int k=1;
				int temp[k];
				if (pilihUrut==1){
					cout << "Masukkan banyaknya nilai : "; 
					cin >> banyakNilai;
					for (i=0; i<banyakNilai; i++){
						cout << "Elemen ke " << i+1 << " : ";
						cin >> nilai[i];
					}
					
					for (i=0; i<banyakNilai; i++){
						cout << setw(3) << nilai[i]; //setw sebagai jarak/tab
					}
					
					
					cout << "\nProses pengurutan\n";
					for (i=0; i<banyakNilai; i++){
						for (j=i+1; j<banyakNilai ; j++){
							if (nilai[i]<nilai[j]){ //Kurang dari nilai maka di urutkan secara menurun
								temp[k]=nilai[i]; //Hanya sebagai permisalan untuk penukaran posisi
								nilai[i]=nilai[j];
								nilai[j]=temp[k];
							}
						}	
					}
					for (i=0; i<banyakNilai; i++){
						cout << setw(3) << nilai[i];
					}					
				}
				else if(pilihUrut==2){
					int banyakNilai,i,j;
					int nilai[5];
					int k=1;
					cout << "Masukkan banyaknya nilai : "; 
					cin >> banyakNilai;
					for (i=0; i<banyakNilai; i++){
						cout << "Elemen ke " << i+1 << " : ";
						cin >> nilai[i];
					}
					
					for (i=0; i<banyakNilai; i++){
						cout << setw(3) << nilai[i];
					}
					
					cout << "\nProses pengurutan\n";
					for (i=0; i<banyakNilai; i++){
						for (j=i+1; j<banyakNilai ; j++){
							if (nilai[i]>nilai[j]){ //lebih dari nilai maka menggunakan metode menaik
								temp[k]=nilai[i]; //Variabel untuk penukaran posisi
								nilai[i]=nilai[j];
								nilai[j]=temp[k];
							}
						}	
					}
					for (i=0; i<banyakNilai; i++){
						cout << setw(3) << nilai[i];
					}			
				}				
			}else if (pilihKasus==3){
				//Pencarian Data
				int nilai, i, cari;
				int bilangan[100];
				cout << "Masukkan banyaknya nilai : ";
				cin >> nilai;
							
				for (i=0; i<nilai; i++){
					cout << "Masukkan bilangan ke-" << i << " : ";
					cin >> bilangan[i];
				}
				cout << "Masukkan bilangan yang di cari : ";
				for (i=0; i<nilai; i++){
				cin >> cari;
				
					if (bilangan[i]==cari){		//Sama dengan pencarian			
						cout << "Data di temukan pada indeks ke- " << i << endl;
					} 										
				}
				if (bilangan[i]!=cari){		//Tidak sama dengan pencarian					
					cout << "Data tidak di temukan pada indeks manapun" << endl;
				}									
			}
		}
		cout << "\nUlangi program [Y/N]: "; cin >> ulangi;
		cout << endl;
	}while (ulangi=="Y" || ulangi=="y");
		cout << "Keluar program" << endl;
		return 0;
}
