/* user and group to drop privileges to */
static const char *user  = "jason";
static const char *group = "jason";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#595959",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
