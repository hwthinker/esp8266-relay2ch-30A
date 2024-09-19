# Modul ESP8266 Relay 2 Channel 30A 
![](https://github.com/hwthinker/esp8266-relay2ch-30A/blob/main/picture/1.png)


## Cara download dengan Serial USB biasa
![](https://github.com/hwthinker/ESP8266-relay2ch-30A/blob/main/picture/2.png)
- Pasang serial USB TTL dengan ketentuan: 
   - TX -> RX USB Serial (Kabel Putih)
   - RX -> TX USB Serial (Kabel Hijau)
   - GND -> GND USB Serial (Kabel Hitam)
- Pastikan supply DC 12VDC  dihubungkan Terminal block pin dengan label 7-28V
- Pastikan GND supply dihubungkan dengan GND 
- Tekan dan tahan tombol key pada Keyboard 
- klik (tekan dan lepas) tombol RST dan pastikan  tombol key masih di tekan
- Lepas tombol key
- Download program dan tunggu sampai selesai
- klik tombol RST untuk run-program (langkah ini penting agar firmware baru dijalankan)
- ulang langkah awal bila melakukan download ulang lagi


## Cara download dengan Serial USB auto Download
![](https://github.com/hwthinker/ESP8266-relay2ch-30A/blob/main/picture/3.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX -> RX USB Serial  
    - TX -> TX USB Serial 
    - GND -> GND USB Serial  
    - IO0 -> IO# USB Serial 
    - EN -> EN# USB Serial
- Pastikan supply DC 12VDC  dihubungkan Terminal block pin dengan label 7-28V
- Pastikan GND supply dihubungkan dengan GND 
- Download program dan tunggu sampai selesai

## Kode Program
- Kode program bisa dicek di link https://github.com/hwthinker/esp8266-relay2ch-30A/blob/main/src/main.cpp 

## Warning:❗⚠️
Aktifkan daya untuk menghidupkan alat hanya dengan satu jenis sumber daya, bisa 12VDC atau 5VDC. Jangan menghubungkan beberapa sumber daya secara bersamaan, karena akan menyebabkan kerusakan pada alat.