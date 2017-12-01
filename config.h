/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
static const int interval = 2000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */

        { battery_perc, "[BAT %s%%]     ", "BAT0"},
        { battery_state, "[BATSTATE %s] ", "BAT0"},
        { cpu_perc, "[CPU %3s%%]        ", NULL},
        { ram_perc, "[RAM %2s%%]        ", NULL},
        { datetime, "[ %s ]",           "%F %T"},
};
