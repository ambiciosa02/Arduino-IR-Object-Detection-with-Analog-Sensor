# Arduino-IR-Object-Detection-with-Analog-Sensor
This Arduino sketch is a basic IR signal detection program. It uses an IR LED to emit infrared light and an analog IR sensor to read the reflected signal, detecting the presence of nearby objects.


🔍 How it works
1️⃣ Hardware setup

IR LED → pin 3, emits infrared light.

IR sensor / photodiode → analog input A0, reads reflected IR signal.

2️⃣ Program flow

Setup:

ledIR set as output.

Serial communication initialized at 9600 bps for monitoring.

Loop:

Turn the IR LED ON with digitalWrite(ledIR, HIGH).

Read the analog value from capteurIR (IR sensor).

Print the value to Serial Monitor.

If the value > 800 (threshold):

Print "💡 Présence détectée !"

Wait 200 ms before next reading.

3️⃣ What you’ll see

Serial Monitor continuously shows IR signal values.

If a strong reflection is detected (object nearby), it prints the presence message.
