# alerte-poubelle-notification-mail
---
#### Ce projet permet d'alerter, via une notification, que la poubelle,et qu'elle doit être vidée.
---

## INTERFACE

[interface alerte-poubelle](https://drive.google.com/open?id=1RzkBR72Eif0vyPeDubpMzojzk2-QwWwJ)

---

# Bibliothéques

``` c++
#include <uTimerLib.h>
#include <Adafruit_MQTT.h>
#include <Adafruit_MQTT_Client.h>
#include <WiFi.h>
#include <HCSR04.h>
#include <Adafruit_Sensor.h>
```
---

# Liste des composants

[planche à pain](https://www.amazon.fr/Hilitand-Planche-Prototype-Soudure-Plastique/dp/B07GZJBDCP/ref=sr_1_3?s=computers&ie=UTF8&qid=1548257336&sr=1-3&keywords=planche+pain)

[esp 32](https://www.amazon.fr/JZK-d%C3%A9veloppement-dantenne-Bluetooth-Batterie/dp/B071JR9WS9/ref=sr_1_2?ie=UTF8&qid=1550056989&sr=8-2&keywords=esp32)

[HCSR04](https://www.amazon.fr/AZDelivery-Capteur-ultrasons-T%C3%A9l%C3%A9m%C3%A8tre-Raspberry/dp/B072N473HD/ref=sr_1_3?ie=UTF8&qid=1550675801&sr=8-3&keywords=HC-SR04)
