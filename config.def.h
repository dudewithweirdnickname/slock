/* user and group to drop privileges to */
static const char *user  = "nouser";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#222222",   /* during input */
	[FAILED] = "#900000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
