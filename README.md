# 🎵 NFC-Based Jukebox – Arduino Project  
A smart jukebox that plays music when scanning NFC tags.

## Overview  
This project is an **NFC-based Jukebox** using **Arduino, an RFID-RC522 NFC reader, and a DFPlayer Mini audio module**. Users can play songs by scanning NFC tags, making music selection seamless and interactive.  

## Features  
 **Plays songs** when scanning an NFC tag.  
 **Stores music** on a microSD card and plays via **DFPlayer Mini**.  
 **Uses RFID-RC522 NFC reader** to detect and match NFC tags.  
 **Adjustable volume** with a potentiometer.  
 **Expandable song library** – add more NFC tags for different songs.  

## Components Used  
- **Arduino Uno** – main controller  
- **RFID-RC522 NFC Reader** – detects NFC tags  
- **DFPlayer Mini** – plays MP3 files from a microSD card  
- **Speaker** – for audio output  
- **10K Potentiometer** – volume control  
- **Breadboard & Jumper Wires** – circuit assembly  

## How It Works  
1. **Scan an NFC tag** near the RFID-RC522 reader.  
2. The Arduino checks the **tag's UID** and matches it to a song.  
3. **DFPlayer Mini** plays the corresponding song from the microSD card.  
4. **Use the potentiometer** to adjust the volume.  

## Future Improvements  
**WiFi/Bluetooth integration** – control song selection remotely.  
**LCD display** – show track info and song selection status.  
**Enhanced security** – encrypt NFC data for protected access.   
