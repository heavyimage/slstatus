/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
static const int interval = 5000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */

        { battery_perc,     "BAT %s%% | ",      "BAT0"},
        { battery_state,    "BATSTATE %s | ",   "BAT0"},
        { wifi_perc,        "WiFi %s%% | ",     "wlp2s0"},
        { cpu_perc,         "CPU %s%% | ",     NULL},
        { ram_perc,         "RAM %s%% | ",     NULL},
        { datetime,         " %s",           "%F %T"},

};
