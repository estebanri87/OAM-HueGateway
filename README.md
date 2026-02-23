# OpenKNX Hue Gateway

Die OpenKNX Hue Gateway integriert Philips Hue Lampen in das KNX-System.

## Features

- Bidirektionale Synchronisation zwischen KNX und Philips Hue
- WebServer zur UUID-Entdeckung der Hue Lampen
- mDNS-Service (openknx-bridge.local)
- Unterstützung für bis zu 20 Hue Lampen-Kanäle
- Konfigurierbar über ETS

### Unterstützte Lampentypen

- Schaltbar (On/Off)
- Dimmbar
- Farbtemperatur
- RGB-Farbe

## Anwenderdokumentation

Die Anwenderdokumentation ist [hier](./doc/Applikationsbeschreibung.md) zu finden.

## Installation

Eine vorkomplierte Firmware ist [hier](https://github.com/OpenKNX/OAM-Hue/releases) zu finden. ZIP Datei herunterladen, entpacken und der Anleitung im Readme folgen.

## Hardware

Als Hardware kann jede OpenKNX oder OpenKNX-Ready Hardware mit LAN oder WLAN verwendet werden.
Die vorkompilierte Firmware unterstützt:

- [REG1-LAN-TP-Base](http://device.openknx.de/REG1-LAN-TP-Base)

## Lizenz

Diese Software steht unter der [GNU GPL v3](LICENSE).
