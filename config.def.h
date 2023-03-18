/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{ run_command, "%s | ", "sys-updates" },
	{ run_command, "%s | ", "internet" },
	{ run_command, "󰕾 %2s%% | ", "pamixer --get-volume" },
	{ run_command, "%s | ", "date '+󰃭 %b %d (%a)' " },
	{ run_command, "%s", "date '+󱑑 %I:%M%P'" },
};

