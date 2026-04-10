# Applikationsbeschreibung OpenKNX Hue Gateway

## Wichtige Hinweise

* Diese KNXprod wird nicht von der KNX Association offiziell unterstützt!
* Die Erzeugung der KNXprod geschieht auf eigene Verantwortung!
* Diese Firmware ist aktuell in Entwicklung (Version 0.4)

## Stand Version 0.4

- Bis zu **32 Hue-Kanäle** projektierbar.
- Bis zu **8 Lichtmanager** konfigurierbar und nutzbar.
- Globales Schaltverhalten über ETS einstellbar:
	- **Einschaltgeschwindigkeit (Sekunden)**
	- **Ausschaltgeschwindigkeit (Sekunden)**
- **Fünf Gerätetypen** unterstützt: Licht, Steckdose, Bewegungsmelder, Kontaktsensor, Taster/Schalter.
- **Szenen-Engine**: bis zu 8 Szenen pro Kanal (Schalten, Dimmen, CT, RGB).
- **Taster-/Drehregler-Unterstützung**: Kurz-/Langdruck, relative Dimmsteuerung, Jalousie.
- **Relatives Dimmen** mit konfigurierbarem Wiederholungsintervall (20–500 ms).

## Module

Die OpenKNX Hue Gateway besteht aus folgenden Modulen:

- [Basiseinstellungen](https://github.com/OpenKNX/OGM-Common/blob/v1/doc/Applikationsbeschreibung-Common.md)
- [Netzwerk](https://github.com/OpenKNX/OFM-Network/blob/v1/doc/Applikationsbeschreibung-Netzwerk.md)
- [Hue Bridge](https://github.com/estebanri87/OFM-HueGatewayModule/blob/v1/docs/Applikationsbeschreibung.md)
- [Logik](https://github.com/OpenKNX/OFM-LogicModule/blob/v1/doc/Applikationsbeschreibung-Logik.md)
- [Funktionsblöcke](https://github.com/OpenKNX/OFM-FunctionBlocks/blob/v1/doc/Applikationsbeschreibung-FunctionBlocks.md)