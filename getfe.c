#include <string.h>

const char *get_file_extension(const char *file_name)
{
    const char *dot = strrchr(file_name, '.');

    if(!dot || dot == file_name)
    {
        return "";
    }

    return dot + 1;
}
