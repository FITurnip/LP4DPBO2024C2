# LP4DPBO2024C2
## Janji
Saya Franklin Impianro Turnip mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.


## Desain Kelas
![image](https://github.com/FITurnip/LP4DPBO2024C2/assets/119851319/082467cf-f1ed-41a0-90ae-b0aa3f6fab98)

Car dan Motorcycle termasuk dalam kategori Vehicle. Karena karakteristiknya sama, car dan motorcycle mewarisi karakteristik vehicle. Apabila ingin memarikan vehicle, karakter pembedanya tidak begitu berpengaruh. Dengan asumsi tersebut, atribut yang dimasukkan adalah sebagai di atas. Parking Lot dan Garage adalah tempat untuk parkir, tetapi keduanya tidaklah selalu mewarisi karakteristik. Pada kenyataannya, garage sering kali tidak memperhitungkan seberapa banyak tempat parkir dan parking lot sering kali tidak berada dalam garage ataupun sebaliknya. Maka dari itu, garage dan parking menjadi object yang saling lepas. Keduanya dapat memarkirkan car dan motorcycle sehingga atributnya seperti di atas. 

## Desain Program
Dengan asumsi seperti di atas. Car dan Motorcycle hanya akan dapat dimodifikasi attributnya. Sementara itu, parking lot dan garage dapat mendeteksi keluar masuk kendaraan. Maka dari itu, keduanya mencatat mobil masuk dan keluar.

## Penjelesan Alur
1. Car dan Motorcycle di set sedemikian rupa.
2. Garage menampung car dan motorcycle.
3. Garage menampilkan apa yang ditampungnya.
4. Parking Lot akan menampung car & motorcycle. Apabila tempat tidak cukup, car & motorcycle tidak dapat dimasukkan.

## Dokumentasi
![Screenshot from 2024-03-11 23-24-00](https://github.com/FITurnip/LP4DPBO2024C2/assets/119851319/aadcfd38-d6cc-409b-a92d-168c3d4636c4)
