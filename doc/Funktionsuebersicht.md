# Hue Gateway

Das Hue Gateway integriert Philips Hue Geräte über die Hue API v2 in das KNX-System.
Es stehen bis zu 32 Hue-Kanäle zur Verfügung, die wahlweise als Licht, Steckdose,
Bewegungsmelder, Kontaktsensor oder Taster/Schalter konfiguriert werden können.
Die Synchronisation zwischen KNX und der Hue Bridge erfolgt bidirektional über
den Hue Event-Stream und ein optionales Polling.

Zusätzlich ist ein integrierter Lichtmanager mit bis zu 8 unabhängigen Human
Centric Lighting Mastern enthalten, sodass Farbtemperatur und Helligkeit
tageszeitabhängig automatisch nachgeführt werden können – wahlweise über
konfigurierbare Stützpunkte oder ein astronomisches Sonnenfenster.

## Applikationen

Diese Funktion wird als eigenständige [OpenKNX-Applikation](https://openknx.atlassian.net/wiki/spaces/OpenKNX/pages/3571727) angeboten.

- [OAM-HueGateway](https://github.com/OpenKNX/OAM-HueGateway)

## Kompatible Geräte

Für den Betrieb wird OpenKNX-kompatible Hardware mit LAN-Anschluss benötigt.

- [REG1-LAN-TP-Base](http://device.openknx.de/REG1-LAN-TP-Base)

## Weitere Informationen

- [Releases](https://github.com/OpenKNX/OAM-HueGateway/releases)
- [Dokumentation](https://github.com/OpenKNX/OFM-HueGatewayModule/blob/main/docs/Applikationsbeschreibung.md)
- [Github-Repository](https://github.com/OpenKNX/OAM-HueGateway)
- Thread im KNX-User-Forum *(folgt)*
