# **ESP32 Power Monitoring using PZEM-004T v3.0**  

### 📌 **Overview**  
This project utilizes an **ESP32** and a **PZEM-004T v3.0** energy meter to measure:  
✅ **Voltage (V)**  
✅ **Current (A)**  
✅ **Power (W)**  
✅ **Energy Consumption (kWh)**  
✅ **Frequency (Hz)**  
✅ **Power Factor (PF)**  

All measured data is displayed via the **Serial Monitor**, making it easy to track real-time power consumption.  

---

### 🔧 **Hardware Requirements**  
- 🟢 **ESP32 Board**  
- 🟢 **PZEM-004T v3.0** Energy Meter  
- 🟢 **TTL to RS485 Module** (for proper communication)  
- 🟢 **Jumper Wires**  

---

### ⚡ **Wiring Guide**  
| **PZEM-004T v3.0** | **ESP32** |
|--------------------|-----------|
| TX (RS485 A)      | GPIO 12   |
| RX (RS485 B)      | GPIO 14   |
| GND               | GND       |
| VCC (5V)          | 5V        |

**⚠️ Important:** The PZEM module is designed to measure **AC power**. Ensure correct wiring before use!  

---

### 🚀 **Installation & Usage**  
1️⃣ **Install the required library**  
   - Open Arduino IDE  
   - Go to **Sketch** → **Include Library** → **Manage Libraries**  
   - Search for **PZEM004Tv30** and install it  

2️⃣ **Upload the Code**  
   - Connect your **ESP32** to your computer  
   - Open the provided **Arduino sketch**  
   - Select the correct **Board: ESP32 Dev Module**  
   - Choose the right **COM Port**  
   - Click **Upload**  

3️⃣ **Open Serial Monitor**  
   - Set baud rate to **115200**  
   - Observe real-time power data  

---

### 🖥️ **Example Output on Serial Monitor**  
```plaintext
Starting PZEM-004T v3.0 Power Monitoring...
Voltage: 220.5 V
Current: 1.23 A
Power: 271.6 W
Energy: 0.004 kWh
Frequency: 50.0 Hz
Power Factor: 0.95
-----------------------------------
```

---

### 💡 **Possible Enhancements**  
🔹 Send data to **MQTT** for IoT applications 📡  
🔹 Display data on a **TFT or OLED screen** 🖥️  
🔹 Store power consumption history in **Google Sheets or a database** 💾  

---

### 📜 **License & Credits**  
- 📝 **Author:** Yodha Ardiansyah  
- 🌐 **Website:** [arunovasi.my.id](https://arunovasi.my.id)  
- 📜 **License:** Open-source (MIT) - Free to modify and distribute!  

🎯 *Power your IoT projects with real-time energy monitoring!* 🚀
