#define PROXYCHAINS_CONF_FILE_ENV_VAR "PROXYCHAINS_CONF_FILE"
#define PROXYCHAINS_QUIET_MODE_ENV_VAR "PROXYCHAINS_QUIET_MODE"
#define PROXYCHAINS_CONF_FILE "proxychains.conf"
#define LOG_PREFIX "[proxychains] "

#define PROXYCHAINS_VERSION_MAJOR 4
#define PROXYCHAINS_VERSION_MINOR 1
#define PROXYCHAINS_VERSION_BUGFIX 0

#include <stddef.h>

char *get_config_path(char* default_path, char* pbuf, size_t bufsize);
