#pragma once

// Preloads a Wi-Fi network so the device joins it without the setup portal.
// Copy this file to include/wifi_secrets.h (ignored by git) and fill in your network.
// The network is saved on the device once, so it stays after an update to a release build, and a
// password changed or network forgotten later through the portal or button is left alone.

#define PRELOADED_WIFI_SSID "your-network-name"
#define PRELOADED_WIFI_PASSWORD "your-password"
