// 			ULANGAN AKHIR SEMESTER
// Nama				: Fernando Saputra
// NIM				: 2021210069
// Makul			: Praktek Struktur Data
// Dosen Pengampu	: Iwan Setiawan,S.Kom.,M.Kom

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

#define ppn 0.10 //PPN = 10%
const int diskon = 20000 ;

int main (){
	string nama,no ;
	char menu[20], back ;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian,
		harga[10]={13500, 11500, 10500, 20000, 28500, 10000, 11000, 12500, 14000,20000}, i=0 ;
	bool saldo ;
	
	do {
		
		// --------------------- Tampilan Awal --------------------------------- //
		system("CLS") ;
		cout << endl ;
		cout << "\t\t\t\t__________________________________________________" 	<< endl ; 
		cout << "\t\t\t\t||______________________________________________||" 	<< endl ;
		cout << "\t\t\t\t||						||" 						<< endl ;
		cout << "\t\t\t\t||		SELAMAT DATANG DI		||" 				<< endl ;
		cout << "\t\t\t\t||		WAROENG PAK MAMAT		||" 				<< endl ;
		cout << "\t\t\t\t||						||" 						<< endl ;
		cout << "\t\t\t\t||______________________________________________||" 	<< endl ;
		cout << "\t\t\t\t__________________________________________________" 	<< endl ;
		cout << endl ;
		
		// --------------------- Perkenalan ---------------------------- //
		cout << "\t\t\tHallo Teman-Teman Semua. Selamat Pagi, Siang, Sore, dan Malam." 											<< endl ;
		cout << "\t\tSelamat Datang Di Waroeng Pak Mamat, Waroeng Sederhana Yang Menyajikan Makanan Terenak." 					<< endl ;
		cout << "\tKhusus Tanggal 1 Juni - 8 Juni Kami Memberikan Diskon Kepada Pelanggan Yang Memesan Minimal 3 Paket Hemat. " << endl ;
		cout << "\t\t\t\tYaitu Sebesar Rp.20.000 Ayo Pesan Sekarang !!! ^_^ " 												<< endl ;
		cout << endl ;
		cout << endl ;
		
		// --------------- Input Data -------------- //
		cout << "\tMasukkan Nama Anda	: " ;
		cin >> nama ;
		cout << "\tNo.Meja			: " ;
		cin >> no ;
		cout << endl ;
		cout << endl ;
		cout << "\t \t \t \t \tDAFTAR MENU WAROENG PAK MAMAT" << endl ;
		
		cout << "\t__________________________________________________________________________________________" 		<< endl ;
		cout << "\t||______________________________________________________________________________________||" 		<< endl ;
		cout << "\t||											||" 												<< endl ;
		cout << "\t||				    WAROENG PAK MAMAT					||" 									<< endl ;
		cout << "\t||				 PAKET HEMAT SUPER MURAH				||" 									<< endl ;
		cout << "\t||											||" 												<< endl ;
		cout << "\t||______________________________________________________________________________________||" 		<< endl ;
		cout << "\t||______________________________________________________________________________________||" 		<< endl ;
		cout << "\t||											||" 												<< endl ;
		cout << "\t||		[1] 	Nasi + Ayam Geprek + Minum		= Rp.13.500		||" 							<< endl ;
		cout << "\t||		[2] 	Nasi + Ayam Balado + Minum		= Rp.11.500		||" 							<< endl ;
		cout << "\t||		[3] 	Nasi + Ayam Kecap + Minum		= Rp.10.500		||" 							<< endl ;
		cout << "\t||		[4] 	Nasi + Ayam Goreng Mentega + Minum	= Rp.20.000		||" 						<< endl ;
		cout << "\t||		[5] 	Nasi Paket Komplit			= Rp.28.500		||" 								<< endl ;
		cout << "\t||		[6] 	Mie Ayam + Minum			= Rp.10.000		||" 								<< endl ;
		cout << "\t||		[7] 	Mie Pangsit + Minum			= Rp.11.000		||" 								<< endl ; 
		cout << "\t||		[8] 	Tekwan + Ceker/Sosis + Minum		= Rp.12.500		||" 						<< endl ;
		cout << "\t||		[9] 	Model Tahu/Telur + Ceker/Sosis + Minum	= Rp.14.000		||" 					<< endl ;
		cout << "\t||		[10] 	Model Tekwan Komplit			= Rp.20.000		||" 							<< endl ;
		cout << "\t||											||" 												<< endl ;
		cout << "\t||______________________________________________________________________________________||" 		<< endl ;
		cout << "\t__________________________________________________________________________________________" 		<< endl ;
		
		cout << endl ;
		cout << endl ;
		cout << "\t \t Silakan Pilih Paket Hemat Berdasarkan Nomor Yang Tersedia" << endl ;
		cout << "\t Pilihan Paket Hemat Anda	: " ;
		cin >> makanan ;
		
		// --------------------- Menu Pilihan ----------------------- //
		switch ( makanan ){
			case 1 :
				strcpy ( menu,"Nasi + Ayam Geprek + Minum" ) ;
				break ;
			case 2 :
				strcpy ( menu,"Nasi + Ayam Balado + Minum" ) ;
				i=1 ;
				break ;
			case 3 :
				strcpy ( menu,"Nasi + Ayam Kecap + Minum" ) ;
				i=2 ;
				break ;
			case 4 :
				strcpy ( menu,"Nasi + Ayam Goreng + Minum" ) ;
				i=3 ;
				break ;
			case 5 :
				strcpy ( menu,"Nasi Paket Komplit	" ) ;
				i=4 ;
				break ;
			case 6 :
				strcpy ( menu,"Mie Ayam + Minum	" ) ;
				i=5 ;
				break ;
			case 7 :
				strcpy ( menu,"Mie Pangsit + Minum	" ) ;
				i=6;
				break ;
			case 8 :
				strcpy ( menu,"Tekwan + Ceker/Sosis + Minum" ) ;
				i=7 ;
				break ;
			case 9 :
				strcpy ( menu,"Model + Ceker/Sosis + Minum" ) ;
				i=8 ;
				break ;
			case 10 :
				strcpy ( menu,"Model Tekwan Komplit	" ) ;
				i=9 ;
				break ;
			default :
				cout << "Pilihan Tidak Tersedia" << endl ; 
				goto ulang ;
		}
		
		cout << "\t Pesanan Anda			: " << menu << endl ;
		cout << "\t Jumlah Paket Hemat		: " ;
		cin >> jumlah ;
		
		makan = jumlah * harga[i] ;
		pajak = makan * ppn ;
		total = pajak + makan ;
		cout << endl ;
		cout << endl ;
		
		// ------------------------- Data Berhasil Di Input ------------------------ //
		cout << "\t__________________________________________________________________________________________" 	<< endl ;
		cout << "\t||______________________________________________________________________________________||" 	<< endl ;
		cout << "\t||											||" 											<< endl ;
		cout << "\t||				WAROENG PAK MAMAT					||" 									<< endl ;
		cout << "\t||											||" 											<< endl ;
		cout << "\t||______________________________________________________________________________________||" 	<< endl ;
		cout << "\t||______________________________________________________________________________________||" 	<< endl ;
		cout << "\t||											||" 											<< endl ;
		cout << "\t||	Nama Pemesan			: " 	<< nama 	<< "					||"					<< endl ;
		cout << "\t||	No.Meja 			: " 	<< no 		<< "						||"					<< endl ;
		cout << "\t||	Menu Paket Hemat		: " 	<< menu 	<< "			||"							<< endl ;
		cout << "\t||	Jumlah Paket Hemat		: " 	<< jumlah 	<< " Paket 					||" 			<< endl ;
		cout << "\t||	Harga Paket Hemat		: Rp." 	<< harga[i] << " * " << jumlah << "					||" << endl ;
		cout << "\t||	Pajak 				: Rp." 		<< pajak 		<< "					||"				<< endl ;
		cout << "\t||	Total Pembayaran		: Rp." 	<< total 	<< "					||"					<< endl ;
		cout << "\t||											||" 											<< endl ;
		cout << "\t||______________________________________________________________________________________||" 	<< endl ;
		cout << "\t__________________________________________________________________________________________" 	<< endl ; 
		
		
		// --------------------- Diskon ------------------------ //
		if ( jumlah >=3 ){
			bonus = total - diskon ;
			total = bonus ;
			cout << endl ;
			cout << "\tAnda Mendapatkan Diskon Potongan Harga	: Rp." << diskon << endl ;
			cout << "\tTotal Pembayaran Setelah Diskon		: Rp." << total << endl ;
		}
		
		// ---------------------- Pembayaran --------------------- //
		cout << endl ;
		cout << endl ;
		cout << "\tSilakan Bayar Disini			: Rp." ;
		cin >> bayar ;
		
		// --------------------- Perulangan ---------------------- //
		while ( saldo = bayar < total ){
			cout << "\tSaldo Anda Kurang, Silakan Bayar Lagi	: Rp." ;
			cin >> kurang ;
			bayar += kurang ;
		};
		
		// ------------------ Total Akhir Pembayaran -------------------- //
		kembalian = bayar - total ;
		cout << "\tUang Yang Anda Bayar			: Rp." << bayar << endl ;
		cout << "\tUang Kembalian				: Rp." << kembalian << endl ;
		cout << endl ;
		
		// ------------------------ Tampilan Akhir --------------------- //
		ulang :
			cout << "\n \n \t \t \t \t [ y = Yes  /  n = No ]" << endl ;
			cout << "\t \t \t Apakah Anda Ingin Memesan Lagi ? [y/n]  = " ;
			cin >> back ;
		} while ( back == 'y' || back == 'y' ) ;
		cout << endl ;
		cout << "\n\n\t\t\tTerima Kasih Telah Memesan Paket Hemat Kami ^_^" 	<< endl ;
		cout << "\t\t\t\t\tSelamat Menikmati ^_^"					<< endl ;
		cout << endl ;
		
		return 0 ;
	} 
