---
title: Module Pilihan untuk Fleur
layout: post
tag: fleur
---
Magisk belum mati dan pengguna akan berlipat ganda.

## JamesDSP Audio Manager
Alih-alih Dolby atau Viper, saya memilih [JamesDSP Audio Manager](https://forum.xda-developers.com/t/jamesdsp-audio-manager-mmt-ex.3607970/).

JamesDSP adalah aplikasi _open source_ untuk mengatur audio yang bekerja dengan baik di Fleur.

Aplikasi ini menawarkan lebih banyak pengaturan dan kendali dibanding Dolby atau ViperFX. Berikut daftar fitur:

- Pro dynamic range compression
- Bass Boost
    - 1023/4095/8191 order FIR linear phase low pass bass boost
- Reverberation (Dual engine reverb)
    - GVerb
    - Progenitor 2
- 10 Band Hybrid Equalizer
    - Stereo Widen
    - Triode dual stage vacuum tube simulation
        - Simulate with real mathematical model of 12AX7 tube
    - Auto partitioning high efficient convolution engine
        - Support mono / stereo / full stereo(LL, LR, RL, RR) impulse response
        - Samples per channels should less than 1000000* for stereo
        - Samples per channels should less than 400000* for full stereo
        - Impulse response file support: V4A IRS, FLAC, WAV

Saya tidak mengalami _bootloop_ di ROM Xdroid Android 12.

Pemasangannya mudah hanya memasang dua module: **Android Modification Library** dan **JamesDSP Manager**.

## MTK Vest
MTK Vest berfungsi menetapkan governor yang diinginkan oleh pengguna di perangkat Mediatek. Module ini cocok untuk pengguna
- hemat daya,
- gaming,
- dam penggunaan normal.

## Bootloop Protector
Bootloop Protector melindungi kamu dari *module* yang membuat perangkat *bootloop*.

Cara kerjanya adlaah menonaktifkan semua module setelah mengalami *bootloop*.

Pastikan kamu sudah memasang Busybox agar module dapat bekerja.

## Thermal Killer
Thermal Killer mematikan fungsi thermal sehingga performa bisa bertambah. Namun, *handphone*-mu bisa panas karena thermal tidak berjalan.
